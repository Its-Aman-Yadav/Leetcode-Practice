//https://leetcode.com/problems/permutations/description/

class Solution {
public:
    vector<vector<int>>v;
    void solve(vector<int>&a,int idx)
    {
        if(idx >= a.size())
        {
            v.push_back(a);
            return;
        }
        for(int i = idx; i < a.size(); i++)
        {
            swap(a[i],a[idx]);
            solve(a,idx+1);
            swap(a[i],a[idx]);
        }
    }

    vector<vector<int>> permute(vector<int>& a) {
        vector<int>p;
        solve(a,0);
        return v;
    }
};
