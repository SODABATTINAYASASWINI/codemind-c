#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int s=n/2;
    for(i=n-1;i>=s;i--){
        printf("%d ",a[i]);
    }
    for(i=0;i<s;i++){
        printf("%d ",a[i]);
    }
}