#include<stdio.h>
/*
output :
5
4
3
2
1

*/

int main()
{
    int i = 0;

    i = 5;

    do
    {
        printf("%d\n",i);
        i--;
    }while( i >= 1);

    return 0;
}