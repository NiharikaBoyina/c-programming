//Function to calculate the square of a number
#include <stdio.h>
float square(float n)
{
    float new_number = n*n;
    return n*n;
}
int main()
{
    float n;
    printf("Enter the value of n\n");
    scanf("%f",&n);
    float new_number = square(n);
    printf("The square of the number is %.2f\n",new_number);
    return 0;
}