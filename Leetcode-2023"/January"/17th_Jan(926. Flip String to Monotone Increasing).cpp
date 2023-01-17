class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int countflip=0;
        int countOne=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                countOne++;
            }
            if(s[i]=='0'){
                if(countOne>0){
                    countflip++;
                }
            }
            if(countOne<countflip){
                countflip=countOne;
            }
        }
        return countflip;
    }
};
