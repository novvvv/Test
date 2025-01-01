#include <iostream>
using namespace std;

int n, m;
int from, to;
int arr[101];

void swap(int a, int b);
void print();

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;

    for (int i = 1; i <= n; i++) arr[i] = i;

    for (int i = 0; i < m; i++) {
        cin >> from >> to;
        swap(from, to);
    }
    print();

    return 0;
}

void swap(int a, int b) {
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void print() {
    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }
}

// 바구니 N개
// 1 ~ N 번 각 각 바구니 번호와 같은 공이 1개씩 들어있다.
// 앞으로 M번 공을 교환한다. 바구니 2개를 선택한 뒤 두 바구니에 있는 공을 교환한다.
//
