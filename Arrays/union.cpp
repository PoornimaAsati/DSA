#include<iostream>
#include<set>
#include<vector>
using namespace std;
vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        set<int> s;
        
        for(int i=0;i<n;i++)
        {
            s.insert(arr1[i]);
        }
        for(int j=0;j<m;j++)
        {
            s.insert(arr2[j]);
        }
        vector<int> ans(s.begin(),s.end());
        return ans;
    }