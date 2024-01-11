#include <iostream>
#include <vector>


class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";
        int i = 0, j = 0;

        while (i < word1.length() && j < word2.length()) {
            result += word1[i++];
            result += word2[j++];
        }
        while (i < word1.length()) {
            result += word1[i++];
        }
        while (j <word2.length()) {
            result += word2[j++];
        }

        return result;
    }
};