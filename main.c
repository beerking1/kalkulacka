#include <stdio.h>
#include <stdlib.h>
void printSum(int first, int second);

int main(int argc, char *argv[])
{
    if(argc == 3) {
        int prvni = atoi(argv[1]);
        int druhy = atoi(argv[2]);
        printSum(prvni, druhy);
    }
    return 0;
}

void printSum(int first, int second) 
{
    printf("sum of %d and %d is %d", first, second, first + second);
}
