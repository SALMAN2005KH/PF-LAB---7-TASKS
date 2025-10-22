#include<stdio.h>
int main()
{
    char str[100];

    printf("Enter any text (it will ignore alphabets) : ");
    scanf("%[^A-Za-z]", str);   // reads everything except A–Z or a–z

    printf("Non-alphabetic characters you entered: %s", str);

return 0;
}