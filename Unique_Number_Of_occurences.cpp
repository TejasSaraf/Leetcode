#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       	// sort(arr.begin(),arr.end());
  vector<int> v;
    int count = 0;
	
	//storing each occurance value
    for(int i = 0 ; i<= arr.size()-1; i++)
    {
        
        if(i==arr.size()-1)
        {
            v.push_back(count+1);
            continue;
         }
        if(arr[i]==arr[i+1])
        {
            count++;
         }
        else
        {
          v.push_back(count+1);
            count = 0;
        }
    }
    // checking if it is unique or not
    // sort(v.begin(),v.end());
    
    for(int i = 0 ; i<v.size()-1; i++)
    {
        if(v[i]==v[i+1])
        {
           return false;
        }
        
    }
    return true;
}
    
};

