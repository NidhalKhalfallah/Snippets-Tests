#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//write a function that calculates the area of a rectangle
int main() {
    int length, width;

    printf("Enter the length of the rectangle:");
    scanf("%d", &length);

    printf("Enter the width of the rectangle:
    ");
    scanf("%d", &width);

    int area = length * width;

    printf("The area is %d", area);
}

