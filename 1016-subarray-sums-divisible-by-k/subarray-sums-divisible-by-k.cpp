class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();

        map<int,int> mp;
        mp[0]++;

        int pref = 0;
        int cnt = 0;
        for(int i=0;i<n;i++){
            pref += nums[i];
            int mod = pref%k;
            if(mod<0){
                mod += k;
            }
            cnt += mp[mod];
            mp[mod]++;
        }

        return cnt;
    }
};