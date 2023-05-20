#include<stdio.h>
int main(){
    int n,t,sq,r=0,rsq,y,sqr=0;
    scanf("%d",&n);
    sq=n*n;
    while(n!=0){
        t=n%10;
        r=r*10+t;
        n=n/10;
    }
  rsq=r*r;
  while(rsq!=0){
    y=rsq%10;
    sqr=sqr*10+y;
    rsq=rsq/10;
  }
  if(sq==sqr)
  {
      printf("True");
  }
  else{
      printf("False");
  }
}