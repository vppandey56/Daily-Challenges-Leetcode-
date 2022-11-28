class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int>mp;
        for(int i=0;i<matches.size();i++){
            mp[matches[i][1]]++;

        }
        vector<int>winner,loser;
        for(int i=0;i<matches.size();i++){
            if(mp[matches[i][1]]==1){
                loser.push_back(matches[i][1]);
            }
            if(mp.find(matches[i][0])==mp.end()){
                winner.push_back(matches[i][0]);
                mp[matches[i][0]]=2;
            }
        }
        sort(winner.begin(),winner.end());
        sort(loser.begin(),loser.end());
        return {winner,loser};      
    }
};
