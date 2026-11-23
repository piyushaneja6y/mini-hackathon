# 💸 Personal Expense Tracker

::: {align="center"}
`<img src="https://img.shields.io/badge/C-Programming-blue?style=for-the-badge&logo=c&logoColor=white"/>`{=html}
`<img src="https://img.shields.io/badge/Team-BITEFORCE-purple?style=for-the-badge"/>`{=html}
`<img src="https://img.shields.io/badge/Mini_Hackathon-2026-0A9EDC?style=for-the-badge"/>`{=html}

**A simple yet feature-rich expense management system built using C.**

*Track your money. Control your spending. Stay within your budget.*
:::

------------------------------------------------------------------------

## 📌 About the Project

The **Personal Expense Tracker** is a console-based application
developed using C programming as part of the C Programming Mini
Hackathon.

It is designed to help students manage their monthly budgets by
recording expenses, organizing them into categories, monitoring spending
limits, and generating detailed expense reports.

The application also provides spending percentages, graphical
representations, and budget alerts to help users understand their
spending habits.

## 🎯 Objectives

-   Manage monthly budgets effectively.
-   Maintain records of daily expenses.
-   Set individual spending limits for different categories.
-   Monitor total expenditure and remaining balance.
-   Analyze spending patterns through percentages and graphs.
-   Generate a detailed expense report.

## ✨ Features

  -----------------------------------------------------------------------
  Feature                             Description
  ----------------------------------- -----------------------------------
  🔐 Password Login                   Password-protected access with
                                      three attempts.

  💰 Monthly Budget                   Set a monthly spending limit.

  📊 Category Limits                  Set separate budgets for Food,
                                      Travel, Books and Entertainment.

  📝 Add Expenses                     Record amounts with dates and
                                      categories.

  ✏️ Edit Expenses                    Modify previously entered expenses.

  🗑️ Delete Expenses                  Remove unwanted expense records.

  📈 Percentage Analysis              Calculate category-wise spending
                                      percentages.

  🏆 Highest Expenditure              Identify the category with maximum
                                      spending.

  ⚠️ Budget Alerts                    Detect exceeded category limits and
                                      overall budget.

  📉 Expense Graph                    Display spending percentages using
                                      an ASCII bar graph.

  📅 Date-wise Records                Display expenses according to their
                                      recorded dates.

  📄 Report Generation                Automatically export a report as a
                                      text file.

  ⭐ User Feedback                    Collect ratings and written
                                      feedback.
  -----------------------------------------------------------------------

## 📂 Expense Categories

  Category           Description
  ------------------ -----------------------------------------
  🍔 Food            Food and dining expenses
  🚗 Travel          Transportation expenses
  📚 Books           Books and educational expenses
  🎬 Entertainment   Entertainment and recreational expenses

## ⚙️ How It Works

1.  **Login:** Enter the password to access the application.
2.  **Set Budget:** Enter the monthly budget.
3.  **Set Category Limits:** Define individual spending limits.
4.  **Record Expenses:** Enter the date, category and amount.
5.  **View Expense List:** Display all recorded transactions.
6.  **Modify Records:** Edit or delete an expense if required.
7.  **Analyze Spending:** Calculate category totals and percentages.
8.  **Check Budget:** Display remaining balance and budget warnings.
9.  **View Graph:** Generate a visual representation of spending.
10. **Export Report:** Save the expense summary to a text file.
11. **Feedback:** Submit a rating and written feedback.

## 📊 Sample Expense Analysis

*Illustrative example of the calculation and reporting format.*

Suppose the user enters:

-   Monthly Budget: ₹10,000
-   Food: ₹2,000
-   Travel: ₹1,500
-   Books: ₹1,000
-   Entertainment: ₹500

  Category              Amount   Percentage
  --------------- ------------ ------------
  Food                  ₹2,000          40%
  Travel                ₹1,500          30%
  Books                 ₹1,000          20%
  Entertainment           ₹500          10%
  **Total**         **₹5,000**     **100%**

**Budget Status:**

-   Total Spending: ₹5,000
-   Monthly Budget: ₹10,000
-   Remaining Budget: ₹5,000
-   Highest Expenditure: Food
-   Status: Within Budget

## 📉 Expense Graph Preview

``` text
========== EXPENSE GRAPH ==========

Food          | ******** 40.00%
Travel        | ****** 30.00%
Books         | **** 20.00%
Entertainment | ** 10.00%

===================================
```

*Each star represents approximately 5% of total spending.*

## 🛠️ Technologies & Concepts Used

**Technology**

-   Programming Language: C
-   Compiler: GCC
-   Interface: Command Line / Terminal
-   File Handling: Standard C File I/O

**C Programming Concepts**

-   Variables and Data Types
-   Operators and Expressions
-   Conditional Statements (`if-else`)
-   Loops (`for`, `while`)
-   Arrays
-   Character Arrays and Strings
-   Formatted Input/Output (`scanf`, `printf`)
-   File Handling (`fopen`, `fprintf`, `fclose`)
-   Standard Input Functions (`fgets`, `getchar`)

## 📁 Project Structure

``` text
Personal-Expense-Tracker/
│
├── personalexpensetracker.c
├── expense_report.txt
└── README.md
```

  File                         Purpose
  ---------------------------- ----------------------------------------
  `personalexpensetracker.c`   Main C source code
  `expense_report.txt`         Automatically generated expense report
  `README.md`                  Project documentation

## 💻 Installation & Execution

**Prerequisites:** GCC compiler installed on your system.

**1. Clone the repository**

``` bash
git clone <YOUR_REPOSITORY_URL>
```

**2. Navigate to the project folder**

``` bash
cd Personal-Expense-Tracker
```

**3. Compile the program**

``` bash
gcc personalexpensetracker.c -o expense_tracker
```

**4. Run the application**

For Windows:

``` bash
expense_tracker.exe
```

For Linux/macOS:

``` bash
./expense_tracker
```

## 🧪 Input Validation

The program includes basic validation for:

-   Monthly budget must be greater than zero.
-   Number of expenses must be between 1 and 50.
-   Expense categories must be between 1 and 4.
-   Expense amounts cannot be negative.
-   Login access is restricted after three incorrect attempts.
-   Invalid expense numbers are rejected during editing or deletion.

## 📄 Report Generation

After processing the expenses, the program automatically creates:

`expense_report.txt`

The exported report contains:

-   Monthly budget
-   Total spending
-   Remaining budget
-   Category-wise expenditure
-   Category-wise spending percentages
-   Date-wise expense records

## 👥 Team BITEFORCE

::: {align="center"}
### ⚡ B I T E F O R C E

*Three minds. One project. One goal.*
:::

   S.No.  Team Member
  ------- -------------
    01    Dhairya rawat
    02    Kshitij
    03    Piyush aneja

**Project:** Personal Expense Tracker\
**Team Number:** \[Enter Team Number\]\
**Batch:** \[Enter Batch Number\]\
**Course:** C Programming Lab

## 🚀 Future Improvements

-   Permanent storage of expense records.
-   Monthly and yearly expense comparisons.
-   Search expenses by date or category.
-   Support for additional expense categories.
-   More detailed financial statistics.
-   Graphical user interface.

------------------------------------------------------------------------

::: {align="center"}
### ✦ BITEFORCE ✦

**Built with C. Powered by Logic. Driven by Teamwork.**

`<sub>`{=html}Personal Expense Tracker \| C Programming Mini Hackathon
2026`</sub>`{=html}
:::
