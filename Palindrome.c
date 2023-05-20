#include<stdio.h>
int main(){
    int n,t,r=0;
    scanf("%d",&n);
    int p=n;
    while(n!=0){
        t=n%10;
        r=r*10+t;
        n=n/10;
    }
    if(p==r){
        printf("True");
    }
    else{
        printf("False");
    }
}