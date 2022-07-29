class Solution {
public:
    int lengthOfLastWord(string s) {
        string out ;
        int i=s.size()-1 ;
       while(i>=0){
         
       if(s[i]==' ' && out.size()==0){
         i-- ;    
       }
           else {
               if(s[i]==' '){
                   break ;             
               }
                out.push_back(s[i]) ;
              i--;
           }
       }
       return out.size() ;    
    }
};
