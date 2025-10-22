#include<stdio.h>
int main (){
	int arr[5];
	printf("Enter five numbers : ");
	for (int i=0; i<5; i++){
		scanf("%d",&arr[i]);
	}
	
	for (int i=0; i<5; i++){
		printf(" %d ",arr[i]);
	}
	
	printf("\n");
	for (int i=4; i<5; i++){
		printf(" %d ",arr[i]);
	}
	 for (int i=0; i<4; i++){
	 	printf(" %d ",arr[i]);
	 }
return 0;

}

