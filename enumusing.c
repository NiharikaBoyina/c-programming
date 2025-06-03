//tor print or run the program using enum.
#include <stdio.h>
int main()
{
    enum Company {Google, Facebook, Xerox, Yahoo, Ebay, Microsoft}; //Enum declaratiom
    printf("Xerox's value is %d\n",Xerox);
    printf("Google's value is %d\n",Google);
    printf("Ebay's value is %d\n",Ebay);
    return 0;
} 
//Enum assignment starts from 0 and we use squiggly brackets. It has values only which are inside the brackets.If we assign the value of ebay is 11 then the value of microsoft will be 12.
/*Enum is a user defined data type which is used to assign names to integral constants.
 It makes the program easy to read and maintain. 
It is used to define a variable that can take one of the predefined values. 
The enum keyword is used to declare an enumeration.
 The values of an enumeration are called enumerators. 
 The enumerators are assigned integer values starting from 0 by default. 
 The first enumerator has the value 0, the second has the value 1, and so on.
  You can also assign specific values to the enumerators.*/
