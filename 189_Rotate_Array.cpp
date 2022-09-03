#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void rotate(vector<int> &num, int k)
    {
        vector<int> temp(num.size());
        int n = num.size();
        for (int i = 0; i < n; i++)
        {
            temp[(i + k) % n] = num[i];
        }
        num = temp;
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
    vector<int> num;
    num.push_back(1);
    num.push_back(2);
    num.push_back(3);
    print(num);
    Solution s;
    s.rotate(num, 2);
    print(num);
    return 0;
}