#include <stdio.h>
#include <stdbool.h>

bool IsDigit(char ch)
{
    if((ch >= 48) && (ch <= 57)) // if((ch >= 'A') && (ch <= 'Z'))
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

    bRet = IsDigit(cValue);
    if(bRet == true)
    {
        printf("%c is a Digit\n", cValue);
    }
    else
    {
        printf("%c is not a Digit\n", cValue);
    }

    return 0;
}