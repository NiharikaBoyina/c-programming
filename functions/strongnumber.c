//Check if a number is a Strong Number
#include <stdio.h>
void pattern(int n)
{
    int originalnumber = n;
    int remainder;
    int sum = 0;
  while( n != 0)
  {
    int fact = 1;
    remainder = n%10;
    for(int i = 1 ; i <= remainder ; i++)
    {
        fact *= i;
    }
    sum += fact;
    n = n/10;
  }
  if(originalnumber == sum)
  {
    printf("The number is strong number\n");
  }
  else
  {
    printf("The number is not a strong number\n");
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