//reverse a=b and b=a.
#include<stdio.h>
int main(){
	int a,b;//a=10 b=20
	scanf("%d %d",&a,&b);
	a=a+b;//30
	b=a-b;//10
	a=a-b;//20
	printf("%d %d",a,b);
	}
