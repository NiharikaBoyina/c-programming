/*      combinations = n!/r!(n-r)!*/
#include <stdio.h>
void combination(int n,int r)
{
    int fact = 1 ;
    int factorial_1;
   for(int i = 1 ; i <= n ; i++)
   {
    fact *= i;
   }
   factorial_1 = fact;  //n!
   int fact_2 = 1;
   int factorial_2;
   for(int j = 1 ; j <= r ; j++)
   {
     fact_2 *= j;
   }
   factorial_2 = fact_2;  //r!
   int fact_3 = 1;
   int factorial_3;
   for(int s = 1 ; s <= n-r ; s++)
   {
    fact_3 *= s;
   }
   factorial_3 = fact_3;   // (n - r)!

   int final= (factorial_1)/((factorial_2)*(factorial_3));
   printf("The combination is %d\n",final);
}
int main()
{
    int n;
    printf("Enter the number of elements in the set\n");
    scanf("%d",&n);
    int r;
    printf("Enter number of elements to be chosen from the set\n");
    scanf("%d",&r);
    combination(n , r);
    return 0;
    

}