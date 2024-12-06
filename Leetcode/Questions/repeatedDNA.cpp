//problem: https://leetcode.com/problems/repeated-dna-sequences/description/

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n  = s.length();
        int k =10;
        vector<string> result;
        unordered_map<string,int> umap;
        for(int i = 0; i<=n-k; i++){    
            string sub = s.substr(i,k);
            umap[sub]++;
        }

        for(auto i: umap){
            if(i.second>1){
                result.push_back(i.first);
            }
        }

        return result;
    }
};