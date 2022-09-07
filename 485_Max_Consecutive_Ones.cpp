#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int count = 0;
        int maxi = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                count++;
            }
            else
            {
                count = 0;
            }
            maxi = max(maxi, count);
        }
        return maxi;
    }
};
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);

    Solution s;
    int ans = s.findMaxConsecutiveOnes(v);
    cout << ans;
    return 0;
}