#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    for(int i = 0; i <= s.length() - 4; i++)
    {
        if(s.substr(i, 4) == "Zues"){
            s[i + 1] = 'e';
            s[i + 2] = 'u';
        }
    }
    cout << s;
    return 0;
}