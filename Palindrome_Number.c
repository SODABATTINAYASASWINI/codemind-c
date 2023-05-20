#include<stdio.h>
int main(){
    int tc,j;
    scanf("%d",&tc);
    for(j=1;j<=tc;j++){
        int n,t,r=0,p;
        scanf("%d",&n);
        p=n;
        while(n!=0){
            t=n%10;
            r=r*10+t;
            n=n/10;
        }
        if(p==r){
            printf("True
");
        }
        else{
            printf("False
");
        }
    }
}