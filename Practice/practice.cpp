#include <iostream>
#include <vector>


class Solution {
public: vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap; // Maps a number to its index
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i]; // The number we need to find

            if (numMap.find(complement) != numMap.end()) {
                // Found the complement; return the indices
                result.push_back(numMap[complement]);
                result.push_back(i);
                return result;
            }

            // If not found, insert the current number and its index into the map
            numMap[nums[i]] = i;
        }

        // As per the problem statement, this line will never be reached
        return result;
    }
};