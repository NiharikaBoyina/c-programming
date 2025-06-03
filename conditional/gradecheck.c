//to input the marks from the user and give the grade as the output
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the marks\n");
    scanf("%d",&n);
if(n >= 90 && n <= 100)
{
    printf("Grade is A\n");
}
else if(n >= 80 && n <= 89 )
{
    printf("Grade is B\n");
}
else if(n >= 70 && n <= 79)
{
    printf("Grade is C\n");
}
else if(n >= 60 && n <= 69)
{
    printf("Grade is D\n");
}
else{
    printf("Grade is E\n");
}
return 0;
}
