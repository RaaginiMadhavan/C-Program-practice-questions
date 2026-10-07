//get total and discount and display price after applying discount
#include<stdio.h>
int main(){
	float a,b;
	scanf("%f %f",&a,&b);
	printf("discount provided:=%f",a);
	printf("\ntotal price:=%f",b);
	printf("\ntotal price after discount:=%f",b-(a*b/100));
	}
	
