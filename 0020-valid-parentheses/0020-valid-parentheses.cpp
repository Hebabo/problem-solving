class Solution {
public:
    bool isValid(string s) {
        //هستخدم ال stack عشان اتأكد اذا كان لكل فتحة قوس ليها قفلة
        //هتأكد الاول ان اول حرف دا مش قافلة قوس 
        //لو اول حرف كا فتحة قوس ساعتها اللوب هتشتغل والحرف هيدخل الستاك
        //لو الحرف الي بعده كان قفله القوس هشوف لو الستاك فاضية لو فاضية زي اول if هيرجع false
        //ولو القوص مش من نفس النوع برضو هيرجع false
        // طب لو من نفس النوع فا هكمل اللوب
        // وفي الاخر خالص لو الستاك مش فاضية هيرجع false
        stack<char> str;
        char c;
        if(s[0]==')'||s[0]=='}'||s[0]==']'||s.size()==1)
            return false;
        for(int i=0;i<s.size();i++){
            if(s[i]== '(' || s[i]== '{' ||s[i]== '[')
                str.push(s[i]);
            else{
                if(str.empty())
                    return false;
                c= str.top();str.pop();
                if((c=='('&&s[i]==')')||(c=='{'&&s[i]=='}')||(c=='['&&s[i]==']'))
                    continue;
                else
                    return false;
        }
        }
        if(str.empty())
            return true;
        else
            return false;
};
    };