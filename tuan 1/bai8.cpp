#include <iostream>

using namespace std;

int main(){
    int number1, number2, number3;
    cin >> number1 >> number2 >> number3;
    if(number1 == number2)
        {
            if(number1 == number3)cout << "true";
            else cout << "false";
        }
    else cout << "false";
    return 0;
}