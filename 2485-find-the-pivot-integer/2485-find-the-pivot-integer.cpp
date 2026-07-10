class Solution {
public:
    int get_perfect_sqrt(int D) {
        for(long long i = 0; i * i <= D; i++) {
            if(i * i == D) return i; 
        }
        return -1;
    }

    int pivotInteger(int n) {
        int total_sum = (n * (n + 1)) / 2;
        int discriminant = 4 * total_sum; 
        
        int sqrt_D = get_perfect_sqrt(discriminant);
        if (sqrt_D != -1) {
            return sqrt_D / 2;
        }
        
        return -1;
    }
};