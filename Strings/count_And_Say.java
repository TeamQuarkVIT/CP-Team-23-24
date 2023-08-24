class Solution {
    public String countAndSay(int n) {
        String str="11";
        if(n==1){
            return "1";
        }
        for (int j=0;j<n-2;j++){
            int count=0;
            int i=0;
            char s=str.charAt(0);
            String s1="";
            while(i<str.length()){
                    if(str.charAt(i)==s){
                        count++;
                    }else{
                        s1=s1+count+s;
                        s=str.charAt(i);
                        count=0;
                        continue;
                    }
                    
                    if(i==str.length()-1){
                        s1=s1+count+s;
                        s=str.charAt(i);
                    }
                    i++;
                }
                str=s1;
        }
        return str;
    }
}
