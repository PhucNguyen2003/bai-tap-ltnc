#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int chan, con, ga, cho;
    cin >> con >> chan;
    int chanThua = con * 4 - chan;
    if(chanThua % 2 != 0 || chanThua / 2 > con)
    {
        cout << "invalid";
        return 0;
    } else {
        ga = chanThua / 2;
        cho = con - ga;
    }
    cout << "chicken = " << ga << ", dog = " << cho;
    return 0;
}