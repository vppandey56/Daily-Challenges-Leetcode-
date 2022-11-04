class Solution {
public:
    bool vowel(char c){
        return c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U';
    }
    string reverseVowels(string s) {
        int start=0;
        int end=s.size()-1;
        while(start<end){
            if(vowel(s[start]) && vowel(s[end])){
                swap(s[start],s[end]);
                start++;
                end--;
            }
            else if(!vowel(s[start])){
                start++;
            }
            else if(!vowel(s[end])){
                end--;
            }
        }
        return s;
        
    }
    
};
