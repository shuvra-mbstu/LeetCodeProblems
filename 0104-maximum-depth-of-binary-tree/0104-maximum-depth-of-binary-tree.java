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
    int calculateMaxDepth(TreeNode node, Integer count){
        if(node== null)return count;
        
        return Math.max(calculateMaxDepth(node.left, count),calculateMaxDepth(node.right, count)) + 1;
    }
    public int maxDepth(TreeNode root) {
       return calculateMaxDepth(root, 0);
    }
}