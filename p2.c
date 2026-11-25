#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
		for(int a=n;a>i;a--){
		          printf(" ");
		        }
				j+=1;
			     printf(" * ");}
		printf("\n");
		}
	}
