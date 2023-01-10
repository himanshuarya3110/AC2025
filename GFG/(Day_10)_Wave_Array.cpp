// Wave_Array
// https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1?fbclid=IwAR35xGrErx_AM1KqgsHWdkeKAx6411QK8aldLu9PUGsPyXoHPXX1xzZRbV0


class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int>& arr){
        
        // Your code here
        int flag=0,temp=0;
        if(n%2!=0){
           temp=arr[n-1];
           flag++;
        }
        for(int i=0;i<n;i=i+2){
            swap(arr[i],arr[i+1]);
        }
        if(flag==1){
          arr.pop_back();
          arr.push_back(temp);
        }
    }
};
