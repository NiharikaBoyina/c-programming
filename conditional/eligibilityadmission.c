/*WAP to determine the eligibility for admission based on the following criteria: 

Eligibility Criteria: 
Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 or 
Total in all three subjects >=190 or Total in Maths and Physics >=140*/
#include<stdio.h>
int main()
{
    int maths,physics,chemistry;
    int total1,total2;
    printf("Enter the marks for maths,physics and chem\n");
    scanf("%d%d%d",&maths,&physics,&chemistry);
    total1 = maths + physics + chemistry;
    printf("Enter the total marks of all three subjects\n");
    scanf("%d",&total1);
    total2 = maths + physics;
    printf("Enter the total marks of physics and maths\n");
    scanf("%d",&total2);
    if(maths >= 65 && physics >= 55 && chemistry >= 50)
    {
        printf("Eligible for admission\n");
    }
    else if(total1 >= 190 || total2 >= 140)
    {
        printf("Eligible for admission through the total criteria\n");
    }
    else{
        printf("Not eligible for admision\n");
    }
    return 0;
    
}




