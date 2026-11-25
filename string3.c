//to concatenate 2 strings using predefined fn
#include<stdio.h>
#include<string.h>
int main(){
	char n[30];
	char m[]="Madhavan";
	scanf("%[^\n]",n);
	scanf("%[^\n]",m);
	printf("first string: %s\n",n);
	printf("second string: %s\n",m);
	printf("%s\n",strcat(n,m));
	}
