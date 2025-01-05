#include <iostream>
#include <vector>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    while(true) {
        cin >> n;
        if (n == -1) break;
        int isPrime = 0;
        vector<int> prime;
        for (int i = 1; i < n; i++) {
            if (n % i == 0) {
                prime.push_back(i);
            }
        }

        for (int i = 0; i < prime.size(); i++) {
            isPrime += prime[i];
        }


        if (isPrime != n) {
            cout << n << " is" << " NOT perfect." << '\n';
        }

        else {
            cout << n << " = ";
            for (int i = 0; i < prime.size(); i++) {
                cout << prime[i];
                if (i != prime.size() - 1) cout << " + ";
            }
            cout << '\n';
        }
    }

    return 0;
}
