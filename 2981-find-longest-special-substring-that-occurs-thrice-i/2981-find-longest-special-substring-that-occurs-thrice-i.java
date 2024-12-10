import java.util.HashMap;
import java.util.HashSet;

public class Solution {
    public int maximumLength(String s) {
        int n = s.length();
        String result = "";
        
        int left = 1, right = n;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            String candidate = findSubstring(s, mid);
            if (candidate != null) {
                result = candidate;
                left = mid + 1; // Try longer substrings
            } else {
                right = mid - 1; // Try shorter substrings
            }
        }
        
        return result.length() == 0 ? -1 : result.length();
    }
    
    private String findSubstring(String s, int length) {
        int n = s.length();
        long base = 31, mod = (long) 1e9 + 7;
        long hash = 0, basePower = 1;
        
        // Rolling hash for the first substring of length `length`
        for (int i = 0; i < length; i++) {
            hash = (hash * base + s.charAt(i)) % mod;
            if (i < length - 1) basePower = (basePower * base) % mod;
        }
        
        // Store seen hashes and their starting indices
        HashMap<Long, HashSet<Integer>> seen = new HashMap<>();
        seen.putIfAbsent(hash, new HashSet<>());
        seen.get(hash).add(0);
        
        // Slide the window
        for (int i = length; i < n; i++) {
            hash = (hash - s.charAt(i - length) * basePower % mod + mod) % mod;
            hash = (hash * base + s.charAt(i)) % mod;
            
            if (!seen.containsKey(hash)) {
                seen.put(hash, new HashSet<>());
            }
            
            seen.get(hash).add(i - length + 1);
            
            if (seen.get(hash).size() >= 3 && isSingleCharacter(s.substring(i - length + 1, i + 1))) {
                    System.out.println(s.substring(i - length + 1, i + 1));
                return s.substring(i - length + 1, i + 1);
            }
        }
        
        return null;
    }
    private boolean isSingleCharacter(String s) {
        char firstChar = s.charAt(0);
        for (char c : s.toCharArray()) {
            if (c != firstChar) {
                return false;
            }
        }
        return true;
    }
}