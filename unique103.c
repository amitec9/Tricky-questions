/* C Program to find Volume and Surface Area of a Cuboid */
#include <stdio.h>

int main()
{
  float length, width, height;
  float SA, Volume, LSA;

  printf("\nPlease Enter Length, Width and Height of a Cuboid\n");
  scanf("%f %f %f",&length, &width, &height);

  SA = 2 * (length * width + length * height + width * height);
  Volume = length * width * height;
  LSA = 2 * height * (length + width);

  printf("\n The Surface Area of a Cuboid = %.2f\n",SA);
  printf("\n The Volume of a Cuboid = %.2f\n",Volume);
  printf("\n The Lateral Surface Area of a Cuboid = %.2f\n",LSA);
  
  return 0;
}