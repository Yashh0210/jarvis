class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         sort(strs.begin(),strs.end());
         string ans="";
         int len=strs.size();

         int n=strs[0].size();
         char ch;
         for(int i=0;i<n;i++){
            ch=strs[0][i];
            if(strs[0][i]==strs[len-1][i]){
                ans+=ch;
            }
            else return ans;

         }
         return ans;

        
    }
};
