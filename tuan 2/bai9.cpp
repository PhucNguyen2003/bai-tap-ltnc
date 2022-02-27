#include <iostream>
#include <iomanip>

int main()
{
    const int MAX_N = 1000;
    double arr[MAX_N];
    
    int n;
    std::cin >> n;
    
    for(int i = 0; i < n; i++)std::cin >> arr[i];
    for(int i = n - 1; i >= 0; i--)std::cout << std::fixed << std::setprecision(2) << arr[i] << " ";
    
    return 0;
}