//to input cost price and selling rpice from the user and tell whether he is in profit or loss and the amount as well.
#include <stdio.h>
int main()
{
    float cost,selling,profit,loss;
    printf("Enter the cost price\n");
        scanf("%f",&cost);
        printf("Enter the selling price\n");
        scanf("%f",&selling);
        if(cost<selling)
        {
            profit = selling - cost;
            printf("It is a profit of %f\n",profit);
        }
        else
        {
            loss = cost - selling;
            printf("It is a loss of %f\n",loss);

        }
        return 0;

        
}