#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxi = 0;
        int mini = INT16_MAX;
        for (int i = 0; i < prices.size(); i++)
        {
            mini = min(mini, prices[i]);
            maxi = max(maxi, prices[i] - mini);
        }
        return maxi;
    }
};
int main()
{
    vector<int> v;
    v.push_back(7);
    v.push_back(1);
    v.push_back(5);
    v.push_back(3);
    v.push_back(6);
    v.push_back(4);

    Solution s;
    int ans = s.maxProfit(v);
    cout << ans << endl;

    return 0;
}