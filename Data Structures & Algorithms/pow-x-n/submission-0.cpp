class Solution {
public:
    double myPow(double x, int n) {
        double result = 1;
        bool isNegative = false;
        if(n<0) {
            n = -n;
            isNegative = true;
        }
 for(int i = 0; i<n; i++){
    result *= x;
 }
 if(isNegative) result = 1/result;
 return result;
    }
};
