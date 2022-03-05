#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<double> myVector(n);
    for(int i = 0; i < n; i++)cin >> myVector[i];
    double k;
    cin >> k;
    myVector.push_back(k);
    sort(myVector.begin(), myVector.end());
    for(int i = 0; i <= n; i++)cout << fixed << setprecision(2) << myVector[i] << " ";
    return 0;
}