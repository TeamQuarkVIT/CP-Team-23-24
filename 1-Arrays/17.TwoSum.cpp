#include<iostream>
#include<map>

int getPairsCount(vector<int> arr, int k){
    int count = 0;
    std::unordered_map<int, int> m;

    for (int i = 0; i < arr.size(); i++) {
        int complement = k - arr[i];
        if (m.find(complement) != m.end()) {
            count += m[complement]; // Increment the count with the frequency of complement
        }
        m[arr[i]]++; // Increment the frequency of the current element
    }

    return count;
}

int main() {
    
    std::vector<int> arr = {1, 2, 3, 4, 5};
    int k = 6;
    
    int result = countPairsWithSum(arr, k);
    std::cout << "Number of pairs with sum " << k << ": " << result << std::endl;

    return 0;
}



  
