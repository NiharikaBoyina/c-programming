//write a program and to check whether the inputed alphabet is consonant or vowel. If noot then the inputed character is not an alphabet.
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character\n");
    scanf("%c",&ch);
    if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 122 ))
    {
        if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            printf("The alphabet %c is vowel\n",ch);
        }
        else{
            printf("The entered character %c is consonant\n",ch);
        }
    }
    else{
        printf("The entered character is not an alphabet\n");

    }
    return 0;
}


