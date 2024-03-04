class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score = 0,maxScore=0;
        int s = 0;
        int e = tokens.size() - 1;
        sort(tokens.begin(), tokens.end());
        while (s <= e) {
            if (tokens[s] <= power) {
                score++;
                power -= tokens[s];
                s++;
                maxScore=max(maxScore,score);
            } else if (score) {
                score--;
                power += tokens[e];
                e--;
            } else
                e--;
        }
        return maxScore;
    }
};