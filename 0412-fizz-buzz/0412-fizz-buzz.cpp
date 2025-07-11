class Solution {
public:
    vector<string> fizzBuzz(int n) {
        if(n==0)
            return {};
        vector<string> Stack={};
        for(int i=1;i<=n;i++){
            if((i%3==0)&&(i%5==0))
                Stack.push_back("FizzBuzz");
            else if(i%5==0)
                Stack.push_back("Buzz");
            else if(i%3==0)
                Stack.push_back("Fizz");
            else
             Stack.push_back(to_string(i));     
        }
        return Stack;
    }
};