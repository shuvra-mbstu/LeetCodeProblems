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
    public int goodNodes(TreeNode root) {
        return countGood(root, root.val);
    }
    int countGood(TreeNode root, int val){
        if(root == null) return 0;
        
        int max = Math.max(root.val, val);
        int count = countGood(root.left, max) + countGood(root.right, max);
        
        return (root.val == max) ? count+1 : count; 
    }
}