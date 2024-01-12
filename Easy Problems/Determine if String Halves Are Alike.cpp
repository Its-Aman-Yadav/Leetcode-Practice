//https://leetcode.com/problems/determine-if-string-halves-are-alike/description/?envType=daily-question&envId=2024-01-12


class Solution {
public:
    bool halvesAreAlike(string s) {
        auto countVowels = [](const string& str) {
            unordered_set<char> vowels{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
            int count = 0;
            for (char c : str) {
                if (vowels.count(c) > 0) {
                    count++;
                }
            }
            return count;
        };

        int length = s.length();
        int midPoint = length / 2;

        string firstHalf = s.substr(0, midPoint);
        string secondHalf = s.substr(midPoint);

        return countVowels(firstHalf) == countVowels(secondHalf);
    }
};
