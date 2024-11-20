#include <iostream>
#include <vector>
#include <string>
#include <utility>
using namespace std;


int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int test_case, player_num, player_price;
    string player_name;
    vector<string> ans;
    cin >> test_case;
    for (int i = 0; i < test_case; i++) {

        vector<pair<int, string>> player_info;
        cin >> player_num;
        for (int i = 0; i < player_num; i++) {
            cin >> player_price;
            cin >> player_name;
            player_info.push_back({player_price, player_name});
        }

        int max_player_price = player_info[0].first;
        string max_player = player_info[0].second;
        for (int i = 0; i < player_info.size(); i++) {
            if (max_player_price < player_info[i].first) {
                max_player_price = player_info[i].first;
                max_player = player_info[i].second;
            }
        }

        ans.push_back(max_player);

    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << '\n';
    }
}
