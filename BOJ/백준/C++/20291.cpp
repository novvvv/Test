#include <iostream>
#include <queue>
#include <map>
using namespace std;

string split(string file_name);

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);	cout.tie(NULL);

    map<string, int> file_info_map;
    int file_num;
    cin >> file_num;
    string file_name = "";
    for (int i = 0; i < file_num; i++) {
        cin >> file_name;
        string file_split_info = split(file_name);
        file_info_map[file_split_info] += 1;
    }

    for (auto it = file_info_map.begin(); it != file_info_map.end(); it++) {
        cout << it -> first << " " << it -> second << endl;
    }

    return 0;

}

string split(string file_name) {
    for (int i = 0; i < file_name.length(); i++) {
        if (file_name[i] == '.')
            return file_name.substr(i + 1);
    }
}
