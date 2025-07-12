//first I will see the digits from the last digit in the vector
//if the digit is less than 9 then increment the digit and the problim is done
//else then the digit is equal to 9 then I will make this digit to 0
//and there is still a probablity that the digit before it be 9 so I made it in a for loop to go to all the digits
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1;i>=0;i--){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            digits[i]=0;                
            
        }
        digits.insert(digits.begin(), 1);
    return digits;
    }
};