//print sum of all even numbers till n
#include<stdio.h>
int main(){
	int a,n;
	scanf("%d",&n);
	a=0;
	for(int i=0;i<=n;i++){
		if(i%2==0){
		a+=i;
		}
	}
	printf("sum= %d",a);
	return 0;
}
