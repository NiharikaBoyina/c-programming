//to chekc the frequency of the elements in an array
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int a[n];
    int visited[n];
    printf("Enter the elements\n");
    for(int i = 0 ; i < n ; i++)
    {

       scanf("%d",&a[i]);
       visited[i] = 0;
    }
    for(int i = 0 ; i < n ; i++)
    {
         int count = 1;
         if(visited[i] == 1)  //If it's already visited, skip it.
        {
            continue;
        }         // inside the loop to reset the value of count again
        for(int j = i+1 ; j < n ; j++)
        {
            if(a[i] == a[j])
            {
            visited[j] = 1;  // mark as counted
            count++;
            }
        
    }


 printf("The frequency of %d is %d\n",a[i],count);
}
    return 0;

}