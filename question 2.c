/*Write a recursive function to calculate sum of first N odd natural numbers*/
#include<stdio.h>
int odd(int);
int main()
{ int n,sum;
    printf("Enter range to calculate sum of odd numbers: ");
    scanf("%d",&n);
    sum=odd(n);
       printf("sum is %d",sum);
 return 0;
}
int odd(int x)
{ int num=0,total=0;
    if(x==1)
        return 1;
   num=x*2-1+odd(x-1);
return num;
}

