#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int i = 0;
    while(s[0] == ' ')
    {
        cout << s[0];
        s.erase(s.begin());
    }
    
    while(i != s.length())
    {
        if(s[i] == ' ' && s[i + 1] == ' ')s.erase(s.begin() + i);
        else i++;
    }
    
    cout << s;
    return 0;
}