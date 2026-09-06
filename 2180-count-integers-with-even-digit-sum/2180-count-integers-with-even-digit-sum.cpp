class Solution {
public:
    int countEven(int num) {
        int count = 0;
        for(int i = 1;i<=num;i++){
            int rem =0;
            int n = i;
            while(n>0){
                rem += n % 10;
                n = n / 10;
            }
            if(rem % 2 == 0){
                count++;
            }
        }
        return count;
    }
};