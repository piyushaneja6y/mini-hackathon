#include <stdio.h>

int main()
{
    int choice, category;
    float budget, amount;
    float food = 0, travel = 0, shopping = 0, bills = 0, other = 0;
    float total, remaining;

    printf("=====================================\n");
    printf("       PERSONAL EXPENSE TRACKER\n");
    printf("=====================================\n");

    printf("Enter your monthly budget: Rs. ");
    scanf("%f", &budget);

    do
    {
        printf("\n----------- MAIN MENU -----------\n");
        printf("1. Add Expense\n");
        printf("2. View Expense Summary\n");
        printf("3. Check Remaining Budget\n");
        printf("4. Exit\n");
        printf("---------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\nSelect Expense Category:\n");
                printf("1. Food\n");
                printf("2. Travel\n");
                printf("3. Shopping\n");
                printf("4. Bills\n");
                printf("5. Other\n");
                printf("Enter category: ");
                scanf("%d", &category);

                printf("Enter expense amount: Rs. ");
                scanf("%f", &amount);

                if (amount <= 0)
                {
                    printf("Invalid amount! Expense must be greater than 0.\n");
                    break;
                }

                switch (category)
                {
                    case 1:
                        food = food + amount;
                        printf("Food expense added successfully.\n");
                        break;

                    case 2:
                        travel = travel + amount;
                        printf("Travel expense added successfully.\n");
                        break;

                    case 3:
                        shopping = shopping + amount;
                        printf("Shopping expense added successfully.\n");
                        break;

                    case 4:
                        bills = bills + amount;
                        printf("Bills expense added successfully.\n");
                        break;

                    case 5:
                        other = other + amount;
                        printf("Other expense added successfully.\n");
                        break;

                    default:
                        printf("Invalid category!\n");
                }
                break;

            case 2:
                total = food + travel + shopping + bills + other;

                printf("\n========== EXPENSE SUMMARY ==========\n");
                printf("Food Expense     : Rs. %.2f\n", food);
                printf("Travel Expense   : Rs. %.2f\n", travel);
                printf("Shopping Expense : Rs. %.2f\n", shopping);
                printf("Bills Expense    : Rs. %.2f\n", bills);
                printf("Other Expense    : Rs. %.2f\n", other);
                printf("-------------------------------------\n");
                printf("Total Expense    : Rs. %.2f\n", total);
                printf("Monthly Budget   : Rs. %.2f\n", budget);
                printf("=====================================\n");
                break;

            case 3:
                total = food + travel + shopping + bills + other;
                remaining = budget - total;

                printf("\nTotal Budget  : Rs. %.2f\n", budget);
                printf("Total Expense : Rs. %.2f\n", total);

                if (remaining >= 0)
                {
                    printf("Remaining Budget: Rs. %.2f\n", remaining);
                }
                else
                {
                    printf("Budget exceeded by: Rs. %.2f\n", -remaining);
                }
                break;

            case 4:
                printf("\nThank you for using Personal Expense Tracker!\n");
                break;

            default:
                printf("\nInvalid choice! Please enter 1 to 4.\n");
        }

    } while (choice != 4);

    return 0;
}
