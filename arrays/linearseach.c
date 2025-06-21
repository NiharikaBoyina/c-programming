//Search an element in the array (Linear Search)
#include <stdio.h>
int main()
{
    int m;
    printf("Enter the value of m\n");
    scanf("%d",&m);
    int n;
    printf("Enter the number that you are searching for\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    int a[m];
    for(int i = 0 ; i < m ; i++)
    {
        scanf("%d",&a[i]);
    }
    int flag = 0;
    for(int i = 0 ; i < m ; i++)
    {
        if(a[i] == n)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("The number %d is available in the array\n",n);
    }
    else
    {
        printf("Th number %d is not available in the array\n",n);
    }
    return 0;

}
