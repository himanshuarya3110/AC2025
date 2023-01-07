// https://practice.geeksforgeeks.org/problems/element-appearing-once2552/0?company[]=Qualcomm&company[]=Qualcomm&difficulty[]=1&page=1&query=company[]Qualcommdifficulty[]1page1company[]Qualcomm&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=element-appearing-once&fbclid=IwAR2gegWuQMkESKR-GVw5eJSa3WSq08-338KWXoDBJDlEYLHLEQCx-vY0rjM
// Find_the_element_that_appears_once

class Solution{
public:	
	int search(int A[], int N){
	    //code
	    for(int i=0;i<N;i++){
	        if(A[i]==A[i+1]){
	            i++;
	        }
	        else{
	            return A[i];
	        }
	        
	    }
	    
	}
};
