#include <iostream>
#include <vector>
#include <iomanip>
int main()
{
    int n;
    std::cin >> n;
    
    std::vector<double> vectorA(n), vectorB(n);
    
    for(int i = 0; i < n; i++)std::cin >> vectorA[i];
    for(int i = 0; i < n; i++)std::cin >> vectorB[i];
    
    double product = 0;
    for(int i = 0; i < n; i++)product += vectorA[i] * vectorB[i];
    
    std::cout << std::fixed << std::setprecision(2) << product;
    
    return 0;
}