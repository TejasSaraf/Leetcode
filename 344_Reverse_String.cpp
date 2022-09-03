#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char> &s)
{
    int start = 0;
    int end = s.size() - 1;
    while (start < end)
    {
        swap(s[start++], s[end--]);
    }
}

void print(vector<char> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<char> v;
    v.push_back('A');
    v.push_back('B');
    v.push_back('C');
    print(v);
    reverseString(v);
    print(v);
    return 0;
}