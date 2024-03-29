//https://leetcode.com/problems/implement-trie-prefix-tree/description/

#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

class Trie {
public:
    unordered_map<char, vector<string>> mp;
    unordered_map<string, int> src;

    Trie() {
        unordered_map<char, vector<string>> ip;
        mp = ip;
    }

    void insert(string word) {
        mp[word[0]].push_back(word);
        src[word]++;
    }

    bool search(string word) {
        return src[word] > 0;
    }

    bool startsWith(string prefix) {
        if (mp.find(prefix[0]) == mp.end()) {
            return false;
        }
        for (auto x : mp[prefix[0]]) {
            if (x.find(prefix) == 0) {
                return true;
            }
        }
        return false;
    }
};
