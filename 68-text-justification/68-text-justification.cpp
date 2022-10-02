class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        
        vector<string> aResult;
        
        int aLineStart = 0;
        int aSeek = 0;
        
        char aBuff[maxWidth + 1];
        aBuff[maxWidth] = 0;
        
        for (aLineStart=0;aLineStart<words.size();aLineStart=aSeek) {
            
            int aWidth = 0;
            for (aSeek=aLineStart;aSeek<words.size() && aWidth + words[aSeek].size() + (aSeek - aLineStart) <= maxWidth;aSeek++) {
                aWidth += words[aSeek].size();
            }
            
            int aSpacing = 1;
            int aExtra = 0;
            if ((aSeek - aLineStart) > 1 && aSeek < words.size()) {
                aSpacing = (maxWidth - aWidth) / (aSeek - aLineStart - 1);
                aExtra   = (maxWidth - aWidth) % (aSeek - aLineStart - 1);
            }
            
            int aPaste = 0;
            for (int i=aLineStart;i<aSeek;i++) {
                for (int k=0;k<words[i].size();k++) {
                    aBuff[aPaste++] = words[i][k];
                }
                if (i < (aSeek - 1)) {
                    for (int k=0;k<aSpacing;k++) { aBuff[aPaste++] = ' '; }
                    if (aExtra-- > 0) { aBuff[aPaste++] = ' '; }
                }
            }
            
            while (aPaste < maxWidth) { aBuff[aPaste++] = ' '; }
            
            aResult.push_back(string(aBuff));
        }
        
        return aResult;
    }
};
