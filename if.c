#include<stdio.h>
int main()
{
    int a;
    printf("enter the number");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("entered number is even");
    }
    else if(a%2!=0)
    {
       printf("entered number is odd "); 
    }
    else
    {
        printf("entered number is zero");
    }
    return 0;
}