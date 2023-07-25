#include <stdio.h>
#include <stdbool.h>

bool ChkSmall(char ch)
{
    if((ch >= 'a') && (ch <= 'z')) // if((ch >= 97) && (ch <= 122))
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
        printf("%c is a samllcase letter\n", cValue);
    }
    else
    {
        printf("%c is not a smallcase letter\n", cValue);
    }

    return 0;
}