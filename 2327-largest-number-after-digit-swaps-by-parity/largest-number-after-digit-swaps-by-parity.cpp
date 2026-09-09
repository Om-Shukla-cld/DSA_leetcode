class Solution {
public:
    int largestInteger(int num) {
        string s = to_string(num);

        vector<int> odd, even;

        for (char c : s)
            ((c-'0') % 2 ? odd : even).push_back(c-'0');

        sort(odd.rbegin(), odd.rend());
        sort(even.rbegin(), even.rend());

        int o = 0, e = 0;

        for (char &c : s) {
            int x = c - '0';

            if (x % 2)
                c = odd[o++] + '0';
            else
                c = even[e++] + '0';
        }

        return stoi(s);
    }
};