// to check the grading system using nested ternary.
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter the marks to display the grade\n");
    scanf("%d",&marks);
    (marks<=100 && marks>=90) ? printf("Grade is A") : (marks<=89 && marks>=80) ? printf("Grade is B") : (marks<=79 && marks >= 70) ? printf("Grade is C") : printf("Grade is considered as I or below average");
    return 0;

}