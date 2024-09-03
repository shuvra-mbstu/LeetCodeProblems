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
    String travel (TreeNode node){
        if(node == null) return "";
        
        if(node.left == null && node.right == null) return node.val+"-";
        
        return travel(node.left) + travel(node.right);
        
    }
    public boolean leafSimilar(TreeNode root1, TreeNode root2) {
       return travel(root1).equals(travel(root2));
    }
}