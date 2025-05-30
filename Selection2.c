#include<stdio.h>

void DisplayResult(int Value)
{
    if(Value < 35)
    {
        printf("You are Fail\n");

    }
    else
    {
        printf("You are Pass\n");
    }
    
}


int main()
{
    int Marks = 0;

    printf("Enter your Marks : \n");
    scanf("%d",&Marks);

    DisplayResult(Marks);

    printf("End Of Application \n");
   

    return 0;
}