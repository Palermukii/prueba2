#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int main(int argc, char *argv[]) {
    bool a = atoi(argv[1]) % 2 != 0;
    bool b = atoi(argv[2]) % 2 != 0;
    bool c = atoi(argv[3]) % 2 != 0;
    bool d = atoi(argv[4]) % 2 != 0;
    bool e = atoi(argv[5]) % 2 != 0;
    int sum = a * atoi(argv[1]) +
    b * atoi(argv[2]) +
    c * atoi(argv[3]) +
    d * atoi(argv[4]) +
    e * atoi(argv[5]);
    printf("%d\n", sum);
    return 0;
}