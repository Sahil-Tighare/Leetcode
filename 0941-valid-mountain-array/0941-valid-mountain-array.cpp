class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int st=0, end=arr.size()-1;
        if(arr.size() < 3){
            return false;
        }
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i] >= arr[i+1]){
                 st = i;
                break;
            }
        }
        for(int i=arr.size()-1;i>0;i--){
            if(arr[i] >= arr[i-1]){
                 end = i;
                break;
            }
        }
        if(st == end && st > 0 && end < arr.size()){
            return true;
        }
        return false;
    }
};