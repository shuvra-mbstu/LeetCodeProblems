class Solution {
    class Node {
        int[] top = new int[] {-1, -1, -1};
        void add(int val) {
            if (top[2] < val) {
                top[0] = top[1];
                top[1] = top[2];
                top[2] = val;
            }
            else if (top[1] < val) {
                top[0] = top[1];
                top[1] = val;
            }
            else if (top[0] < val) top[0] = val;
        }
        int getMinLen() {
            return Math.min(top[0], Math.min(top[1], top[2]));
        }
    }
    public int maximumLength(String s) {
        // at each i, store the len of long special string ending
        Node[] count = new Node[26];
        for (int i = 0; i < 26; i++) count[i] = new Node();
        
        int curLen = 0;
        for (int i = 0; i < s.length(); i++) {
            // if cur char is same as prev char
            if (i == 0 || s.charAt(i) == s.charAt(i - 1)) {
                curLen++;
            } else {
                curLen = 1;
            }
            count[s.charAt(i) - 'a'].add(curLen);
        }

        // for each character, get the minlen of top 3 special substrings
        int maxLen = -1;
        for (int i = 0; i < 26; i++) {
            int minOf3 = count[i].getMinLen();
            maxLen = Math.max(maxLen, minOf3);
        }
        return maxLen;
    }
}