/*Write a recursive function to calculate HCF of two numbers*/
int hcf(int,int);
int main()
{ int a,b,ans;
     printf("enter numbers to calculate their HCF:\n");
     printf("enter first number: ");
     scanf("%d",&a);
     printf("enter second number: ");
     scanf("%d",&b);
      ans=hcf(a,b);
       printf("hcf is %d",ans);
  return 0;
}
int hcf(int a,int b)
{ while(a!=b)
 { if(a>b)
     return(hcf(a-b,b));
   else
     return(hcf(b-a,a));
 }
 return a;
}
