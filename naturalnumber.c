#include <stdio.h>
#include<conio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter a positive integer :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
     sum += i;
    }
    printf("The sum of first %d numbers is %d.", n, sum);
    getch();
}
