#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
    vector<int> suffix_array;
    string input;
    cin >> input;

    // create suffix array
    for (int i = 0; i < input.size(); i++) suffix_array.push_back(i);

    // sort suffix array
    sort(suffix_array.begin(), suffix_array.end(), [&](int a, int b) {
        return input.substr(a) < input.substr(b);
    });

    suffix_array.insert(suffix_array.begin(), input.size());

    for(int i: suffix_array) cout << i << " ";

    return 0;
}
