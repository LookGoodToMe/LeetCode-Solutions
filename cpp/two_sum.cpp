class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        vector<int> ret;
        for(int i = 0; i < nums.size(); ++i) {
            int gap = target - nums[i];
            if (map.find(gap) != map.cend()) {
                ret.push_back(map[gap]);
                ret.push_back(i+1);
                return ret;
            }
            else {
                map[nums[i]] = i + 1;
            }
        }
        return ret;
    }
};
