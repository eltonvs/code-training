/**
 * // Definition for a Node.
 * function Node(val, left, right, next) {
 *    this.val = val === undefined ? null : val;
 *    this.left = left === undefined ? null : left;
 *    this.right = right === undefined ? null : right;
 *    this.next = next === undefined ? null : next;
 * };
 */

/**
 * @param {Node} root
 * @return {Node}
 */
var connect = function (root) {
  const q = [];
  let depth = 0;
  q.push([root, depth]);

  if (!root) {
    return root;
  }

  while (q.length > 0) {
    const [node, d] = q.shift();
    if (d !== depth) {
      depth += 1;
    }
    if (node.left) {
      q.push([node.left, depth + 1]);
    }
    if (node.right) {
      q.push([node.right, depth + 1]);
    }
    if (q.length > 0 && d === q[0][1]) {
      node.next = q[0][0];
    }
  }
  return root;
};
