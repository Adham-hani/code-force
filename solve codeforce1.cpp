// a way too long words s

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)

    {
        string s;
        cin >> s;

        if (s.length() <= 10)
        {
            cout << s << endl;
        }
        else
        {

            int len = s.length();
            int middle = len - 2;

            cout << s[0] << middle << s[len - 1] << endl;
        }
    }

    return 0;
}

