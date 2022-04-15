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
 * @param {number} low
 * @param {number} high
 * @return {TreeNode}
 */
var trimBST = function (root, low, high) {
  // Iterate for lower bound
  let parent = null;
  let it = root;
  while (it) {
    if (it.val === low) {
      parent = it;
      it.left = null;
      it = null;
    } else if (it.val < low) {
      if (parent) {
        if (parent.val < it.val) {
          parent.right = it.right;
        } else {
          parent.left = it.right;
        }
      } else {
        parent = it;
      }
      it = it.right;
    } else {
      parent = it;
      it = it.left;
    }
  }

  // Iterate for higher bound
  parent = null;
  it = root;
  while (it) {
    if (it.val === high) {
      parent = it;
      it.right = null;
      it = null;
    } else if (it.val > high) {
      if (parent) {
        if (parent.val < it.val) {
          parent.right = it.left;
        } else {
          parent.left = it.left;
        }
      } else {
        parent = it;
      }
      it = it.left;
    } else {
      parent = it;
      it = it.right;
    }
  }

  // Update root
  let newRoot = root;
  while (newRoot && (newRoot.val < low || newRoot.val > high)) {
    if (newRoot.val < low) {
      newRoot = newRoot.right;
    } else if (newRoot.val > high) {
      newRoot = newRoot.left;
    }
  }

  return newRoot;
};
