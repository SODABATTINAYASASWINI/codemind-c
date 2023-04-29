#include<stdio.h>
int main()
{
	int a,i,n;
	scanf("%d",&a);
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i%2!=0){
		int t=a*i;
		printf("%d x %d = %d
",a,i,t);
	}
	}
}