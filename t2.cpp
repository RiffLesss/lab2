#include <iostream>
#include <map>
#include <vector>
using namespace std;

int t2() {
    int n;
    map<int, vector<string>> students;

    while (cin >> n) {
        string name;
        cin >> name;
        students[n].push_back(name);
    }

    for (int i = 9; i <= 11; i++) {
        for (string name : students[i]) {
            cout << i << " " << name << endl;
        }
    }

    return 0;
}