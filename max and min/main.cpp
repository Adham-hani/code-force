#include <iostream>
#include <vector>
using namespace std;

void findMinMax(const vector<int>& arr) {
    int minVal = arr[0];
    int maxVal = arr[0];
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }
    cout << minVal << " " << maxVal;
}

int main() {
    int n;
    cin >> n;
    vector<int> data(n);
    for (int i = 0; i < n; ++i) {
        cin >> data[i];
    }

    findMinMax(data);
}
