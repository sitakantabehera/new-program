#include<stdio.h>
void main()
{
    char str[100];
    printf("\n Enter any sentence: ");
    scanf("%[^\n]s", str);
    printf("The entered sentence is: %s\n", str);
}
