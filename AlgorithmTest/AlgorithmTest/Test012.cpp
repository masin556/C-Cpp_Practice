#include <stdio.h>

int strlength(char str[])
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }

    return length;
}

int main() {
    char myString[] = "Hello, World!";
    int  length     = strlength (myString);
    printf ("문자열 '%s'의 길이는 %d\n", myString, length);

    return 0;
}