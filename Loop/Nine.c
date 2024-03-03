#include <stdio.h>

char calculateGrade(int attendance, int assignment, int classTest, int midterm, int termFinal)
{
    float totalMarks = attendance + assignment + classTest + midterm + termFinal;
    float percentage = (totalMarks / 180) * 100;

    if (percentage >= 90)
        return 'A+';
    else if (86 <= percentage && percentage >= 89)
        return 'A-';
    else if (62 <= percentage && percentage >= 65)
        return 'B+';
    else if (58 <= percentage && percentage >= 61)
        return 'B';
    else if (55 <= percentage && percentage >= 57)
        return 'B-';
    else
        return 'F';
}

int main()
{
    int N, i;
    printf("Enter the number of students: ");
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        int attendance, assignment, classTest, midterm, termFinal;
        printf("\nEnter marks for student %d:\n", i);
        printf("Attendance (out of 5): ");
        scanf("%d", &attendance);
        printf("Assignment (out of 10): ");
        scanf("%d", &assignment);
        printf("Class Test (out of 15): ");
        scanf("%d", &classTest);
        printf("Midterm (out of 50): ");
        scanf("%d", &midterm);
        printf("Term Final (out of 100): ");
        scanf("%d", &termFinal);

        char grade = calculateGrade(attendance, assignment, classTest, midterm, termFinal);
        printf("Grade for student %d: %c\n", i, grade);
    }

    return 0;
}
