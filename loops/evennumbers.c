//write a program even numbers in c. n to be inputted from the user.
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(int i = 1; i <= n;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);

        }
    }
    return 0;
}