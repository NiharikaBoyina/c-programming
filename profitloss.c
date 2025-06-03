//The buying price, the marker price and discount are entered through keyboard. Sometimes seller gets profit or sometimes loss depending upon the discount.
//WAP to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.
#include <stdio.h>
int main()
{
  float buying_price,marker_price,selling_price,discount,profit,loss;
  printf("Enter the buying price \n");
  scanf("%f",&buying_price);
  printf("Enter the marker price \n");
  scanf("%f",&marker_price);
  printf("Enter the discount \n");
  scanf("%f",&discount);
  selling_price = marker_price * (1 - discount/100);
  profit = (selling_price > buying_price) ? (selling_price - buying_price) : 0;
  loss = (buying_price > selling_price) ? (buying_price - selling_price ) : 0;
  

}