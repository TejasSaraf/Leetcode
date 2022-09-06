#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string removeOccurrences(string s, string part)
    {
        while (s.length() != 0 && s.find(part) < s.length())
        {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};
int main()
{
    string s = "bcbabcbabcd";
    cout << s << endl;
    Solution st;
    string ss = st.removeOccurrences(s, "abc");
    cout << ss << endl;

    return 0;
}