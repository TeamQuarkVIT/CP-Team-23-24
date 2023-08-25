#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        string s;
        cin >> s;
        
        vector<int> prefix(n);
        unordered_set<char> pre;
        
        int prefixDistinct = 0;
        for (int i = 0; i < n; ++i) {
            pre.insert(s[i]);
            prefixDistinct = pre.size();
            prefix[i] = prefixDistinct;
        }
        
        vector<int> suffix(n);
        unordered_set<char> suff;
        
        int suffixDistinct = 0;
        for (int i = n - 1; i >= 0; --i) {
            suff.insert(s[i]);
            suffixDistinct = suff.size();
            suffix[i] = suffixDistinct;
        }
        
        int ans = 0;
        for (int i = 0; i < n - 1; ++i) {
            ans = max(prefix[i] + suffix[i + 1], ans);
        }
        
        cout << ans << endl;
    }
    
    return 0;
}
