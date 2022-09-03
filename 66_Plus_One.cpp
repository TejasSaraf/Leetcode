#include <iostream>
#include <vector>
using namespace std;

void plusOne(vector<int> &digits)
{
    for (int i = digits.size() - 1; i >= 0; i--)
    {
        if (digits[i] < 9)
        {
            digits[i]++;
            break;
        }
        else
        {
            digits[i] = 0;
        }
    }
    digits.push_back(0);
    digits[0] = 1;
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
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    printVector(v, 3);
    plusOne(v);
    printVector(v, 3);

    return 0;
}
