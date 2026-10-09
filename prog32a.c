//find the product of all the digits of a given no.
#include<stdio.h>
int main(){
	int a,c=1;
	scanf("%d",&a);
	while(a!=0){
		c*=a%10;
		a/=10;
		}
		printf("product=%d\n",c);
	return 0;
	}
