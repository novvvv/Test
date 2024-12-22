#include <iostream>
#include <stack>
using namespace std;

int main() {
    // Logic1 8진수 -> 10진수
    string octal_number = "";
    string binary_arr[8] = { "000", "001", "010", "011", "100", "101", "110", "111"};

    cin >> octal_number;
    int temp;
    for (int i = 0; i < octal_number.length(); i++) {
        temp = octal_number[i] - '0';
        // Exception : 0인 경우 예외처리
        if (i == 0) {
            cout << stoi(binary_arr[temp]);
        }
        else {
            cout << binary_arr[temp];
        }

    }
    return 0;
}
