class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int cnt = 0;  //isme store karunga 

        for (string &pattern : patterns) {
            if (word.find(pattern) != string::npos) {    //main logic 
                cnt++;
            }
        }

        return cnt;
    }
};