#include<stdio.h>
int main(){
    int n,i,j,k,y;
    scanf("%d",&n);
    if(n<3){
        printf("The pattern is not possible");
    }
    else{
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("
");
    }
    for(k=n-1;k>=1;k--){
        for(y=1;y<k+1;y++){
            printf("*");
        }
        printf("
");
    }
}
}