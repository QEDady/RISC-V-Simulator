#include <stdio.h>

int gcd(int x, int y) {

    if (x == y) return x;

    if (x > y) gcd(x - y, y);
    else gcd(x, y - x);

}

int main()
{
    int x = 80;
    int y = 16;
    gcd(x, y);

    return 0;
}
