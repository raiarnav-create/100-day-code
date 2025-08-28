// Q10 : Write a program to input time in seconds and convert it to hours : minutes : seconds format.
/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1
Input 2:
7322
Output 2:
2:2:2
*/
#include <stdio.h>
int main()
{
    printf("Enter time in seconds: ");
    int seconds;

    scanf("%d", &seconds); // Taking input from user

    int min = seconds / 60; // Diving sec by min to get the conversion

    int hours = min / 60; // conversion of mintues into hours.

    min = min % 60;

    seconds = seconds % 60; // storing the remainder seconds and getting new value of seconds

    printf("Time in hours : %d Min : %d Seconds : %d ", hours, min, seconds);
    return 0;
}