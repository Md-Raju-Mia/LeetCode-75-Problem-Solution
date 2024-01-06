class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s="";
        int x=word1.length();
        int y=word2.length();
        int i=0;
        while(i<x || i <y)
        {
            if(i<x)
            s+=word1[i];
            if(i<y)
            s+=word2[i];

            i++;
        }
        return s;
    }
};
