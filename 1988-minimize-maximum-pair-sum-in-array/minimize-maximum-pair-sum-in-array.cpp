class Solution {
public:
    int minPairSum(vector<int>& nums) {

        //aisa pair nikalna hai 2-2 ka jisse us pair ka maxium nikle magar totAl wo minium ho
        //two pointer helps 
        sort(nums.begin(),nums.end());
        int i =0;
        int j = nums.size()-1;

       int res =0;
        while(i<j){
            int sum = nums[i]+nums[j];
            res = max(sum,res);
            i++;
            j--;
        }
         return res;
    }
};