class Solution {
    public boolean isValid(String s) {
        char[] stack=new char[s.length()];
        int top=-1;
        for (int i=0;i<s.length();i++){
            if(top==-1){
                top++;
                stack[top]=s.charAt(i);
                continue;
            }
            switch(s.charAt(i)){
                case ')':
                    if(stack[top]=='('){
                        top--;
                    }else{
                        stack[top++]=')';
                    }
                    break;
                case '}':
                    if(stack[top]=='{'){
                        top--;
                    }else{
                        stack[top++]='}';
                    }
                    break;
                case ']':
                    if(stack[top]=='['){
                        top--;
                    }else{
                        stack[top++]=']';
                    }
                    break;
                default :
                    top++;
                    stack[top]=s.charAt(i);
                    break;
            }
        }
        if(top==-1){
            return true;
        }
        return false;
    }
}
