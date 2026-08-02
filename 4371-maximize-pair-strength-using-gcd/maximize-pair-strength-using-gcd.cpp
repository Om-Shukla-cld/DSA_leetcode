class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        int n=nums.size();
        long long maxans=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                long long GCD=gcd(nums[i],nums[j]);
                long long ans=(1LL*nums[i]*nums[j])/(1LL*GCD*GCD);
                maxans=max(maxans,ans);
            }
        }
        return maxans;
    }
};