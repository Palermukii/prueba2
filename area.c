#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main(int argc, char *argv[]){
    double base = atof(argv[1]);
    double altura = atof(argv[2]);
    double area = (base * altura) / 2 ;
    printf("%.2f\n", area);
    return 0;
}