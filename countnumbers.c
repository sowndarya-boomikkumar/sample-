#include <stdio.h>
#include<conio.h>
int main()
{
int n;
    long long n;
    int count = 0;
    scanf("%lld", &n); 
    while(n != 0)
    {
        // n = n/10
        n /= 10;
        ++count;
    }
    getch();
