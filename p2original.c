#include<stdio.h>
int input()
{
  int h;
  printf("enter two numbers\n");
  scanf("%d"&h);
  return h;
}
int add(int a,int b)
{
  int sum;
  sum=a+b;
  return sum;
}
void output(int a,int b,int sum)
{
  printf("sum of a&b is %d\n",
  sum);
}
int main()
{
  int a,b,sum;
  a=input();
  b=input();
  sum=add(a,b);
  output(a,b,sum);
  return 0;
}
