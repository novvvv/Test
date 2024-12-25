#include <iostream>
#include <queue>
#include <map>
using namespace std;

int n, input_value, test_case;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL);

    cin >> test_case;
    for (int i = 0; i < test_case; i++) {

        // adjacent list
        cin >> n;
        vector<int> circular_info[n + 1];
        vector<bool> isVisited(n + 1);
        for (int j = 0; j < n; j++) {
            cin >> input_value;
            circular_info[j + 1].push_back(input_value);
        }

        // bfs graph search
        int cycle_num = 0;
        queue<int> adj_queue;
        for (int k = 1; k <= n; k++) {
            if (isVisited[k]) continue;
            isVisited[k] = true;
            adj_queue.push(k);
            while(!adj_queue.empty()) {
                int cur = adj_queue.front();
                adj_queue.pop();
                for (auto nxt : circular_info[cur]) {
                    if (isVisited[nxt]) continue;
                    adj_queue.push(nxt);
                    isVisited[nxt] = true;
                }
            }
            cycle_num++;
        }
        cout << cycle_num << endl;
    }
    return 0;

}

