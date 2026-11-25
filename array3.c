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
	printf("normal array given by user\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d ",arr[i][j]);
			}
			printf("\n");
		}
	//transpose
	int tranarr[row][col];
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
		tranarr[i][j]=arr[j][i];
		}
	}
	//traverse-print
	printf("transpose of the givrn array\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			printf("%d ",tranarr[i][j]);
			}
			printf("\n");
		}}
