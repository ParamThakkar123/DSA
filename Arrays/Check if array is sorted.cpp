class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        if(n == 0 || n == 1){
            return true;
        }
        for(int i = 0; i < n; i++){
            if(arr[i-1] > arr[i]){
                return false;
            }
        }
        return true;
    }
};
