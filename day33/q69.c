/*Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include <stdio.h>
int largest(int ar[], int n)
{
    int max = ar[0];

    for (int i = 0; i < n; i++)
    {
        if (max < ar[i])
        {
            max = ar[i];
        }
    }
    return max;
}

int secondlargest(int ar[], int n)
{
    int max=largest(ar, n);
    int slargest = ar[0];
    for (int i = 0; i < n; i++)
    {
        if (slargest <= ar[i] && max!= ar[i])
        {
            slargest = ar[i];
        }
    }
    return slargest;
}

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    // int *ar=(int *)malloc(n * sizeof(int));
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d",&ar[i]);
    }
    int result = secondlargest(ar, n);
    printf("The Second largest number is %d", result);
    return 0;
}
