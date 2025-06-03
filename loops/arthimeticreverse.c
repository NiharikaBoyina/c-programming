//to print the reverse arthimetic progression. 100,97,94,..
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the n\n");
    scanf("%d",&n);
    int l = 100;
    for(int i = 1;i <= n;i++){
        printf("%d\n",l);
        l = l-3;
    }
    return 0;
}