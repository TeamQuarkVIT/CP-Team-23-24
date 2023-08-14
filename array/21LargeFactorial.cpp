//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:

     
    vector<int> multiply(vector<int>& digits, int factor) {
        int carry = 0;
        for (int i = 0; i < digits.size(); i++) {
            int prod = digits[i] * factor + carry;
            digits[i] = prod % 10;
            carry = prod / 10;
        }
        while (carry) {
            digits.push_back(carry % 10);
            carry /= 10;
        }
        return digits;
    }
    
    
    vector<int> factorial(int N){
        // code here
        vector<int>res;
        res.push_back(1);
        for(int i=2; i<=N ;i++ ){
            multiply(res, i);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends