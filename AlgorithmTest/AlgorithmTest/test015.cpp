#include <stdio.h>

int strLen(char* str)
{
    if (*str == '\0')
    {
        return 0;
    }
    else
    {
        return 1 + strLen (str + 1);
    }
}

int main() {
    char myString[] = "Hello, World!";
    printf ("문자열\"%s\"의 길이는 %d입니다.\n", myString, strLen (myString));
}