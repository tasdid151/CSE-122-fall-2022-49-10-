//problem no: 71A
//problem name: Way Too Long Words
#include <iostream>

using namespace std;

int main()
{
    int n;
    string s;
    cout<<"enter your words num\n";
    cin >> n;
    cout<<"enter our words\n";
    while (n--)
    {
        cin >> s;
        if (s.length() > 10)
        {
            cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}
