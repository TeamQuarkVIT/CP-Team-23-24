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
    int count=0;
    public int diameterOfBinaryTree(TreeNode root) {
        int left=check(root.left);
        int right=check(root.right);
        return left+right;
    }
    public int check(TreeNode root){
        if(root==null){
            return 0;
        }
        int left=check(root.left);
        int right=check(root.right);
        return Math.max(left,right)+1;
    }
}
