#include<stdio.h>
int main()
{
    int a,b,i,suma=0,sumb=0;
    scanf("%d%d",&a,&b);
    for(i=1;i<a;i++){
        if(a%i==0){
            suma=suma+i;
        }
    }
    for(int j=1;j<b;j++){
        if(b%j==0){
            sumb=sumb+j;
        }
    }
    if(suma==b && sumb==a){
        printf("Amicable");
    }
    else{
        printf("Not Amicable");
    }
}