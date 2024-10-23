#include <iostream>
#include <vector>
using namespace std;

int n;
int leftNode[31];
int rightNode[31];

// 전위 순회 - (루트노드) (좌측노드) (우측노드)
void preOrder(int current) {
    cout << char(current + 'A' - 1);
    if(leftNode[current] != 0) preOrder(leftNode[current]);
    if(rightNode[current] != 0) preOrder(rightNode[current]);
}

// 중위 순회 - (좌측노드) (루트노드) (우측노드)
void inOrder(int current) {
    if(leftNode[current] != 0) inOrder(leftNode[current]);
    cout << char(current + 'A' - 1);
    if(rightNode[current] != 0) inOrder(rightNode[current]);
}

// 후위 순회 - (좌측노드) (우측노드) (루트노드)
void postOrder(int current) {
    if(leftNode[current] != 0) postOrder(leftNode[current]);
    if(rightNode[current] != 0) postOrder(rightNode[current]);
    cout << char(current + 'A' - 1);
}

int main() {

    // buffer 성능 향상
    ios::sync_with_stdio(0);
    cin.tie(0);

    // input data
    cin >> n;
    char root, left, right;
    while(n--) {
        cin >> root >> left >> right;
        if(left != '.') leftNode[root-'A'+1] = left-'A'+1;
        if(right != '.') rightNode[root-'A'+1] = right-'A'+1;
    }
    preOrder(1); cout << '\n'; // 전위 순회
    inOrder(1); cout << '\n'; // 중위 순회
    postOrder(1); cout << '\n'; // 후위순회

    return 0;
}

/**
 * 전위순회, 후위순회, 중위순회
 * 노드의 개수는 총 26개이며, A~Z 알파벳 대문자로 이루어진다.
 * if(l != '.') lc[c-'A'+1] = l-'A'+1;
 */
