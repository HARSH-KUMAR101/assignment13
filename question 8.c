/*Write a recursive function to print first N terms of Fibonacci series*/
#include<stdio.h>
int fib(int);
int main()
{ int i,n;
     printf("enter range to print fibonacci series: ");
     scanf("%d",&n);
      for(i=1;i<=n;i++){
        printf("%d ",fib(i));
      }
 return 0;
}
int fib(int n)
{ int x;
    if(n==1 || n==2)
    return 1;
   x= fib(n-1)+fib(n-2);
   return x;
}
