#include<stdio.h>
int main(){
	int n,sum=0;
	scanf("%d",&n);
	while(n!=0){
		sum+=n%10;
		n=n/10;
		printf("%d\n",n);
		printf("%d\n",sum);
		}
		printf("sum= %d",sum);
		}
	
