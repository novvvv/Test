#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    string chat_log;
    set<string> player_log;
    bool is_gomgom = false;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cin >> chat_log;
        if (chat_log == "ENTER") {
            player_log.clear();
            is_gomgom = true;
            continue;
        }
        if (is_gomgom && player_log.find(chat_log) == player_log.end()) {
            player_log.insert(chat_log);
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}
