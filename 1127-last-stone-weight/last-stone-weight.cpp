class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        //solving qustion using priority queue
        priority_queue<int>pq;   //max-heap


        for(int x:stones){
            pq.push(x);
        }
        while(pq.size()>1){
            int a  =pq.top();
            pq.pop();

            int b = pq.top();
            pq.pop();

            pq.push(abs(a-b));
        }
            return pq.top();
        
    }
};