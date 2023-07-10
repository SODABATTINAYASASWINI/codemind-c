#include<stdio.h>
int prime(int n){
    int c=0,i,t,r=0;
    int p=n;
    while(n!=0){
        t=n%10;
        r=r*10+t;
        n=n/10;
    }
    if(r==p){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int a,b,m,c=0,i;
    scanf("%d
%d",&a,&b);
    for(i=a;i<=b;i++){
       m=prime(i);
       if(m==1){
           printf("%d ",i);
       }
    }
    
}