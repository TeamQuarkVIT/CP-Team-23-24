#include <iostream>
#include <string>
using namespace std;

int main() {
    string fb = "FBFFBFFBFBFFBFFBF";
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        string input;
        cin >> input;

        if (fb.find(input) != string::npos) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}
