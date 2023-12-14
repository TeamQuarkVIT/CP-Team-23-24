class Solution {
    // Function to find the next greater element for each element of the array.
    public static long[] nextLargerElement(long[] arr, int n) {
        Stack<Long> stk = new Stack<>();
        ArrayList<Long> arr1 = new ArrayList<>();

        for (int i = n - 1; i >= 0; i--) {
            if (stk.isEmpty()) {
                stk.push(arr[i]);
                arr1.add((long) -1);
            } else {
                while (!stk.isEmpty() && stk.peek() <= arr[i]) {
                    stk.pop();
                }
                if (stk.isEmpty()) {
                    arr1.add((long) -1);
                } else {
                    arr1.add(stk.peek());
                }
                stk.push(arr[i]);
            }
        }
        long[] result = new long[arr1.size()];
        for (int i = 0; i < arr1.size(); i++) {
            result[i] = arr1.get(arr1.size() - 1 - i);
        }
        return result;
    }
}
