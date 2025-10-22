#include<stdio.h>
/*You are assisting your English language teacher who wants to analyze how many vowels and consonants
appear in students’ submitted words. Write a program that reads a single word using scanf("%s", str); and
counts the number of vowels and consonants in it without using any string library functions like strlen(). The
program should display both counts on the screen.*/
int main()
{
  char str[100];
    int vowels = 0, consonants = 0;
    int i;

    printf("Enter a word: ");
    scanf("%s", str);  

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
            str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            vowels++;
        }
        else if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            consonants++;
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

return 0;
}