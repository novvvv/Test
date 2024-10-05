#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    string s = "";
    cin >> s;
    unordered_set<string> strSet;
    string input_data = "";
    for (int i = 0; i < s.length(); i++) {
        input_data = s[i];
        strSet.insert(input_data);
        for (int j = i + 1; j < s.length(); j++) {
            input_data += s[j];
            strSet.insert(input_data);
        }
    }

    cout << strSet.size() << '\n';
    return 0;
}
