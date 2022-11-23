#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//write a function that calculates the area of a rectangle
//using the formula:
//area = width * height
//width and height are integers
//returns the area of the rectangle
int main()
{
  int width, height;
  printf("Enter the width of the rectangle: ");
  scanf("%d", &width);
  printf("Enter the height of the rectangle: ");
  scanf("%d", &height);
  printf("The area of the rectangle is %d\n", width * height);
  return 0;
}