//to compare 2 strings using predefined fn
#include<stdio.h>
#include<string.h>
int main(){
	char n[30];
	char m[]="RaaginiMadhavan";
	scanf("%[^\n]",n);
	printf("first string: %s\n",n);
	printf("second string: %s\n",m);
	printf("%d\n",strcmp(n,m));
	}
