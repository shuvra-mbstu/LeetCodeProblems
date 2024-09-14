/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        Map<TreeNode, TreeNode> parents = new HashMap<>();
        Stack<TreeNode> st = new Stack<>();
        
        parents.put(root, null);
        st.push(root);
        
        while(!parents.containsKey(p) || !parents.containsKey(q)){
            TreeNode currentNode = st.pop();
            
            if(currentNode.left != null){
                parents.put(currentNode.left, currentNode);
                st.push(currentNode.left);
            }
            
            if(currentNode.right != null){
                parents.put(currentNode.right, currentNode);
                st.push(currentNode.right);
            }
        }
        Set<TreeNode> ancestors = new HashSet<>();
        while(p!=null){
            ancestors.add(p);
            p = parents.get(p);
        }
        
        while(!ancestors.contains(q)){
            q = parents.get(q);
        }
        return q;
    }
}