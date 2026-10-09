//to determine if a character is upper or lower
#include<stdio.h>
int main(){
	char a;
	scanf("%c",&a);
	if(a>='A'&&a<='Z'){
		printf("the character is upper case!!");
	}else if(a>='a'&&a<='z'){
		printf("the chartacter is lower case !!o~o");
	}
}
