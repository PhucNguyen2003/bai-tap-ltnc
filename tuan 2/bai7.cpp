#include <iostream>
#include <iomanip>
using namespace std;
const double E = 2.718281828459045235360287471352;

long factorial(long n)
{
    if(n == 0 || n == 1)return 1;
    else return factorial(n - 1) * n;
}
double expTaylor(double n)
{
    if(n == 0)return 1;
    else if(n == 1)return E;
    else
    {
        double result = 1 + n;
        double dif = n;
        double count = 1;
        while(dif > 0.001)
        {
            count++;
            result += dif * n / count;
            dif = dif * n / count;
        }
        return result;
    } 
}
int main(){
    long n;
    cin >> n;
    cout << fixed << setprecision(4) << expTaylor(n);
    
}