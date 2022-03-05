#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    
    for(int i = 0; i < n; i++)cin >> arr[i];
    
    for(int i = 0; i < (n - 1)/ 2; i++)
    {
        if(arr[i] != arr[n - 1 - i])
        {
            cout << "Asymmetric array.";
            return 0;
        }
    }
    
    cout << "Symmetric array.";
    
    return 0;
}