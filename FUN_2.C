
/*1.What will be output of following program?


#include<stdio.h>
int main(){
static int a=25;
void cdecl conv1() ;
void pascal conv2();
conv1(a);
conv2(a);
return 0;
}
void cdecl conv1(int a,int b){
printf("%d %d",a,b);
}
void pascal conv2(int a,int b){
printf("\n%d %d",a,b);
}
/*
Output: 25 0
0 25
//*/
/*

(2) What will be output of following program?


#include<stdio.h>
void cdecl fun1(int,int);
void pascal fun2(int,int);
int main(){
    int a=5,b=5;
    fun1(a,++a);
    fun2(b,++b);
    return 0;
}
void cdecl fun1(int p,int q){
    printf("cdecl:  %d %d \n",p,q);
}
void pascal fun2(int p,int q){
    printf("pascal: %d %d",p,q);
}

Output:
cdecl:  6 6
pascal: 5 6

(3) What will be output of following program?

#include<stdio.h>
void cdecl fun1(int,int);
void pascal fun2(int,int);
int main(){
    int a=5,b=5;
    fun1(a,++a);
    fun2(b,++b);
    return 0;
}
void cdecl fun1(int p,int q){
    printf("cdecl:  %d %d \n",p,q);
}
void pascal fun2(int p,int q){
    printf("pascal: %d %d",p,q);
}

Output:
cdecl:  6 6
pascal: 5 6

(4) What will be output of following program?

#include<stdio.h>
void convention(int,int,int);
int main(){
    int a=5;
    convention(a,++a,a++);
    return 0;
}
void  convention(int p,int q,int r){
    printf("%d %d %d",p,q,r);
}

Output: 7 7 5
 //*/
/*(5)

#include<stdio.h>
//void pascal convention();
int main(){
    int a=5;
    static int b=7;
    void cdecl convention();
    clrscr();
    convention(++a,++b);
    getch();
    return 0;
}
void cdecl convention(int p,int q,int r)
//void pascal convention(int p,int q)
{
    printf("%d %d %d ",p,q,r);
}
/*
Output: 5 6 6
//*/
/*Q(6)

#include<stdio.h>
void pascal convention(int,int);
void  main()
{
    int a=1;
    clrscr();
    convention(a,++a);
    getch();
}

void pascal  convention(int a,int b)
{
    printf("%d %d",a,b);
}
/*
Output: 1 2

(7) What will be output of following program?

#include<stdio.h>
void  convention(int,int);
int main(){
    int a=1;
    convention(a,++a);
    return 0;
}
void  convention(int a,int b){
    printf("%d %d",a,b);
}

Output: 2 2

*/

/*Q8

#include<stdio.h>
int fib(int ,int,int);
int main()
{
    int a=5;
    clrscr();
    printf("%d ",fib(1,1,1));
    getch();
    return 0;
}
int fib(int n,int x,int y)
{
    if(1==n)
     return y;
    else
    fib(n-1,y,x+y);
 }
/*
Output: 5 6 6
//*/


int x=2;
int* calculate(int,int);
void main()
{
    int *p,a=0,b=5;
    clrscr();
    p=calculate(a,b);
    printf("%d",*p);
    getch();
}
int * calculate(int a,int b)
{
    static int z;
    z=a+x+b;
    return &z;
}


