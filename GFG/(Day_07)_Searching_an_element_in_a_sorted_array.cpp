// Searching_an_element_in_a_sorted_array
// https://practice.geeksforgeeks.org/problems/who-will-win-1587115621/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=who-will-win&fbclid=IwAR2hfuAPf0iIXa2ctr_jC35J2CI8O177wZ8vcDCv0uXP9giB6XiEtjXANVE

class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K) 
    { 
    
       // Your code here
       for(int i=0;i<N;i++){
           if(arr[i]==K){
               return 1;
           }
       }
       return -1;
       
    }
};
