#include <stdio.h>

int main()
{
    int i, submission;

    for (i = 1; i <= 20; i++)
    {
        printf("\nChecking submission of student %d\n", i);

        printf("Enter submission status:\n");
        printf("1 - Normal submission\n");
        printf("2 - Already approved\n");
        printf("3 - Plagiarism found\n");
        printf("Enter your choice: ");
        scanf("%d", &submission);

        if (submission == 1)
        {
            printf("Student %d submission checked successfully.\n", i);
        }
        else if (submission == 2)
        {
            printf("Student %d was already approved, so checking is skipped.\n", i);
        }
        else if (submission == 3)
        {
            printf("Plagiarism found in student %d. Checking process stopped.\n", i);
            break;
        }
        else
        {
            printf("Invalid input for student %d. Please enter 1, 2, or 3.\n", i);
        }
    }

    return 0;
}