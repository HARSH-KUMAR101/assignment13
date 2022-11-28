/*Write a program in C to count the digits of a given number using recursion.*/
#include<stdio.h>
int count(int);
int main()
{ int n;
     printf("enter a number to count its digit: ");
     scanf("%d",&n);
     printf("total num of digit is %d",count(n));
 return 0;
}
int count(int n)
{   if(n<10)
     return 1;
    return 1+count(n/10);
}
