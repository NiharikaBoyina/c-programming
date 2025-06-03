// write a program in c to print the first n terms of the geometric progression.
// 2 6 18 54 162..
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n to print the terms till that number\n");
    scanf("%d",&n);
    int term = 2;
for(int i = 1; i <= n; i++) {
    printf("%d\n", term);
    term *= 3;
}
    return 0;
}