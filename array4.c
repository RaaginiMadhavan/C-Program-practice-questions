//to read a matrix and find its least and highest value
#include<stdio.h>
int main(){ 
	int row,col;
	scanf("%d %d",&row,&col);
	int a[row][col];
	//input
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&a[i][j]);
			}}
	//finding least n' highest
	int h=0;
	int l=a[0][0];
	for(int c=0;c<row;c++){
		for(int m=0;m<col;m++){
			if(a[c][m]>h){
				h=a[c][m];}
				
			if(a[c][m]<l){
				l=a[c][m];
					}
				}
			}
	printf("Greatest Number: %d\n",h);
	printf("Smallest Number: %d\n",l);
	}
