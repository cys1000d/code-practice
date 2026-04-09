#include <iostream>
#include <string>

using namespace std;

string print_string01() {
    string res = "", temp;
    int times = 0;
    char ch;
    while (cin >> ch) {
        if (ch == '[') {
            cin >> times;
            temp = print_string01();
            while (times--) {
                res += temp;
            }
        } 
        else if (ch == ']') {
            return res;
        } 
        else {
            res += ch;
        }
        if (cin.peek() == '\n') {
            break;
        }
    }
    return res;
}
int main() {
    cout << print_string01() << endl;
    return 0;
}