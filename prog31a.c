//to add the digits of a given no.
#include<stdio.h>
int main(){
	int a,c=0;
	scanf("%d",&a);
	while(a!=0){
		c+=a%10;
		a/=10;
		}
		printf("sum=%d\n",c);
	return 0;
	}
