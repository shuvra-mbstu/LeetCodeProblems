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
    public int maxLevelSum(TreeNode root) {
        int max = Integer.MIN_VALUE;
        if(root.left == null && root.right==null) return 1;
        
        Queue<TreeNode> bucket = new LinkedList<>();
        
        bucket.offer(root);
        int sum = 0, res=1, levelCounter=0;
        
        while(!bucket.isEmpty()){
            levelCounter ++;
            int levelSize = bucket.size();
            sum=0;
            
            for(int i=0; i<levelSize; i++){
                TreeNode currentNode = bucket.poll();
                sum += currentNode.val;
                
                if(currentNode.left != null) bucket.offer(currentNode.left);
                if(currentNode.right != null) bucket.offer(currentNode.right);
            }
            
            
            if(sum>max){
                max = sum;
                res = levelCounter;
            }
        }
        return res;
    }
}