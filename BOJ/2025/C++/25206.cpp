#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> split(string data);

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    cout << fixed << setprecision(6);

    double sum = 0;
    double grade_sum = 0;
    for(int i = 0; i < 20; i++) {

        string data_info = "";
        getline(cin, data_info);
        vector<string> grade_info = split(data_info);
        double score = 0;
        double grade = stod(grade_info[1]);

        if (grade_info[2] == "A+") sum += 4.5 * stoi(grade_info[1]);
        else if (grade_info[2] == "A0") score = 4.0;
        else if (grade_info[2] == "B+") score = 3.5;
        else if (grade_info[2] == "B0") score = 3.0;
        else if (grade_info[2] == "C+") score = 2.5;
        else if (grade_info[2] == "C0") score = 2.0;
        else if (grade_info[2] == "D+") score = 1.5;
        else if (grade_info[2] == "D0") score = 1.0;
        else if (grade_info[2] == "F") score = 0.0;
        else continue; // P

        sum += score * grade;
        grade_sum += stod(grade_info[1]);
    }

    cout << sum / grade_sum << '\n';


    return 0;
}

vector<string> split(string data) {
    data.push_back(' ');
    string delim = " ";
    vector<string> token;
    int pos = 0;
    while((pos = data.find(delim)) != string::npos) {
        token.push_back(data.substr(0, pos));
        data.erase(0, pos + delim.length());
    }
    return token;
}





