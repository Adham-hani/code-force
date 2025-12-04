// team
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n; 
    int solved = 0;

    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int sum = a + b + c; 
        if (sum >= 2)
        {
            solved++;
        }
    }

    cout << solved << endl;
    return 0;
}