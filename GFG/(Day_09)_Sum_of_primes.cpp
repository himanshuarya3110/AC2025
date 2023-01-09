// Sum_of_primes
// https://practice.geeksforgeeks.org/problems/sum-of-primes0042/1?fbclid=IwAR3ECSAu6afnfF-KsDGgZ6G6EZo6wjWZYT3V10FZex8RSI49B2tuy2BpQtw

class Solution{
public:
    int primeSum(int N){
        // code here
        int sum=0;
        while(N!=0){
            int digit=N%10;
            if(digit == 2 or digit ==3 or digit ==5 or digit ==7){
                sum+=digit;
            }
            N=N/10;
        }
        return sum;
    }
};
