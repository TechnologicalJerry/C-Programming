#include<stdio.h>
int main() {
    int integerType;
    char characterType;
    float floatingType;
    double doubleType;
    printf("Size of int: %zu bytes\n", sizeof(integerType));
    printf("Size of char: %zu byte\n", sizeof(characterType));
    printf("Size of float: %zu bytes\n", sizeof(floatingType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));    
    return 0;
}
