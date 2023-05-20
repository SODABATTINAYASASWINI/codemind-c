#include<stdio.h>
int main(){
    int n,sume=0,sumo=0,diff;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(i%2!=0){
            sume=sume+a[i];
        }
        else{
            sumo=sumo+a[i];
        }
    }
    if(sume>sumo){
        diff=sume-sumo;
    }
    else{
        diff=sumo-sume;
    }
    printf("%d",diff);
}