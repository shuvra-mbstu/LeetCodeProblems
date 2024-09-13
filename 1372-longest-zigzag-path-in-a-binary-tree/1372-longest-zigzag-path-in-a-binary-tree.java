/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public int longestZigZag(TreeNode root) {
        if(root==null) return -1;
        return Math.max(countPath(root.right, true, 1), countPath(root.left, false, 1));
    }
    int countPath(TreeNode root, Boolean isRight, int count){
        if(root == null) return 0;
        if(root.left == null && root.right==null) return count;
        
        int max = count;
        if(isRight){
            max = Math.max(max , countPath(root.right, true, 1));
            max = Math.max(max, countPath(root.left, false, count+1));
        }
        else {
            max = Math.max(max , countPath(root.right, true, count+1));
            max = Math.max(max, countPath(root.left, false, 1));
        }
        return max;
    }
}