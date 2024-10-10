#include <iostream>
#include <vector>
#include <string>
using namespace std;
int n;

int checkFizz(int fizz);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string fizzStr[3];
    for (int i = 0; i < 3; i++) {
        cin >> fizzStr[i];
    }

    for (int i = 0; i < 3; i++) {
        if (fizzStr[i] == "Fizz" || fizzStr[i] == "Buzz" || fizzStr[i] == "FizzBuzz")
            continue;
        int fizz = stoi(fizzStr[i]);
        if (i == 0) {
            fizz += 3;
            checkFizz(fizz);
            break;
        }
        if (i == 1) {
            fizz += 2;
            checkFizz(fizz);
            break;
        }
        if (i == 2) {
            fizz += 1;
            checkFizz(fizz);
            break;
        }
    }

    return 0;
}

int checkFizz(int fizz) {
    if (fizz % 3 == 0 && fizz % 5 == 0) {
        cout << "FizzBuzz" << '\n';
        return 0;
    }
    if (fizz % 3 == 0 && fizz % 5 != 0) {
        cout << "Fizz" << '\n';
        return 0;
    }
    if (fizz % 3 != 0 && fizz % 5 == 0) {
        cout << "Buzz" << '\n';
        return 0;
    }
    cout << fizz << endl;
    return 0;
}
