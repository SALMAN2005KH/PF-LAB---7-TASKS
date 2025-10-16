#include<stdio.h>
//Write a program that reads the 10 numbers from user and store these numbers into an array of same size.
//You program should provide a searching mechanism in such a way that how many times a particular number
//occurred and then print it on screen. If number is not in array, then program should display a message
//“number not found”.
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
		}
	}
	printf("%d",count);
	
return 0;		
}
