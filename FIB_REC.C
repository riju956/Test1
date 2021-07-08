#include<stdio.h>
#include<conio.h>
int bi=0;
int fib(int n)
{
 int f;
 if(n==0)
 {
  f=0;
  }
  else if(n==1)
  {
    f=1;
   }
 else
 {
  f=fib(n-1)+fib(n-2);
  bi+=1;
  }
  return f;
}

void main()
{
 int i,a;
 clrscr();
 for(i=1;i<=3;i++)
  printf("%d ",fib(i));
 printf("\n bi=%d",bi);
 getch();
 }