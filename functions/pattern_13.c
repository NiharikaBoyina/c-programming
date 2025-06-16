/*  1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
 1 2 3 4
  1 2 3
   1 2
    1    */
    #include <stdio.h>
    void pattern(int n)
    {
        for(int i = 1 ; i <= n ; i++)
        {
            for(int s = 1 ; s <= n-i ; s++)
            {
                printf(" ");
            }
            for(int j = 1 ; j <= i ; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    for(int m = n-1 ; m >= 1 ; m--)
    {
        for(int l = 1 ; l <= n-m ; l++)
        {
            printf(" ");
        }
        for(int z = 1 ; z <= m ; z++  )
        {
            printf("%d ",z);
        }
        printf("\n");
    }
}
    int main()
    {
        int n;
        printf("Enter the value of n\n");
        scanf("%d",&n);
        pattern(n);
        return 0;

    }