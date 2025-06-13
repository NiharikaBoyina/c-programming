/* WAP to generate the pascal triangle pyramid of numbers for a given number.
Ex. for number 4
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1 */
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        int num = 1;
        for(int j = 0; j <= i; j++)
        {
            printf("%d ", num);
            num = num * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}