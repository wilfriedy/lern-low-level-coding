/* triangle.h */

#include <stdio.h>

int area_triangle(int b, int h)
{
  return (b * h)/2;
}

int main()
{
int b, h, a;

printf("Base: ");
fflush(stdout);
scanf("%d", &b);

printf("Height: ");
fflush(stdout);
scanf("%d", &h);

a = area_triangle(b,h);
printf("The area is %d \n", a);

return 0;
}
