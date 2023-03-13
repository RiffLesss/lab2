#include <iostream>
#include <stack>
using namespace std;

int t4() {
    string str;
    cin >> str;
    stack<char> s;
    for (char c : str) {
        if (c == '(' || c == '[' || c == '{') {
            s.push(c);
        }
        else {
            if (s.empty() || (c == ')' && s.top() != '(') || (c == ']' && s.top() != '[') || (c == '}' && s.top() != '{')) {
                cout << "no" << endl;
                return 0;
            }
            else {
                s.pop();
            }
        }
    }
    if (s.empty()) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }

    return 0;
}