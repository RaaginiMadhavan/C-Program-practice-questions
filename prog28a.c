//to print the factorial of a given number
#include<stdio.h>
int main(){
	int n,f;
	scanf("%d",&n);
	f=1;
	for(int i=0;i<n;i++){
		f*=(i+1);
		}
	printf("the factorial is: %d",f);
}
