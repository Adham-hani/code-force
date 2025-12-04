#include <iostream>
using namespace std;

int main() {
     long long n, x;
    long long sum = 0, odd = 0, even = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        sum += x;
        if (x % 2 == 0)
            even++;
        else
            odd++;
    }
    cout << sum << " " << odd << " " << even << endl;
    return 0;
}
