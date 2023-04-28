#include<stdio.h>
int main()
{
    int n,sum=0,p=1,i;
    scanf("%d",&n);
    while(n!=0)
    {
        int t=n%10;
        sum=sum+t;
        p=p*t;
        n=n/10;
    }
    if(sum==p)
    {
    printf("Spy Number");
}
    else{
    printf("Not Spy Number");
}
}