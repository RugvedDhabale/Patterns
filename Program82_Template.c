/*
    ROW = 4
    COl = 4

    1   2   3   4
    1   2   3   4
    1   2   3   4
    1   2   3   4

*/

#include <stdio.h>

void Display(int iRow, int iCol)
{

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