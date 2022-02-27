#include <iostream>
#include <math.h>

int main()
{
    long long n;
    std::cin >> n;
    int count = 0;
    do
    {
        count++;
        n = n / 10;
    } while( n != 0);
    std::cout << abs(count);
    return 0;
}