#include <iostream>
#include <math.h>
#include <iomanip>

int main()
{
    const int MAX_N = 1000;
    double arr[MAX_N];
    
    int n;
    std::cin >> n;
    for(int i = 0; i < n; i++)std::cin >> arr[i];
    
    double avg = 0;
    for(int i = 0; i < n; i++)avg += arr[i];
    avg /= n;
    
    double result = 0;
    for(int i = 0; i < n; i++)
    {
        double c = (avg - arr[i]) * (avg - arr[i]);
        result += c;
    }
    result /= n;
    
    std::cout << std::fixed << std::setprecision(2) << result;
    
    return 0;
}