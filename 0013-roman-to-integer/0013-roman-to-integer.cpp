class Solution {
public:
    int romanToInt(string s) {
        int total=0;
        int prv=0;
        for(int i = s.length() -1; i>=0; i--){
            int cur=0;
            switch(s[i]){
                case 'I':
                    cur=1;
                    break;
                case 'V':
                    cur=5;
                    break;
                case 'X':
                    cur=10;
                    break;
                case 'L':
                    cur=50;
                    break;
                case 'C':
                    cur=100;
                    break;
                case 'D':
                    cur=500;
                    break;
                case 'M':
                    cur=1000;
                    break;
            }
            if(cur<prv)
                total-=cur;
            else
                total+=cur;
            prv=cur;
        }
        return total;
    }
};