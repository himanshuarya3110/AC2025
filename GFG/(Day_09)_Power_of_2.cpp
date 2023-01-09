// Power_of_2
// https://practice.geeksforgeeks.org/problems/power-of-2-1587115620/1?fbclid=IwAR38sF3mdIxusIkQXOulvvq3J-kxjd_00nikkArwbC8vxO9hjLcAzkPTe_s

class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        
        // Your code here    
        long sum=1;
        while(sum<n){
            sum=sum*2;
        }
        if(sum==n)
            return true;
        else
            return false;
    }
};
