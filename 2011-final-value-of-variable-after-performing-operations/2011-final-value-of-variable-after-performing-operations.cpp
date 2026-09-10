class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n=0;
        for(int i=0;i<operations.size();i++){
            if(operations[i] == "--X" || operations[i] == "X--"){
                n = n-1;
            }else{
                n = n+1;
            }
        }
        return n;
    }
};