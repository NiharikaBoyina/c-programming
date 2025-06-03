//to read an alphabet from the user and covert it into uppercase if the entered alphabet is in lowercase, otherwise display an appropriate message
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character\n");
    scanf("%c",&ch);
    if(ch >= '97' && ch <= '112')
    {
     char ch2 = ch - 32;
        printf("The entered character is a lowercase character and it as uppercase character is %c\n",ch2);
    }
    else{
        printf("Already upper case character\n");
    }
    return 0;

    
}