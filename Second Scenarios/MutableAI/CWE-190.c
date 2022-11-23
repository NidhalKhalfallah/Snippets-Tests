#include<stdio.h>
#include<stdlib.h>
#include <sqlite3.h>

bool checkOverflow(unsigned short x, unsigned short y) {
{
    //compare the sum of x and y with x
    return (x + y) < x;
}