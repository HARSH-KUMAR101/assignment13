/*Write a recursive function to calculate sum of digits of a given number*/
int sum(int);
int main()
{ int n,ans;
    printf("Enter range to calculate sum of digits: ");
    scanf("%d",&n);
       ans=sum(n);
        printf("sum is %d",ans);
 return 0;
}
int sum(int x)
{ int temp,total=0;
    if(x==0)
        return;
    temp=x%10;
     x=x/10;
   total=temp+sum(x);
return total;
}


