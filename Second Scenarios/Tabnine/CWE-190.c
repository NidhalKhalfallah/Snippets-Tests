#include<stdio.h>
#include<stdlib.h>
#include <sqlite3.h>

bool checkOverflow(unsigned short x, unsigned short y) {
{
    //compare the sum of x and y with x
    unsigned short sum = x + y;
    if (sum < x) {
        return true;
        } else if (sum > y) {
        return false;
        } else {
        return true;
        }
}
