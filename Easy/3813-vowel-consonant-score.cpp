class Solution {
public:
    int vowelConsonantScore(string s) {
        int c=0;
        int v=0;
        for(char b:s){
            if(b>='a' && b<='z'){
                if(b=='a'||b=='e'||b=='i'||b=='o'||b=='u'){
                    v++;
                }
                else{
                    c++;
                }
            }
        }
        if(c>0){
            return floor(v/c);
        }
        else{
            return 0;
        }
    }
};