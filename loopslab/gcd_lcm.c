//WAP to print GCD and LCM of two numbers.(GCD - HCF)
#include <stdio.h>
int main()
{
  int a,b;
  printf("Enter two numbers\n");
  scanf("%d%d",&a,&b);
  int gcd;
  int lcm;
  int n = (a < b) ? a : b; // HCF can never be greater than the smaller number
  for(int i = 1;i <= n;i++)
  {
    if(a%i == 0 && b%i == 0)
    {
          gcd = i;  
    }
  }
   lcm = (a*b)/(gcd);   // formula of lcm and gcd . GCD and LCD relation
  printf("The gcd of the two numbers is %d\n",gcd);
  printf("The lcm of the two numbers is %d\n",lcm);
  return 0;
}