#include<stdio.h>
#include<conio.h>
int main()
{
    // int n,i,sum=0;
    // printf("enter last number:");
    // scanf("%d",&n);

    // for(i=1;i<=n;i=i+2)
    // {
    //     sum=sum+i;
    //     printf("%d,",i);
    // }
    // printf("\n total odd num sum:%d ",sum);

    // getch();
    int a;
     printf("enter last number: ");
     scanf("%d",&a);

     if(a % 2 != 0)
     {
        printf("Number is odd.");
     }
     else
     {
        printf("Number is even");
     }
}
