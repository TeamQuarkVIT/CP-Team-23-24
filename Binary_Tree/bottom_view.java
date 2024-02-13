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
    public List<List<Integer>> levelOrderBottom(TreeNode root) {
        Queue<TreeNode> queue=new LinkedList<>();
        List<List<Integer>> level=new ArrayList<>();
        List<List<Integer>> levelr=new ArrayList<>();
        if(root==null){
            return level;
        }
        queue.offer(root);
        while(queue.size()!=0){
            ArrayList<Integer> arr=new ArrayList<>();
            int size=queue.size();
            for(int i=0;i<size;i++){
                TreeNode element=queue.poll();
                if(element.left!=null){
                    queue.offer(element.left);
                }
                if(element.right!=null){
                    queue.offer(element.right);
                }
                arr.add(element.val);
            }
            level.add(arr);
        }
        for(int i=level.size()-1;i>=0;i--){
            levelr.add(level.get(i));
        }
        return levelr;
    }
}
