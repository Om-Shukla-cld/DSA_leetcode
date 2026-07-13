class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int n = startTime.size();
        int m = endTime.size();

        int second1 = startTime[n-2]*10 + startTime[n-1];
        int second2 = endTime[m-2]*10 + endTime[m-1];
        int sec = second2 - second1;

        int min1 = startTime[n-5]*10 + startTime[n-4];
        int min2 = endTime[m-5]*10 + endTime[m-4];
        int min = min2 - min1;

        int hr1 = startTime[0]*10 + startTime[1];
        int hr2 = endTime[0]*10 + endTime[1];
        int hr = hr2 - hr1;

        int ans = hr*60*60 + min*60 + sec;
        return ans;
    }
}; //building soln like scracth