/*Write a recursive function to calculate sum of first N even natural numbers*/
#include<stdio.h>
int even(int);
int main()
{ int n;
    printf("Enter range to calculate sum of even numbers: ");
    scanf("%d",&n);
       printf("sum is %d",even(n));
 return 0;
}
int even(int x)
{ int num=0;
    if(x==0)
        return;
   num=x*2+even(x-1);
   return num;
}
