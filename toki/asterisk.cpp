#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
    string word, curr_word;
    int N;
    vector<string> words;

    cin >> word;
    cin >> N;

    while(N--) {
        cin >> curr_word;
        bool same = true;

        for(int i = 0; i < word.size() - 1; i++) {
            if(word[i] != curr_word[i]) {
                same = false;
                break;
            }
        }

        if(same) {
            words.push_back(curr_word);
        }
    }

    for(auto item: words) {
        cout << item << endl;
    }
    
    return 0;
}