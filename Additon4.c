#include<stdio.h>

int Addition(int A, int B)
{
    int Add = 0;
    Add = int A + int B;
    return Add;
}


int main()
{ 
    int No1 = 0;
    int No2 = 0;
    int Ans = 0;

    printf("Enter First Number : \n");
    scanf("%d",&No1);

    printf("Enter Second Number : \n");
    scanf("%d",&No2);

    int Addition = (No1,No2);

    printf("Addition is : %d",Ans);

    return 0;
}