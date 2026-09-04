class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> p;
        int n = nums.size();

        for (int i = 0 ; i < n ; i ++){
            int c = target - nums[i];

            if (p.find(c) != p.end()){
                return {p[c] , i};
            }

            p[nums[i]] = i;
        }
        return {};
    }
};