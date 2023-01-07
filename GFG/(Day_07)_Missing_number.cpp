// https://practice.geeksforgeeks.org/problems/missing-number4257/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=missing-number&fbclid=IwAR2r4Iez-9RABLU-nL_KfDYslr_BvbzrkbFzuf1e7C-850_AYFSwjPW7w0I
// Missing_number

int missingNumber(int A[], int N)
{
    // Your code goes here
    int sum;
    sum=(N*(N+1))/2;
    
    int temp=0;
    
    for(int i=0;i<N-1;i++){
        temp+=A[i];
    }
    
    if(temp!=sum){
        return (sum-temp);
    }
}
