//https://leetcode.com/problems/accounts-merge/description/


class Solution {
public:
    vector<int> parent;
    int find_set(int x){
        if(parent[x] == x) return x;
        return parent[x] = find_set(parent[x]);
    }

    void make_union(int x, int y){
        int a = find_set(x);
        int b = find_set(y);
        if(a != b){
            parent[a] = b;
        }
    }

    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        int n = accounts.size();
        parent.resize(n);
        unordered_map<string, int> emailtoId;
        for(int i = 0; i<n; i++){
           parent[i] = i;
           for(int j = 1; j<accounts[i].size(); j++){
               if(emailtoId.find(accounts[i][j]) != emailtoId.end()){
                   make_union(emailtoId[accounts[i][j]], i);
               }
               else{
                   emailtoId[accounts[i][j]] = parent[i];
               }
           }
        }
        unordered_map<int, vector<string>> newaccounts;
        for(auto it : emailtoId){
            newaccounts[find_set(it.second)].push_back(it.first);
        }
        vector<vector<string>> ans;
        for(auto &it : newaccounts){
            auto &emails = it.second;
                sort(emails.begin(), emails.end());
                emails.insert(emails.begin(), accounts[it.first][0]);
                ans.push_back(emails);
        }
        return ans;
    }
};
