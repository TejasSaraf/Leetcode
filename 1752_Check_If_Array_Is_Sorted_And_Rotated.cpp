#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    bool check(vector<int> &num)
    {
        int count = 0;
        int n = num.size();
        for (int i = 1; i < n; i++)
        {
            if (num[i - 1] > num[i])
            {
                count++;
            }
        }
        if (num[n - 1] > num[0])
        {
            count++;
        }
        return count <= 1;
    }
};
void print(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(1);
    v.push_back(2);
    print(v);
    Solution s;
    bool ans = s.check(v);
    if (ans == 1 || ans == 0)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}