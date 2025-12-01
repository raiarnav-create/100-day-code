//Q129: Read integers from file, compute sum and average

/*
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00
*/

#include <stdio.h>

int main()
{
    FILE *fp;
    int num, sum = 0, count = 0;

    fp = fopen("numbers.txt", "r");

    if (fp == NULL)
    {
        printf("numbers.txt not found!");
        return 0;
    }

    while (fscanf(fp, "%d", &num) != EOF)
    {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0)
    {
        printf("No numbers found in file.");
        return 0;
    }

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", (float)sum / count);

    return 0;
}
