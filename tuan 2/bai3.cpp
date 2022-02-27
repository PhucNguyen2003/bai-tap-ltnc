#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int lowerBound, upperBound;
    cin >> lowerBound >> upperBound;
    for(int i = ceil(sqrt(lowerBound)); i <= sqrt(upperBound); i++)cout << i * i << " ";
    return 0;
}