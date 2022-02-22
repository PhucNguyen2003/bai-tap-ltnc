#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main(){
    float a, b, c, p;
    cin >> a >> b >> c;
    p = (a + b + c)/2;
    if(p <= max(a, max(b, c)))
    {
        cout << "invalid";
        return 0;
    }
    float ketqua = p * (p - a) * (p - b) * (p - c);
    cout << fixed << setprecision(2) << sqrt(ketqua);
    return 0;
}