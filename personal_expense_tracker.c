#include <stdio.h>
#define MAX 50
int main()
{
    int password, attempts = 3;
    int n, i, category[MAX];
    int day[MAX], month[MAX], year[MAX];
    int choice, num, rating, stars;

    float amount[MAX];
    float budget, total, remaining;
    float food = 0, travel = 0, books = 0, entertainment = 0;
    float foodLimit, travelLimit, booksLimit, entertainmentLimit;
    float fp = 0, tp = 0, bp = 0, ep = 0;

    char feedback[200];
    FILE *file;

    printf("=====================================\n");
    printf("       PERSONAL EXPENSE TRACKER\n");
    printf("=====================================\n");

    while (attempts > 0)
    {
        printf("Enter Password: ");
        scanf("%d", &password);

        if (password == 1122)
        {
            printf("Login Successful!\n");
            break;
        }

        attempts--;
        printf("Wrong Password!\n");

        if (attempts > 0)
            printf("Attempts Left😩: %d\n", attempts);
    }

    if (attempts == 0)
    {
        printf("Access Denied!🙅‍♂️\n");
        return 0;
    }
    printf("\nEnter Monthly Budget: Rs. ");
    scanf("%f", &budget);

    if (budget <= 0)
    {
        printf("Invalid Budget!\n");
        return 0;
    }
    printf("\n------ SET CATEGORY LIMITS ------\n");

    printf("Food Limit🥔: Rs. ");
    scanf("%f", &foodLimit);

    printf("Travel Limit🚗: Rs. ");
    scanf("%f", &travelLimit);

    printf("Books Limit📚: Rs. ");
    scanf("%f", &booksLimit);

    printf("Entertainment Limit🎥: Rs. ");
    scanf("%f", &entertainmentLimit);

    
    printf("\nEnter Number of Expenses: ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX)
    {
        printf("Invalid Number!\n");
        return 0;
    }
    for (i = 0; i < n; i++)
    {
        printf("\n------ EXPENSE💸 %d ------\n", i + 1);

        printf("Enter Date (DD MM YYYY): ");
        scanf("%d %d %d", &day[i], &month[i], &year[i]);

        printf("1. Food💸\n");
        printf("2. Travel🚗\n");
        printf("3. Books📚\n");
        printf("4. Entertainment🎬\n");

        printf("Enter Category: ");
        scanf("%d", &category[i]);

        if (category[i] < 1 || category[i] > 4)
        {
            printf("Invalid Category!\n");
            return 0;
        }

        printf("Enter Amount: Rs. ");
        scanf("%f", &amount[i]);

        if (amount[i] < 0)
        {
            printf("Invalid Amount!\n");
            return 0;
        }

        printf("Expense Added Successfully!\n");
    }

    
    printf("\n=====================================\n");
    printf("            EXPENSE LIST\n");
    printf("=====================================\n");

    for (i = 0; i < n; i++)
    {
        printf("%d. %02d/%02d/%04d | ",
               i + 1, day[i], month[i], year[i]);

        if (category[i] == 1)
            printf("Food");
        else if (category[i] == 2)
            printf("Travel");
        else if (category[i] == 3)
            printf("Books");
        else
            printf("Entertainment");

        printf(" | Rs. %.2f\n", amount[i]);
    }

   

    printf("\nDo You Want To Modify An Expense?\n");
    printf("1. Edit Expense\n");
    printf("2. Delete Expense\n");
    printf("3. No Changes\n");

    printf("Enter Choice: ");
    scanf("%d", &choice);

    

    if (choice == 1)
    {
        printf("Enter Expense Number To Edit: ");
        scanf("%d", &num);

        if (num >= 1 && num <= n)
        {
            i = num - 1;

            printf("Enter New Date (DD MM YYYY): ");
            scanf("%d %d %d", &day[i], &month[i], &year[i]);

            printf("1. Food\n");
            printf("2. Travel\n");
            printf("3. Books\n");
            printf("4. Entertainment\n");

            printf("Enter New Category: ");
            scanf("%d", &category[i]);

            if (category[i] < 1 || category[i] > 4)
            {
                printf("Invalid Category!\n");
                return 0;
            }

            printf("Enter New Amount: Rs. ");
            scanf("%f", &amount[i]);

            if (amount[i] < 0)
            {
                printf("Invalid Amount!\n");
                return 0;
            }

            printf("Expense Edited Successfully!\n");
        }
        else
        {
            printf("Invalid Expense Number!\n");
        }
    }
    else if (choice == 2)
    {
        printf("Enter Expense Number To Delete: ");
        scanf("%d", &num);

        if (num >= 1 && num <= n)
        {
            for (i = num - 1; i < n - 1; i++)
            {
                day[i] = day[i + 1];
                month[i] = month[i + 1];
                year[i] = year[i + 1];
                category[i] = category[i + 1];
                amount[i] = amount[i + 1];
            }

            n--;
            printf("Expense Deleted Successfully!\n");
        }
        else
        {
            printf("Invalid Expense Number!\n");
        }
    }
    else
    {
        printf("No Changes Made.\n");
    }
    for (i = 0; i < n; i++)
    {
        if (category[i] == 1)
            food += amount[i];

        else if (category[i] == 2)
            travel += amount[i];

        else if (category[i] == 3)
            books += amount[i];

        else
            entertainment += amount[i];
    }

    total = food + travel + books + entertainment;
    remaining = budget - total;
    printf("\n=====================================\n");
    printf("            EXPENSE SUMMARY\n");
    printf("=====================================\n");

    printf("Food          : Rs. %.2f\n", food);
    printf("Travel        : Rs. %.2f\n", travel);
    printf("Books         : Rs. %.2f\n", books);
    printf("Entertainment : Rs. %.2f\n", entertainment);

    printf("-------------------------------------\n");
    printf("Total Spending   : Rs. %.2f\n", total);
    printf("Monthly Budget   : Rs. %.2f\n", budget);
    printf("Remaining Budget : Rs. %.2f\n", remaining);

    

    printf("\n------ CATEGORY BUDGET STATUS ------\n");

    if (food > foodLimit)
        printf("Food: Exceeded by Rs. %.2f\n", food - foodLimit);
    else
        printf("Food: Within Limit\n");

    if (travel > travelLimit)
        printf("Travel: Exceeded by Rs. %.2f\n", travel - travelLimit);
    else
        printf("Travel: Within Limit\n");

    if (books > booksLimit)
        printf("Books: Exceeded by Rs. %.2f\n", books - booksLimit);
    else
        printf("Books: Within Limit\n");

    if (entertainment > entertainmentLimit)
        printf("Entertainment: Exceeded by Rs. %.2f\n",
               entertainment - entertainmentLimit);
    else
        printf("Entertainment: Within Limit\n");
    if (total > 0)
    {
        fp = (food / total) * 100;
        tp = (travel / total) * 100;
        bp = (books / total) * 100;
        ep = (entertainment / total) * 100;
    }

    printf("\n------ PERCENTAGE ANALYSIS ------\n");

    printf("Food          : %.2f%%\n", fp);
    printf("Travel        : %.2f%%\n", tp);
    printf("Books         : %.2f%%\n", bp);
    printf("Entertainment : %.2f%%\n", ep);

   
    printf("\nHighest Expenditure Category: ");

    if (food >= travel && food >= books &&
        food >= entertainment)
    {
        printf("Food - Rs. %.2f\n", food);
    }
    else if (travel >= food && travel >= books &&
             travel >= entertainment)
    {
        printf("Travel - Rs. %.2f\n", travel);
    }
    else if (books >= food && books >= travel &&
             books >= entertainment)
    {
        printf("Books - Rs. %.2f\n", books);
    }
    else
    {
        printf("Entertainment - Rs. %.2f\n", entertainment);
    }

   
    printf("\nBudget Status: ");

    if (total > budget)
        printf("WARNING! Exceeded by Rs. %.2f\n", total - budget);

    else if (total == budget)
        printf("Budget Fully Used!\n");

    else
        printf("Within Budget - Rs. %.2f Remaining\n", remaining);
    printf("\n=====================================\n");
    printf("           EXPENSE GRAPH\n");
    printf("=====================================\n");
    printf("Each * represents approximately 5%%\n\n");

    printf("Food          | ");
    stars = (int)(fp / 5);
    for (i = 0; i < stars; i++)
        printf("*");
    printf(" %.2f%%\n", fp);

    printf("Travel        | ");
    stars = (int)(tp / 5);
    for (i = 0; i < stars; i++)
        printf("*");
    printf(" %.2f%%\n", tp);

    printf("Books         | ");
    stars = (int)(bp / 5);
    for (i = 0; i < stars; i++)
        printf("*");
    printf(" %.2f%%\n", bp);

    printf("Entertainment | ");
    stars = (int)(ep / 5);
    for (i = 0; i < stars; i++)
        printf("*");
    printf(" %.2f%%\n", ep);

    printf("\n=====================================\n");
    printf("          DATE-WISE EXPENSES\n");
    printf("=====================================\n");

    for (i = 0; i < n; i++)
    {
        printf("%02d/%02d/%04d | ",
               day[i], month[i], year[i]);

        if (category[i] == 1)
            printf("Food");
        else if (category[i] == 2)
            printf("Travel");
        else if (category[i] == 3)
            printf("Books");
        else
            printf("Entertainment");

        printf(" | Rs. %.2f\n", amount[i]);
    }
    file = fopen("expense_report.txt", "w");

    if (file != NULL)
    {
        fprintf(file, "PERSONAL EXPENSE REPORT\n");
        fprintf(file, "=======================\n\n");

        fprintf(file, "Monthly Budget   : Rs. %.2f\n", budget);
        fprintf(file, "Total Spending   : Rs. %.2f\n", total);
        fprintf(file, "Remaining Budget : Rs. %.2f\n\n", remaining);

        fprintf(file, "CATEGORY SUMMARY\n");
        fprintf(file, "Food          : Rs. %.2f (%.2f%%)\n", food, fp);
        fprintf(file, "Travel        : Rs. %.2f (%.2f%%)\n", travel, tp);
        fprintf(file, "Books         : Rs. %.2f (%.2f%%)\n", books, bp);
        fprintf(file, "Entertainment : Rs. %.2f (%.2f%%)\n",
                entertainment, ep);

        fprintf(file, "\nDATE-WISE EXPENSES\n");

        for (i = 0; i < n; i++)
        {
            fprintf(file, "%02d/%02d/%04d | ",
                    day[i], month[i], year[i]);

            if (category[i] == 1)
                fprintf(file, "Food");
            else if (category[i] == 2)
                fprintf(file, "Travel");
            else if (category[i] == 3)
                fprintf(file, "Books");
            else
                fprintf(file, "Entertainment");

            fprintf(file, " | Rs. %.2f\n", amount[i]);
        }

        fclose(file);
        printf("\nReport Exported Successfully!\n");
        printf("File Name: expense_report.txt\n");
    }
    else
    {
        printf("\nReport Could Not Be Created!\n");
    }
    printf("\n=====================================\n");
    printf("              FEEDBACK\n");
    printf("=====================================\n");

    printf("Rate Program (1-5): ");
    scanf("%d", &rating);
    if (rating == 5)
        printf("Excellent! Thank You!\n");
    else if (rating == 4)
        printf("Great! Thank You!\n");
    else if (rating == 3)
        printf("Good! We Will Improve.\n");
    else if (rating == 1 || rating == 2)
        printf("Thank You For Your Feedback.\n");
    else
        printf("Invalid Rating!\n");
    getchar();
     printf("Write Your Feedback: ");
    fgets(feedback, sizeof(feedback), stdin);

    printf("Your Feedback: %s", feedback);
    printf("\n=====================================\n");
    printf(" THANK YOU FOR USING EXPENSE TRACKER🤖\n");
    printf("=====================================\n");
   return 0;
}