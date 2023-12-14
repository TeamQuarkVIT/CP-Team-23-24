class Solution {
    static void reverse(Stack<Integer> s) {
        int n=s.size();
        ArrayList<Integer> arr=new ArrayList<>();
        for(int i=0;i<n;i++){
            arr.add(s.peek());
            s.pop();
        }
        for(int i=0;i<n;i++){
            s.push(arr.get(i));
        }
    }
}
