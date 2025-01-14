#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Get array
    vector<int> arr = {2, 4, -3, 5, 1}; // vector is a sizeable array in c++
    int n = arr.size();
    
    // Build prefix sum array
    vector<int> prefixSum(n+1, 0);
    for (int i=1; i<=n; i++) {
        prefixSum[i] = prefixSum[i-1] + arr[i-1];
    }

    // Query sum of subarray [2, 4]
    int L = 2, R = 4;
    int result = prefixSum[R] - prefixSum[L-1];
    cout << result << '\n';
}
