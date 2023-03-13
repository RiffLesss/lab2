#include <iostream>
#include <set>
using namespace std;

int main() {
    int N;
    cin >> N;
    set<int> NumberSet;

    for (int i = 0; i < N; i++) {
        int Number;
        cin >> Number;
        NumberSet.insert(Number);
    }

    cout << NumberSet.size() << endl;

    return 0;
}
