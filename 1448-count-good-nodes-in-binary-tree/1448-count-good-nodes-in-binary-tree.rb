# Definition for a binary tree node.
# class TreeNode
#     attr_accessor :val, :left, :right
#     def initialize(val = 0, left = nil, right = nil)
#         @val = val
#         @left = left
#         @right = right
#     end
# end
# @param {TreeNode} root
# @return {Integer}
def good_nodes(root)
    return counting_node(root, root.val);
end

def counting_node(root, last_val)
  return 0 unless root

  count = 0
  
  if last_val<= root.val
   count += 1
   last_val = root.val
  end
  
  count += counting_node(root.left, last_val);
  count += counting_node(root.right, last_val);

  count
end