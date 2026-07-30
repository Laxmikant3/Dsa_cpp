class Solution {
public:
    int  minimumPushes(string word) {
        int n = word.length();
        int pushCnt = 0;

        for(int i = 0; i < n; i++){
            pushCnt += i / 8 + 1;
        }

        return pushCnt;
    }
};