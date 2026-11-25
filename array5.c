//to add 2 matrix and print the resultant matrix
#include<stdio.h>
int main(){ 
	int row,col;
	scanf("%d %d",&row,&col);
	int a[row][col];
	//input-1
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&a[i][j]);
			}}
	int b[row][col];
	//input-2
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&b[i][j]);
			}}
	//traverse-print-1
	printf("1st array given by user:\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d ",a[i][j]);
			}
			printf("\n");
		}
	//traverse-print-2
	printf("2nd array given by user:\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d ",b[i][j]);
			}
			printf("\n");
		}
	//add
	int s[row][col];
	//input-3
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			s[i][j]=a[i][j]+b[i][j];
			}}
	//traverse-print-3	
	printf("sum of given 2 arrays:\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d ",s[i][j]);
			}
			printf("\n");
		}
		}
//THIS IS THE END.....!!	
