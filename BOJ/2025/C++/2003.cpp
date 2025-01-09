#include <iostream>
#include <vector>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int> permu_vec;
    int input_data;
    for (int i = 0; i < n; i++) {
        cin >> input_data;
        permu_vec.push_back(input_data);
    }

    int count = 0;
    for (int st = 0; st < permu_vec.size(); st++) {
        int sum = 0;
        for (int ed = st; ed < permu_vec.size(); ed++) {
            sum += permu_vec[ed];
            if (sum == m) {
                count++;
            }
        }
    }

    cout << count << '\n';

    return 0;
}


