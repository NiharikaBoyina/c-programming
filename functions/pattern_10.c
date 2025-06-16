/*  
1
12
123
1234
12345
   */
  #include <stdio.h>
  void pattern(int n)
  {
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= i ; j++)
        {
            printf("%d",j);
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