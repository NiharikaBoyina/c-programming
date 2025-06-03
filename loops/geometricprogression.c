//display the geometric progressio0n 1,2,4,8,16...upto n terms.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n to print the terms till n\n");
    scanf("%d",&n);
    int a = 1;
    for(int i = 1; i <= n;i++){
        printf("%d\n",a);
        a = a*2;
    }
return 0;
}