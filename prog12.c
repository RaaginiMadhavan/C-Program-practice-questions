//logical and, logical or and logical not
#include<stdio.h>
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	printf("\n%d",a>b&&b<a);
	printf("\n%d",a>b||b<a);
	printf("\n%d",!(a>b&&b<a));
	printf("\n%d",a>b^b<a);
	}
