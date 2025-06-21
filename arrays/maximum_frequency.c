//Find the Element with the Maximum Frequency
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    int a[n];
    int visited[n];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&a[i]);
         visited[i] = 0;
    }
    int maxfreq = 0;
    int maxelement = a[0];
    for(int i = 0 ; i < n ; i++)
    {
        if(visited[i] == 1)
        {
            continue;

        }
        int count = 1;
        for(int j = i+1 ; j < n ; j++)
        {
            if(a[i] == a[j])
            {
                visited[j] = 1;
                count++;
            }
        }
        if (count > maxfreq) {
            maxfreq = count;
            maxelement = a[i];
        }
    }
    printf("Element with highest frequency: %d\n", maxelement);
    printf("Frequency: %d\n", maxfreq);
    return 0;

}