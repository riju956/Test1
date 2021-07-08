/*1
#include<stdio.h>
int main(){
    int i;

    for(i=0;i<=4;i++){
	 printf("%d ",i);
    }
    return 0;
}
/*
Output: 0 1 2 3 4
Explanation of each term of syntax:
Expression 1:
It is called initialization expression. Task of this expression is to initialize the looping variables.
//*/
/*
Properties of expression 1:

1. Expression1 can initialize the more than one variable. For example:

#include<stdio.h>
int main(){
    int i,j,k;
    for(i=0,j=2,k=1;i<=4;i++){
	 printf("%d ",i+j+k);
    }
return 0;
}

Output: 3 4 5 6 7

2. Expression1 is optional. For example:

#include<stdio.h>
void main(){
    int i=1;
    for(;i<=4;i++){
	 printf("%d ",i);
    }
return 0;
}

Output: 1 2 3 4

3. Unlike to the java in c we cannot declare the variable at the expression1. For example:
#include<stdio.h>
int main(){

    for(int i=0;i<=10;i++){
	 printf("%d ",i);
    }

return 0;
}

Output: ce

Expression 2: It is called as conditional expression. Task of expression is to check the condition and if it is false then it terminates the loop. For example:

#include<stdio.h>
int main(){
    int i;

    for(i=1;i<=3;i++){
	 printf("hi ");
    }
    printf("%d",i);

return 0;
}

Output: hi hi hi 4

Properties of expression2:

1.  Expression2 can have more than one checking condition and if any condition is false loop will terminate. For example:

(a)
#include<stdio.h>
void main(){
    int i,j=2;

    for(i=0;i<=5,j>=0;i++){
	 printf("%d ",i+j);
	 j--;
    }

return 0;
}

Output: 2 2 2

(b)
#include<stdio.h>
int main(){
    int i,j=2;

    for(i=0;j>=0,i<=5;i++){
	 printf("%d ",i+j);
	 j--;
    }
return 0;
}

Output: 2 2 2 2 2 2

2. Expression2 is also optional. For example:

#include<stdio.h>
int main(){
    int j;

    for(j=0; ;j++){
	 printf("%d ",j);
	 if(j>=2)
	     break;
    }

return 0;
}

Output: 0 1 2

3. It can perform task of expression1 as well as expression3. That is it can initialize the variables as well as increment the variables. For example:

#include<stdio.h>
int main(){
    int i;

    for(;i=0,i<=3 ;i++){
	 printf("%d ",i);
    }

return 0;
}
/*
Output: Infinite Loop

(b)
#include<stdio.h>
int main(){
    int i=0;

    for(;i+=2,i<5 ;i++){
	 printf("%d ",i);
    }
return 0;
}

Output: 2

4. If expression2 is zero means condition is false and any non zero number means condition is true. For example

(a)
#include<stdio.h>
int main(){
    int i;

    for(i=0;-5 ;i++){
	 printf("%d ",i);
	 if(i==3)
	     break;
    }

return 0;
}

Output: 0 1 2 3

(b)
#include<stdio.h>
int main(){
    int i;

    for(i=5;0 ;i++){
	 printf("%d ",i);
    }

return 0;
}

Output: 5

Expression 3:
It is called as instrumentation expression. Task of this expression is to increment the variable. Properties:

1. We can increment more than one variable at the same time in the expression3. For example

(a)
#include<stdio.h>
int main(){
    int i,j,k;

    for(i=0,j=0,k=0;i<=5,j<=4,k<=3;i++,++j,k+=2){
	 printf("%d ",i+j+k);
    }

return 0;
}

Output: 0 4

(b)
#include<stdio.h>
void main(){
    int i,j=0;

    for(i=0;i<=3;++i,i++,++j ){
	 printf("%d %d ",i,j);
    }
return 0;
}

Output: 0 0 2 1

2. Expression 3 is also optional. For example

#include<stdio.h>
int main(){
    int i;

    for(i=0;i<=3; ){
	 printf("%d ",i++);
    }

return 0;
}

Output: 0 1 2 3

Loop body:
Loop body contains the part of code which we have to execute multiple numbers of times.

Properties of loop body:

1. If loop body contain only one statement then brace is optional. For example:

(a)
#include<stdio.h>
int main(){
    int i,j=0;
   
    for(i=0;i<=3;++i,i++,++j )
         printf("%d %d ",i,j);
    }

return 0;        
}

Output: 0 0 2 1

(b)
#include<stdio.h>
int main(){
    int x,y=5;
       for(x=0;x<3;x++)
         if(y>=5)
             printf(" %d",x);
return 0;        
}

Output: 0 1 2

2. Loop without body is possible. For example

#include<stdio.h>
int main(){
    int i;
   
    for(i=0;i<=10;i++);
    printf("%d",i);
   
return 0;        
}

Output: 11

3. Braces of loop body behave as block. For example

#include<stdio.h>
int main(){
    int i;
   
    for(i=0;i<=2;i++){
	 int i=8;
	 printf("%d ",i);

    }
    printf("%d",i);

return 0;
}

Output: 8 8 8 3

*/