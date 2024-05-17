#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> find_permutation(int N) {
    vector<int> permutation;
    if (N == 1 || N == 2) {
        return {-1};
    } else {
        permutation.resize(N);
        for (int i = 0; i < N; i++) {
            permutation[i] = i + 1;
        }
        sort(permutation.rbegin(), permutation.rend());
        return permutation;
    }
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> permutation = find_permutation(N);
        for (int num : permutation) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}

