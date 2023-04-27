#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);
    bool fuertes = a <= b && b <= c;
    printf("%s", fuertes ? "ordenado" : "No ordenado");
    return 0;
}