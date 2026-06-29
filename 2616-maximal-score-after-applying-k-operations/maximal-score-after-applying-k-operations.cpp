class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long sum = 0;
        priority_queue<int>pq(nums.begin(),nums.end());
        while(k--){
            int max_el=pq.top();
            pq.pop();
            sum+=max_el;

            max_el=ceil(max_el/3.0);
            pq.push(max_el);

        }
        return sum;
    }
};