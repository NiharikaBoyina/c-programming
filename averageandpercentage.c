//WAP to find the average mark of 5 subjects of a student and find the percentage. Assume full mark of each subject is 200. All the input must be given by user.
#include <stdio.h>
int main()
{
    float sub1,sub2,sub3,sub4,sub5,avg,percentage;
    printf("Enter all the marks of 5 subjects: \n");
    scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
    avg = (sub1+sub2+sub3+sub4+sub5)/5.0;
    percentage= (avg*100.0)/1000.0;
    printf("The average of the marks is %f\n",avg);
    printf("The percentage of the marks is %f\n",percentage);
    return 0;
    }