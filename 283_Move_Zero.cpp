#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int j = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            nums[j] = nums[i];
            j++;
        }
    }
    while (j < nums.size())
    {
        nums[j] = 0;
        j++;
    }
}

void printVector(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    int element;
    cout << "Enter Vector Elements";
    for (int i = 0; i < 5; i++)
    {
        cin >> element;
        v.push_back(element);
    }
    printVector(v, 5);
    moveZeroes(v);
    printVector(v, 5);
}
