#include <vector>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int maxCandies = *max_element(candies.begin(), candies.end());

        for (int candy : candies) {
            result.push_back(candy + extraCandies >= maxCandies);
        }

        return result;
    }
};