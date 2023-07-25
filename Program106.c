#include <stdio.h>
#include <stdbool.h>

bool ChkSmall(char ch)
{
    if((ch >= 90) && (ch <= 90)) // if((ch >= 'A') && (ch <= 'Z'))
    {
        return true;
    }
    else 
    {
        return false;
    }
}


int main()
{
    char cValue = '\0';
    bool bRet  = false;

    printf("PLease entre one character : ");
    scanf("%c", &cValue);

    bRet = ChkSmall(cValue);
    if(bRet == true)
    {
        printf("%c is a Uppercase letter\n", cValue);
    }
    else
    {
        printf("%c is not a Uppercase letter\n", cValue);
    }

    return 0;
}