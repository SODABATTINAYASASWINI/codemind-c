#include<stdio.h>
int main()
{
    int t,n,ct=0,c=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            c++;
        }
    }
    while(n!=0){
        t=n%10;
        n=n/10;
    }
    for(int i=1;i<=t;i++){
        if(t%i==0){
            ct++;
        }
    }
    if(ct==2 && c==2){
        printf("Mega Prime");
    }
    else{
        printf("Not Mega Prime");
    }
}