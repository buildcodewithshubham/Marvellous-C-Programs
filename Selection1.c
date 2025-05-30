// if - else

#include<stdio.h>

int main()
{
    int Marks = 0;

    printf("Enter the Marks : \n");
    scanf("%d",&Marks);

    if(Marks < 35)
    {
        printf("You are Fail \n");
    }
    else
    {
        printf("You are Pass\n");
    }
    return 0;
}