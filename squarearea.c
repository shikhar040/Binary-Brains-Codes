#include <stdio.h>
int main()
{
  float side , area;
  printf("Enter side of square:");
  scanf("%f", &side);
  area = side * side;
  printf("Area of square is %f ", area);
  return 0;
}