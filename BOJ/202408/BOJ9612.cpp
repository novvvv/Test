#include <unordered_map>
using namespace std;
#include <iostream>

int main() {

    int n;
    cin >> n;
    unordered_map<string, int> words;
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        words[word]++;
    }

    string maxKey = "";
    int maxValue = -1;
    for (const auto& pair : words) {
        if (maxValue < pair.second) {
            maxValue = pair.second;
            maxKey = pair.first;
        }
        if (maxValue == pair.second) {
            if (maxKey < pair.first) {
                maxKey = pair.first;
                maxValue = pair.second;
            }
        }
    }

    cout << maxKey << " " << maxValue;

    return 0;
}
