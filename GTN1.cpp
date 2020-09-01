#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int a;
    int b;

    printf("Number one: ");
    std::cin >> a;

    printf("Number two: ");
    std::cin >> b;

    if (a > b) {
        printf("Number 1 is bigger than Number 2");
    }
    else if (a < b) {
        printf("Number 1 is smaller than Number 2");
    }
    else {
        printf("Number 1 and Number 2 are the same.");
    }

    return 0;
}