#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++)cin >> a[i];
    for(int i = 0; i < n; i++)cin >> b[i];
    for(int i = 0; i < n; i++)
    {
        if(a[i] != b[i])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}