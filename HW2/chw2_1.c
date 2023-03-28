#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int shift = 2; //move 

    printf("Enter a string: ");
    fgets(str, 100, stdin); // char  stdin = 


    for (int i = 0; i < strlen(str); i++) // 100 < 
    {
        if (str[i] >= 'a' && str[i] <= 'z') //&& and
        {
            str[i] = ((str[i] - 'a' + shift) % 26) + 'a'; // 將小写字母加密
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = ((str[i] - 'A' + shift) % 26) + 'A'; // 將大写字母加密
        }
    }

    printf("Caesar Cipher: %s", str);

    return 0;
}
