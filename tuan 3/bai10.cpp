#include <iostream>
#include <cctype>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    bool check = true;
    if(s.length() > 15 || s.length() < 6)
    {
        check = false;
    }
    else if(s[0] <= '9' && s[0] >= '0')
    {
        check = false;
    }
    else 
    {
        for(int i = 0; i < s.length(); i++)
        {
            s[i] = toupper(s[i]);
            if(!(s[i] >= '0' && s[i] <= '9') && !(s[i] >= 'A' && s[i] <= 'Z'))
            {
                check = false;
                break;
            }
        }
    }
    
    if(check)cout << "Valid username.";
    else cout << "Invalid username.";
    
    return 0;
}