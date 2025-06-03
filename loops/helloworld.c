//to print the hellow world statement n times which is inputted by the user
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of times the statement has to be printed\n");
    scanf("%d",&n);
for(int i = 1; i <= n; i++)
{
printf("Hello World\n");
}
return 0;
}