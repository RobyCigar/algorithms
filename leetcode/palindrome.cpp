#include <bits/stdc++.h>

using namespace std;

bool is_palindrome(string s) {
    string rev = s;
    reverse(rev.begin(), rev.end());

    return s == rev;
}

int main(int argc, char const *argv[]) {
    cout << is_palindrome("abba");

    return 0;
}