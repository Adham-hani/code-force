#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;

    string result = "Prime";

    if (n <= 1)
        result = "Not Prime";
    else if (n <= 3)
        result = "Prime";
    else if (n % 2 == 0 || n % 3 == 0)
        result = "Not Prime";
    else {
        for (long long i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) {
                result = "Not Prime";
                break;
            }
        }
    }

    cout << result << endl;
    return 0;
}
