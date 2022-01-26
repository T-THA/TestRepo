#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main( )
{ 
    srand(time(0)+getchar()-getchar()-getchar()+getchar());
    puts(rand()&1?"1":"0");
    return 0;
}