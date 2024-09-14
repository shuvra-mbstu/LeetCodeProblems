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
    public List<Integer> rightSideView(TreeNode root) {
        Queue<TreeNode> bucket = new LinkedList<>();
        List<Integer> result = new ArrayList<>();

        if(root == null) return result;
        
        bucket.offer(root);
        while(!bucket.isEmpty()){
            int levelSize = bucket.size();
            
            for(int i=0; i<levelSize; i++){
                TreeNode currentNode = bucket.poll();
                
                if(i== levelSize-1){
                    result.add(currentNode.val);
                }
                
                if(currentNode.left !=null){
                    bucket.offer(currentNode.left);
                }
                if(currentNode.right !=null){
                    bucket.offer(currentNode.right);
                }
            }

        }
        return result;
    }
}