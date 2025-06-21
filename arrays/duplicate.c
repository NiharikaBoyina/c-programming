#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    int a[n];
    int visited[n];

    // Input elements and initialize visited array
    printf("Enter the elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        visited[i] = 0;
    }

    printf("Duplicate elements are:\n");

    for (int i = 0; i < n; i++)
    {
        if (visited[i] == 1)
        {
            continue; // Skip if already marked duplicate
        }

        int count = 1; // Reset count for each i

        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                visited[j] = 1; // Mark duplicate index
                count++;
            }
        }

        if (count > 1)
        {
            printf("%d ", a[i]); // Print only once
        }
    }

    return 0;
}
