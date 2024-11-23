#include <iostream>
#include <vector>
using namespace std;

/* value */
int price_sum, price_sum_9, book_price;

int main() {

    cin >> price_sum;
    for (int i = 0; i < 9; i++) {
        cin >> book_price;
        price_sum_9 = price_sum_9 + book_price;
    }

    cout << price_sum - price_sum_9;

}
