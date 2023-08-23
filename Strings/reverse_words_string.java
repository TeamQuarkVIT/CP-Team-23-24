class Solution {
    public String reverseWords(String s) {
        Stack<String> stck = new Stack<String>();
String str = "";
int c = 0;

for (int i = 0; i < s.length(); i++) {
    if ((int) s.charAt(i) == 32 && c > 0) {  
        stck.push(str);
        str = "";
        c = 0;
    }
    if((int) s.charAt(i) != 32){
        c++;
        str = str + s.charAt(i); 
    }
}
stck.push(str);

str = "";
while (!stck.isEmpty()) {
    
    str = str + stck.pop() + " ";
}

return str.trim(); 

    }
}
