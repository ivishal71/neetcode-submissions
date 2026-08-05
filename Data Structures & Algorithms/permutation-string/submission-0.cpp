class Solution {
public:
    bool isFreq(int Freq1[], int Freq2[]){
        for(int i=0; i<26; i++){
            if(Freq1[i] != Freq2[i]){
                return false;
            }
           
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        //CALCULATE FREQ OF CHAR IN STRING 1---
        int Freq[26] = {0};
        for(int i=0; i<s1.size(); i++){
            Freq[s1[i] - 'a']++;     //STORE EACH CH. FREQ HERE---
        }
        int windSize = s1.size();
        //SEARCH String1 CHAR IN String 2----
        for(int i=0; i<s2.size(); i++){
            int windIdx = 0;
            int idx = i;
            int windFreq[26] = {0};
            //here we compare windIdx with windSize--
            while(windIdx < windSize && idx < s2.size()){
                windFreq[s2[idx]-'a']++;   //this store every ch freq of string 2---
                windIdx++;
                idx++;
            }
            if(isFreq(Freq, windFreq)){
                return true;
            }
           
        }
        return false;

        
        
    }
};
