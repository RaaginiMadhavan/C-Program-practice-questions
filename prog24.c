//lopping with do...while
#include<stdio.h>
int main(){
	int i,n;
	scanf("%d",&n);
	i=0;
	do{
		printf("%d=hello world\n",i);
		i++;
	}while(i<n);
}
