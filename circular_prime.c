#include<stdio.h>
int main(){
    int n,r=0,c=0,cr=0,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            c++;
        }
    }
    while(n!=0){
        int t=n%10;
        r=r*10+t;
        n=n/10;
    }
    for(j=1;j<=r;j++){
        if(r%j==0){
            cr++;
        }
    }
    if(cr==2 && c==2){
        printf("circular prime");
    }
    else if(c==2 && cr!=2){
        printf("prime but not a circular prime");
    }
    else{
        printf("not prime");
    }
}