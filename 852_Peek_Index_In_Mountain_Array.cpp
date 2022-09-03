#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    int index = peakIndexInMountainArray(v);
    cout << "Peek Index In Mountain Array:" << index << endl;
    return 0;
}