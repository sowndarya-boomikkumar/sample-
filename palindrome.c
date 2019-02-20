#include<stdio.h>
#include<conio.h>
void main()
{
int num,reverse_num=0,temp,remainder;
scanf("%d",&num);
temp=num;
while(temp!=0)
{
remainder=%10;
reverse_num=revers_num*10+remainder;
temp/=10
}
if(reverse_num==num)
printf("%d is palindrome");
else
printf("%d is not palindrome");
}
