#include<stdio.h>
int main(){
	int arr[10];
	int num;
	int count=0;
	printf("Enter 10 numbers : ");
	for (int i=0; i<10; i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the number that you want to count : ");
	scanf("%d",&num);
	for (int i=0; i<10; i++){
		if (arr[i]==num){
			count++;
		}
		else {
			printf("The number is not in array.");
			break;
		}
	}
	printf("%d",count);
	
return 0;		
}


