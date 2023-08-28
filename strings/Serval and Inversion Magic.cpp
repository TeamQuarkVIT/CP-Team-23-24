#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int j = 0; j < t;j++) {
        int n;
        cin>>n;
        string s;
        cin>>s;

        vector<int> a;
        for (int i=0; i<n/2;++i) {
            if (s[i]!=s[n-i-1]) {
                a.push_back(i);
            }
        }
        if (a.empty() || (a.back()-a.front()+1 == a.size())) {
            cout<<"Yes"<< endl;
        } else {
            cout<<"No"<< endl;
        }
    }
    return 0;
}
