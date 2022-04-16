const postOrderTravSum = (root, sum = 0) => {
  if (!root) {
    return sum;
  }
  const rightTravSum = postOrderTravSum(root.right, sum);
  root.val += rightTravSum;
  return postOrderTravSum(root.left, root.val);
};

/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {TreeNode}
 */
var convertBST = function (root) {
  postOrderTravSum(root);
  return root;
};
