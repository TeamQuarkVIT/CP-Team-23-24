class Solution {
    public static int checkRedundancy(String s) {
        // code here
        Stack<Character> stk = new Stack<>();
        HashSet<Character> set = new HashSet<>();
        set.add('+');
        set.add('-');
        set.add('*');
        set.add('/');
        
        for (int i = 0; i < s.length(); i++) {
            if (set.contains(s.charAt(i)) || s.charAt(i) == '(') {
                stk.push(s.charAt(i));
            } else if (s.charAt(i) == ')') {
                if (!stk.isEmpty() && set.contains(stk.peek())) {
                    while (!stk.isEmpty() && stk.peek() != '(') {
                        stk.pop();
                    }
                    stk.pop();
                } else {
                    return 1;
                }
            }
        }
        return 0;
    }
}
