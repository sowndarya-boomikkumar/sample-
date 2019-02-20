#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b; 
printf("enter the value of k");
scanf("%d",&a);
printf("enter the value of n");
scanf("%d",&b);
static int findSum(int N, int K) 
{ 
  int ans = 0;
  for (int i = 1; i <= N; i++) 
  ans += (i % K); 
  return ans; 
    } 
  static public void Main() 
  { 
    int N = 10, K = 2; 
    Console.WriteLine(findSum(N, K)); 
    } 
getch();
