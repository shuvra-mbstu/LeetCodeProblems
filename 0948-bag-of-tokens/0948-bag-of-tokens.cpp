class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score = 0, maxScore=0;
        
        int left = 0;
        int right = tokens.size() - 1;
        
        sort(tokens.begin(), tokens.end());
        
        while (left <= right) {
            if (tokens[left] <= power) {
                score++;
                power -= tokens[left];
                left++;
                maxScore=max(maxScore,score);
            } else if (score) {
                score--;
                power += tokens[right];
                right--;
            }
            else break;
        }
        return maxScore;
    }
};