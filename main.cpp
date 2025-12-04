//ASCII Art Contest
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int g, c, l;
    cin >> g >> c >> l;

    int max_score = max({g, c, l});
    int min_score = min({g, c, l});

    if (max_score - min_score >= 10) {
        cout << "check again" << endl;
    } else {
        int scores[3] = {g, c, l};
        sort(scores, scores + 3);
        cout << "final " << scores[1] << endl;
    }

    return 0;
}
