// scanf()  -- like input() in python

#include<stdio.h>


int main()
{
  int a, b, c;
  printf("Enter the value of a and b\n");
  scanf("%d %d",&a,&b);    // & refers to memory and address
  printf("a = %d ", a);
  printf("b = %d", b);
  c=a+b;
  printf("\nsum=%d\n",c);
}


/*
int main()
{
  int r;
  float b=3.14,area;
  printf("Enter the value of r\n");
  scanf("%d",&r);
  printf("r=%d ",r);
  area=b*r*r;
  printf("\narea of circle = %f\n",area);
}
*/


main()
{
    float x;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("x = %f", x);
}