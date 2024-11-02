#include <iostream>
using namespace std;

int main()
{
    int A, B, V;
    cin >> A >> B >> V;
    int day = (V - A) / (A - B);
    if ((V - A) % (A- B) == 0) day++;
    else day+=2;
    cout << day << '\n';
    return 0;
}
