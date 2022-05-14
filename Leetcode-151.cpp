class Solution {
public:
    string reverseWords(string s) {
        string temp="";
        int i=s.size()-1;
        int j=0;
        while(i>=0){
            while(i>=0 && s[i]==' '){
                i--;
            }
            j=i;
            
            if(i<0){
                break;
            }
            while(i>=0 && s[i]!=' '){
                i--;
            }
            
            if(temp.empty()){
                temp+=(s.substr(i+1,j-i));
            }
            else{
                temp+=(" "+s.substr(i+1,j-i));
            }
        }
        return temp;
    }
};
