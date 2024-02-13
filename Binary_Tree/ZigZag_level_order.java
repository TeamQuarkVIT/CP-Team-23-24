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
    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        List<List<Integer>> level=new ArrayList<>();
        Queue<TreeNode> queue=new LinkedList<>();
        if(root==null){
            return level;
        }
        int flag=0;
        queue.offer(root);
        while(!queue.isEmpty()){
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
            if(flag==1){
                ArrayList<Integer> arr1=new ArrayList<>();
                for(int i=arr.size()-1;i>=0;i--){
                    arr1.add(arr.get(i));
                }
                level.add(arr1);
                flag=0;
            }else{
                flag=1;
                level.add(arr);
            }
            System.out.println(arr);
            
        }
        
        return level;
    }
}
