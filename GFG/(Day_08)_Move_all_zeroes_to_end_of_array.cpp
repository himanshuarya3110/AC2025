// https://practice.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=move-all-zeroes-to-end-of-array&fbclid=IwAR1AKCgjAZY_MC_y6UubpztfZGV5oAPjJUmxGbbm7qO5ji4sWOWsnUZk1TY
// Move_all_zeroes_to_end_of_array 

class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    int c=0; //count
	    for(int i=0;i<n;i++){
	        if(arr[i]!=0){
	            arr[c]=arr[i];
	            c++;
	        }
	    }
	    while(c<n){
	        arr[c]=0;
	        c++;
	    }
	}
};
