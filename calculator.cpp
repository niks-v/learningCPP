#include <stdio.h>
#include <iostream>

int main(){

    int a;
    int b;

    printf("Number one: ");
    std::cin >> a;

    printf("Number two: ");
    std::cin >> b;

    printf("Your number: %i", b + a);

    return 0;
}