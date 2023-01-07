// Check_if_array_is_sorted
// https://practice.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1?fbclid=IwAR3dCtbniF31IcmLSt2BQjIH7M18W5RjqP5AhtJbgM7NDmBhfpgikmchoL0


class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        // code here
        int i=0;
        int temp=n;
        while(n--){
            
            if(i==temp-1){
                return 1;
            }
            
            if(arr[i]>arr[i+1]){
                return 0;
            }
            
            i++;
            
        }
        return 1;
    }
};
