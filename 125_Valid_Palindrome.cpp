#include <iostream>
using namespace std;
class Solution
{
private:
    bool valid(char ch)
    {
        if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9')
        {
            return 1;
        }
        return 0;
    }
    char toLowerCase(char ch)
    {
        if (ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9')
        {
            return ch;
        }
        else
        {
            int temp = ch - 'A' + 'a';
            return temp;
        }
    }
    bool checkPalindrome(string s)
    {
        int start = 0;
        int end = s.length() - 1;
        while (start <= end)
        {
            if (s[start] != s[end])
            {
                return 0;
            }
            else
            {
                start++;
                end--;
            }
        }
        return 1;
    }

public:
    bool isplaindrome(string s)
    {
        string str = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (valid(s[i]))
            {
                str.push_back(s[i]);
            }
        }
        for (int i = 0; i < str.length(); i++)
        {
            str[i] = toLowerCase(str[i]);
        }
        return checkPalindrome(str);
    }
};

int main()
{
    Solution s;
    string str = "Noon";
    cout << str << endl;
    bool ans = s.isplaindrome(str);
    cout << "Palindrome or Not:" << ans << endl;
    return 0;
}