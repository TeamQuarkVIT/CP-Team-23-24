class Solution {
public:
    string reverseWords(string s) {
        vector<string>words;
        string wor="";
        for(auto i:s ){
            if(i==' '){
                if(wor!="")words.push_back(wor);
                cout<<wor<<endl;
                wor="";
            }

            else wor+=i;
        }
        words.push_back(wor);
            cout<<wor<<endl;

        string res="";

        int p=words.size()-1;

        for(p=words.size()-1; p>0 ; p--){
            if(words[p]!="")res = res + words[p]+" ";
        }
        res+=words[0];

        return res;

    }
};