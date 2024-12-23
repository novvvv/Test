#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int MAX_NUM = 1000001;
int test_case;
int n;
int input_value;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL);

    cin >> test_case;
    for (int i = 0; i < test_case; i++) {
        cin >> n;
        vector<int> num_vec;
        for (int j = 0; j < n; j++) {
            cin >> input_value;
            num_vec.push_back(input_value);
        }
        sort(num_vec.begin(), num_vec.end());
        cout << num_vec[0] << " " << num_vec[n - 1] << '\n';
    }


    return 0;
}
