#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin>>a>>b;
        int ans=0;

    for (int i=0;i<a.length();i++) {
        for (int j=0;j<=a.length();j++) {
            if (b.find(a.substr(i,j-i))!= string::npos) {
                ans = max(ans,j-i);
            }
        }
    }
    cout<<a.length()+b.length()-2*ans << endl;
    }
    return 0;
}