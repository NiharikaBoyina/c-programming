/*     
 *******
  *****
   ***
    *
    */
   #include <stdio.h>
   void pattern(int n)
   {
     for(int i = n ; i >= 1 ; i--)
     {
        for(int s = 1 ; s <= n-i; s++)
        {
            printf(" ");
        }
        for(int j = 1 ; j <= 2*i-1 ; j++)
        {
            printf("*");
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