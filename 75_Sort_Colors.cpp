//DUTCH-NATIONAL FLAG 
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;
        while (mid <= high)
        {
            switch (nums[mid])
            {
            case 0:
                swap(nums[low++], nums[mid++]);
                break;

            case 1:
                mid++;
                break;

            case 2:
                swap(nums[mid], nums[high--]);
                break;
            }
        }
    }
};
int main()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(0);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    Solution s;
    s.sortColors(v);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}