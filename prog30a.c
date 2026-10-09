//to identify the prime numbers
#include<stdio.h>
int main(){
	int a,n=0;
	scanf("%d",&a);
	for(int i=1;i<=a;i++){
		if(a%i==0){
			n++;
		}
	}
	if(a>1&&n==2){
		printf("it is a prime no.\n");
	}else{
		printf("it is not a prime no.\n");
		}	

	return 0;
}
