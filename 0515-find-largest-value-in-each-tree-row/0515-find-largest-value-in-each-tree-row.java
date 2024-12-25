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
    public List<Integer> largestValues(TreeNode root) {
        final List<Integer> result = new ArrayList<>();
        if(root == null) return result;

        // Use a queue for level order traversal
        final Queue<TreeNode> q = new LinkedList<>();
        q.offer(root);
        
        // Iterate through the tree level by level
        while(!q.isEmpty()) {
            final int levelSize = q.size();
            int max = Integer.MIN_VALUE;
            for (int i=0; i<levelSize; ++i) {
                final TreeNode node = q.poll();
                // Update the maximum value for the current level
                max = Math.max(max, node.val);

                // Enqueue the left and right children if they exist
                if (node.left != null) q.offer(node.left);
                if (node.right != null) q.offer(node.right);
            }
            // Add the maximum value of the current level to the result list
            result.add(max);
        }

        // Return the final result list
        return result;
    }
}
