/*Write a recursive function to calculate sum of first N natural numbers*/
#include<stdio.h>
int sum(int);
int main()
{ int n;
    printf("Enter range to calculate sum of natural numbers: ");
    scanf("%d",&n);
       printf("sum is %d",sum(n));
 return 0;
}
int sum(int x)
{ int total;
    if(x==0)
        return;
    total=x+sum(x-1);
   return total;
}
