#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxSubarraySum(vector<int> &arr)
    {
        int n = arr.size();
        int S[n];
        S[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (S[i - 1] < 0)
            {
                S[i] = arr[i];
            }
            else
            {
                S[i] = S[i - 1] + arr[i];
            }
        }
        int max = S[0];
        for (int i = 0; i < n; i++)
        {
            if (S[i] > max)
            {
                max = S[i];
            }
        }
        return max;
    }
};