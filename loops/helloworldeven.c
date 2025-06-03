//to print hello world even number of times and n is inputted by the user.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of times the statement has to be entered\n");
    scanf("%d",&n);

for(int i = 1;i <= n;i = i+2)
{
    printf("Hello World\n");
}
return 0;
}