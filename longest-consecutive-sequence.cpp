class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        unordered_set<int> hashmap(nums.begin(), nums.end());
        int longest = 0;

        for (int num : hashmap) {
            if (hashmap.find(num - 1) == hashmap.end()) { 
                int cnt = 1;
                int x = num;

                while (hashmap.find(x + 1) != hashmap.end()) {
                    cnt++;
                    x++;
                }

                longest = max(longest, cnt);
            }
        }

        return longest;
    }
};
