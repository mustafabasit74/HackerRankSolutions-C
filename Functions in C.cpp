#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int give_me_greater_number(int x, int y) {
    return (x > y)? x : y;
}

int max_of_four(int a, int b, int c, int d){

    // divide and conquer
    
    int x = give_me_greater_number(a, b);
    int y = give_me_greater_number(c, d);

    return (x > y) ? x : y;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int max = max_of_four(a, b, c, d);
    printf("%d", max);
    
    return 0;
}
