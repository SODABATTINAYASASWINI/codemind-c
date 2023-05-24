#include<stdio.h>
int main(){
    int h,m,s,se;
    scanf("%d",&s);
    h=s/3600;
    m=(s-(h*3600))/60;
    se=(s-((h*3600)+(m*60)));
    printf("H:M:S-%d:%d:%d",h,m,se);
}