#include <stdio.h>

int main()
{
    int choice;
    char again = 'Y';

    int n, shape, i, j;                
    int rows, number;                   
    int count;                          
    float grade, total, average;
    char word[50];                      
    int left, right, palindrome;

    while (again == 'Y' || again == 'y')
    {
        // Main Menu
        printf("\n==============================\n");
        printf("       PROGRAM PORTFOLIO\n");
        printf("==============================\n");
        printf("1. Pattern Generator\n");
        printf("2. Pascal's Triangle\n");
        printf("3. College Grade Calculator\n");
        printf("4. Palindrome Checker\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        printf("\n");

        // 1. Pattern Generator
        if (choice == 1)
        {
            printf("Enter size: ");
            scanf("%d", &n);

            printf("\n");
            printf("1. Right Triangle\n");
            printf("2. Square\n");
            printf("3. Isosceles Triangle\n");
            printf("4. Inverted Right Triangle\n");
            printf("5. Christmas Tree\n");

            printf("Choose a shape: ");
            scanf("%d", &shape);

            printf("\n");

            if (shape == 1)
            {
                // Right Triangle
                for (i = 1; i <= n; i++)
                {
                    for (j = 1; j <= i; j++)
                    {
                        printf("*");
                    }
                    printf("\n");
                }
            }
            else if (shape == 2)
            {
                // Square
                for (i = 1; i <= n; i++)
                {
                    for (j = 1; j <= n; j++)
                    {
                        printf("* ");
                    }
                    printf("\n");
                }
            }
            else if (shape == 3)
            {
                // Isosceles Triangle
                for (i = 1; i <= n; i++)
                {
                    for (j = 1; j <= n - i; j++)
                    {
                        printf(" ");
                    }
                    for (j = 1; j <= 2 * i - 1; j++)
                    {
                        printf("*");
                    }
                    printf("\n");
                }
            }
            else if (shape == 4)
            {
                // Inverted Right Triangle
                for (i = n; i >= 1; i--)
                {
                    for (j = 1; j <= i; j++)
                    {
                        printf("*");
                    }
                    printf("\n");
                }
            }
            else if (shape == 5)
            {
                // Christmas Tree
                for (i = 1; i <= n; i++)
                {
                    for (j = 1; j <= n - i; j++)
                    {
                        printf(" ");
                    }
                    for (j = 1; j <= 2 * i - 1; j++)
                    {
                        printf("*");
                    }
                    printf("\n");
                }

                // Trunk
                for (i = 1; i <= 2; i++)
                {
                    for (j = 1; j <= n - 1; j++)
                    {
                        printf(" ");
                    }
                    printf("***\n");
                }
            }
            else
            {
                printf("Invalid shape.\n");
            }
        }

        // 2. Pascal's Triangle
        else if (choice == 2)
        {
            printf("Enter number of rows: ");
            scanf("%d", &rows);

            printf("\n");

            for (i = 0; i < rows; i++)
            {
                number = 1;

                for (j = 0; j <= i; j++)
                {
                    printf("%d ", number);
                    number = number * (i - j) / (j + 1);
                }

                printf("\n");
            }
        }

        // 3. College Grade Calculator
        else if (choice == 3)
        {
            total = 0;

            printf("How many subjects? ");
            scanf("%d", &count);

            for (i = 1; i <= count; i++)
            {
                printf("Enter grade %d (1.0 to 5.0): ", i);
                scanf("%f", &grade);

                total = total + grade;
            }

            average = total / count;

            printf("\nFinal Average: %.2f\n", average);

            if (average <= 3.0)
            {
                printf("Status: PASS\n");
            }
            else
            {
                printf("Status: FAIL\n");
            }
        }

        // 4. Palindrome Checker
        else if (choice == 4)
        {
            left = 0;
            right = 0;
            palindrome = 1;

            printf("Enter a word: ");
            scanf("%49s", word);

            // Find the last character
            while (word[right] != '\0')
            {
                right++;
            }
            right = right - 1;

            // Compare first and last characters
            while (left < right)
            {
                if (word[left] != word[right])
                {
                    palindrome = 0;
                }

                left++;
                right--;
            }

            if (palindrome == 1)
            {
                printf("%s is a palindrome.\n", word);
            }
            else
            {
                printf("%s is not a palindrome.\n", word);
            }
        }

        // 5. Exit
        else if (choice == 5)
        {
            printf("Goodbye!\n");
            return 0;
        }

        else
        {
            printf("Invalid choice.\n");
        }

        printf("\nDo you want to try another operation? (Y/N): ");
        scanf(" %c", &again);
    }

    printf("\nGoodbye!\n");

    return 0;
}