#include<bits/stdc++.h>
using namespace std;

string stringify(string x)
{
    vector<int>temp;
    
    for(int i=0;i<x.size();i++)
    {
        temp.push_back((int)x[i]);
    }

    sort(temp.begin(),temp.end());
    
    string ans="";
    for(int i=0;i<x.size();i++)
    {
        ans+=(char)temp[i];
    }
    
    return ans;
}
string stringify2(string temp){
   sort(temp.begin(),temp.end());
   return temp;
}

vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    
    vector<vector<int>>sol;
    unordered_map<string,vector<int>>mapp;
    
    int n=A.size();
    
    for(int i=0;i<n;i++)
    {
        string temp=stringify(A[i]);
        mapp[temp].push_back(i+1);
    }
    
    for( auto itr=mapp.begin();itr!=mapp.end();itr++)
    {
       
        sol.push_back(itr->second);
    }
    
    return sol;
    
}
