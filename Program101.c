#include <stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow != iCol)
    {
        printf("Row numbers and col numers are diffrenet");
        return;
    }

    for(i = 1; i <= iRow; i++)
    {   
        for(j = 1; j <= iCol; j++)
        {
            if((i >= j))
            {
                printf("*\t",i);
            }
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("ENtre number of Rows : \n");
    scanf("%d", &iValue1);

    printf("ENtre number of Coloumns : \n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}