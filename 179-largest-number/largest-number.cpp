class Solution {
public:
    static bool cmp(string a, string b) {
        return a + b > b + a;
    }

    string largestNumber(vector<int>& nums) {
        vector<string> arr;

        for (int x : nums) {
            arr.push_back(to_string(x));
        }

        sort(arr.begin(), arr.end(), cmp);

        // Agar sabhi numbers 0 hain
        if (arr[0] == "0")
            return "0";

        string ans = "";

        for (string x : arr) {
            ans += x;
        }

        return ans;
    }
};