class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 1, el = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == el)
                cnt++;
            else{
                cnt--;
            }
            if(cnt == 0)
                el = nums[i], cnt++;
        }
        return el;
    }
};
