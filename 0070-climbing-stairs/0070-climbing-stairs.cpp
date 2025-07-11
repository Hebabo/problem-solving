class Solution {
public:
    int climbStairs(int n) {
        //من وصف المشكلة ممكن نستخدم Fibonacci sequence 
        //٠ بيكون ٠
        //١بيكون خطوة واحدة
        // ٢ هو مجموع الخطوتين الي قبلها بيساوي ١
        // ٣بتساوي ١+١  ب ٢
        //احنا هنخلي ان ١ بقيمة ابتدائية ١وال ٢ ب ٢ وهكمل بنفس المبدأ

        
        if(n<=2&&n>=0)
            return n;
        int n1=1,n2=2;
int n3=0;
        for(int i=3;i<=n;i++){
            n3=n1+n2;
            n1=n2;
            n2=n3;
        }
        return n3;

    }
};