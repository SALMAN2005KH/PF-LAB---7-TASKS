#include<stdio.h>
/*Your class teacher asks you to develop a program that can help in converting mixed-case messages entered
by users. The program should read a sentence using scanf("%[^\n]";, str); and then convert all lowercase
letters to uppercase and all uppercase letters to lowercase, without using any string library functions. Finally,
display the converted message back to the user.*/
// Example: Input → HeLLo WoRLd → Output → hEllO wOrlD
int main()
{
  char str[100];
  int i;

  printf("Enter a message : ");
  scanf("%[^\n]", str);

  for (i=0; str[i]!='\0'; i++){
    if (str[i] >= 'A' && str[i] <= 'Z'){
        str[i] +=32;                        // Upper case --> Lower case
    }
    else if (str[i] >= 'a' && str[i] <= 'z'){
        str[i] -=32;                        // Lower case --> Upper case
    }
  }

  printf("Converted messeage  : %s\n");
return 0;
}