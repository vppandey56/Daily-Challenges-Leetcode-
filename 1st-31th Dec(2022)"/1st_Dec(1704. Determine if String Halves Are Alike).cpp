class Solution {
public:
    bool isvowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
            return true;
        }
        return false;
    }
    bool halvesAreAlike(string s) {
        int n=s.size();
        int c1=0,c2=0;
        for(int i=0;i<n/2;i++){
            if(isvowel(s[i])){
                c1++;
            }
        }
        for(int i=n/2;i<n;i++){
            if(isvowel(s[i])){
                c2++;
            }
        }
        return c1==c2;
    }
};
