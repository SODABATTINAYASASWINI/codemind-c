 #include<stdio.h>
 int main(){
     int r,c,i,j,sum=0;
     scanf("%d%d",&r,&c);
     int a[r][c];
     for(i=0;i<r;i++){
         for(j=0;j<c;j++){
             scanf("%d",&a[i][j]);
         }
     }
     for(j=0;j<c;j++){
       for(i=0;i<r;i++){
            sum=sum+a[i][j];
           
        }
        printf("%d ",sum);
        sum=0;
         
     }
     
 }