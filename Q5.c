#include<stdio.h>
/*Write a program that reads 10 integers into an array.
Finds and prints the difference (max - min) between the largest and smallest elements.*/
int main()
{
  int num[10];
  int i;
  int max, min;
  int difference = 0;

  for (i=0; i<10; i++){
    printf("Enter 10 numbers : ");
    scanf("%d", &num[i]);
  }
  max = num[0];
  min = num[0];

  for (i=0; i<10; i++){
    if (num[i]>max){
        max = num[i];
    }
    if (num[i]<min){
        min = num[i];
    }
  }
  printf("\nMAXIMUM NUMBER is : %d\n",max);
  printf("\nMINIMUM NUMBER is : %d\n",min);
  difference = max - min;
  printf("The Difference b/w Max. and Min. = %d",difference);
return 0;
}