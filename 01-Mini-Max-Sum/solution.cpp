#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<long long> arr(5);

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    long long total = 0;
    long long minimum = arr[0];
    long long maximum = arr[0];

    for (int i = 0; i < 5; i++) {
        total += arr[i];

        if (arr[i] < minimum)
            minimum = arr[i];

        if (arr[i] > maximum)
            maximum = arr[i];
    }

    cout << total - maximum << " " << total - minimum;

    return 0;
}
