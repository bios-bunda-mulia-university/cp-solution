// https://leetcode.com/problems/decode-xored-array/

// There is a hidden integer array arr that consists of n non-negative integers.

// It was encoded into another integer array encoded of length n - 1, such that encoded[i] = arr[i] XOR arr[i + 1].
// For example, if arr = [1,0,2,1], then encoded = [1,2,3].

// You are given the encoded array. You are also given an integer first, that is the first element of arr, i.e. arr[0].

// Return the original array arr. It can be proved that the answer exists and is unique.


// Example 1:

// Input: encoded = [1,2,3], first = 1
// Output: [1,0,2,1]
// Explanation: If arr = [1,0,2,1], then first = 1 and encoded = [1 XOR 0, 0 XOR 2, 2 XOR 1] = [1,2,3]
// Example 2:

// Input: encoded = [6,2,7,3], first = 4
// Output: [4,2,0,7,4]
 

// Constraints:

// 2 <= n <= 104
// encoded.length == n - 1
// 0 <= encoded[i] <= 105
// 0 <= first <= 105

// NOTE: Just give the solution, not the whole code

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> decode( vector<int>& encoded, int first )
    {
        vector<int> result( encoded.size() + 1, first );

        for ( size_t i{0}; i < result.size()-1; ++i )
            result[i + 1] = result[i] ^ encoded[i];

        return result;
    }    
};

int main()
{
    Solution s;
    vector<int> arr = { 6, 2, 7, 3 };
    int first = 4;
    
    vector<int> res = s.decode( arr, first );
    int *pos = res.data();

    for ( int i = 0; i <= arr.size(); i++ )
        cout << *pos++ << " ";

    return 0;
}
