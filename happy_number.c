#include<stdio.h>
int main(){
    int n,s=10,t;
    scanf("%d",&n);
    while(s>=10){
        s=0;
        while(n!=0){
            t=n%10;
            s+=(t*t);
            n=n/10;
            
        }
        n=s;
       }
    if(s==1 || s==7){
        printf("True");
    }
    else{
        printf("False");
    }
}