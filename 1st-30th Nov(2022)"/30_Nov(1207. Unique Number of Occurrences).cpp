//approach-1
//time complexity=O(nlogn)
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n=arr.size();
        map<int,int>mymap;
        for(int i=0;i<n;i++){
            if(mymap.find(arr[i])==mymap.end()){
                mymap[arr[i]]=1;

            }
            else{
                mymap[arr[i]]++;
            }
        }
        map<int,int>mymap2;
        for(auto i:mymap){
            if(mymap2.find(i.second)==mymap2.end()){
                mymap2[i.second]=1;
            }
            else{
                return false;
            }
        }
        return true;
        
    }
};
//aproach-2
//time complexity=O(n)
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>freq;
        
        for(auto i:arr){
            freq[i]++;
        }
        unordered_set<int>s;
        for(auto i:freq){
            s.insert(i.second);
        }
        return freq.size()==s.size();
        
    }
};
