#include<stdio.h>
int main()
{
    int d,h,w;
    scanf("%d",&d);
    h=d/365;
    w=(d%365)/7;
    printf("%d
",h);
    printf("%d",w);
}