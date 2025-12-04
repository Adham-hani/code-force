#include <iostream>
#include <vector>
#include <algorithm>
#include<stack>
#include<cmath>
#include<iomanip>
#include <string>
using namespace std;

bool plaindrom(int n)
{
    string binary="",s;
    while (n > 0)
    {
        if (n % 2 == 0)
        {
            binary += '0';
        }
        else
        {
            binary += '1';
        }
        n = n / 2;
    }
    s = binary;
    reverse(binary.begin(), binary.end());
    if (s == binary)
    {
        return true;
    }
    else
        return false;

}

bool isodd(int n)
{
    if (n % 2 != 0)
    {
        return true;
    }
    else
        return false;
}
int main() {


    int n;
    cin >> n;
    if (plaindrom(n) && isodd(n))
    {
        cout << "YES";
    }
    else
        cout << "NO";
    return 0;}
