//1-d array-int arr[4]
//2-d array-int arr[3][4]
#include<stdio.h>
int main(){
//1st style
	int arr[2][3]={
		{10,20,30},
		{40,50,60}
	};
//2nd style
	int arr1[2][3]={10,20,30,40,50,60};
	//partially initialize
	int arr2[2][3]={10,20};
	int arr3[2][3]={
		{10},
		{20}
	};
//traverse- print
	printf("ARRAY-1\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("%d ",arr[i][j]);
			}
			printf("\n");
		}
	printf("ARRAY-2\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("%d ",arr1[i][j]);
			}
			printf("\n");
		}
	printf("ARRAY-3\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("%d ",arr2[i][j]);
			}
			printf("\n");
		}
	printf("ARRAY-4\n");
	for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			printf("%d ",arr3[i][j]);
			}
			printf("\n");
		}	
}	
