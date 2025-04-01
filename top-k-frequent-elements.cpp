class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        vector<int> ans;
        
        for(int i = 0; i < nums.size(); i++) {
            count[nums[i]]++;
        }
        
        vector<pair<int,int>> Sort(count.begin(), count.end());
        sort(Sort.begin(), Sort.end(), [](const auto& a, const auto& b) {
            return a.second > b.second;
        });
        
        for(int i = 0; i < k; i++) {
            ans.push_back(Sort[i].first);
        }
        
        return ans;
    }
};
