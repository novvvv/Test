#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> vec;

int main()
{
    int n;
    cin >> n;
    int input_data = 0;
    for (int i = 0; i < n; i++) {
        cin >> input_data;
        vec.push_back(input_data);
    }

    sort(vec.begin(), vec.end()); // nlogn
    for (int i = 0; i < n; i++) {
        cout << vec[i] << '\n';
    }

    return 0;
}
