#include <stdio.h>

int main(void) 
{
    printf("1 is %lu\n", sizeof(1));
    printf("char is %lu\n", sizeof(char));
    printf("double is %lu\n", sizeof(double));
    printf("float is %lu\n", sizeof(float));
    printf("int is %lu\n", sizeof(int));
    printf("long long is %lu\n", sizeof(long long));
}