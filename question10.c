/*Write a program in C to calculate the power of any number using recursion.*/
#include<stdio.h>
int pow(int,int);
int main()
{ int n,p;
     printf("enter a number : ");
     scanf("%d",&n);
     printf("enter power : ");
     scanf("%d",&p);
     printf("ans is %d",pow(n,p));
 return 0;
}
int pow(int n,int p)
{   if(p==0)
    return 1;
  return n*pow(n,p-1);
}
