#include<stdio.h>

int main()
{
  char ch = 'S';
  int no = 11;
  float marks = 89.80f;
  double data = 90.57956;

  printf("Value of ch is : %c\n",ch);
  printf("Value of no is : %d\n",no);
  printf("Value of marks is : %f\n",marks);
  printf("Value of data is : %f\n",data);

  printf("size of character is : %d bytes\n",sizeof(ch));
  printf("size of is : %d bytes\n",sizeof(no));
  printf("size of float is : %d bytes\n",sizeof(marks));
  printf("size of double is : %d bytes\n",sizeof(data));

    return 0;
}