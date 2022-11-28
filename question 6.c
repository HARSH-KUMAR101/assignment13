/*Write a recursive function to calculate factorial of a given number*/
#include<stdio.h>
int fact(int n);
int main()
{ int n,sum;
     printf("enter a num to calculate its factorial: ");
     scanf("%d",&n);
     sum=fact(n);
       printf("factorial is %d",sum);
 return 0;
}
int fact(int n)
{ if(n==1)
    return;
 return(n*fact(n-1));
}
