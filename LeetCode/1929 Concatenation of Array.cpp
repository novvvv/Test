class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>::iterator it = nums.insert(nums.end(), nums.begin(), nums.end());
        return nums;
    }
};
