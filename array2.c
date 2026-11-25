#include<stdio.h>
int main(){
	int row,col;
	scanf("%d %d",&row,&col);
	int arr[row][col];
	//traverse-scan
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&arr[i][j]);
			}
		}
	//traverse-print
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d ",arr[i][j]);
			}
			printf("\n");
		}
	}
