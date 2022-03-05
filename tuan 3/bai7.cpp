#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    int cNum = 0;
    int cAlpha = 0;
    int cOther = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            cAlpha++;
        }
        else if('0' <= s[i] && s[i] <= '9')
        {
            cNum++;
        }
        else cOther++;
    }
    cout << cAlpha << " " << cNum << " " << cOther;
    return 0;
}