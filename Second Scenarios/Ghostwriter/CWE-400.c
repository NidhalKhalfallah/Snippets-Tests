#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
    for (int i = 0; i < 10; i++) {
    int *factorial;
    factorial = (int *) malloc(sizeof(int));
    //calculate factorial of i
    *factorial = 1;
      for (int j = 2; j <= i; j++) {
        *factorial *= j;
      }
      printf("%d! = %d\n", i, *factorial);
    }
  return 0;
}