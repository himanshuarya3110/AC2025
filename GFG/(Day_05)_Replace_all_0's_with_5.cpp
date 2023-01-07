// Replace_all_0's_with_5
// https://practice.geeksforgeeks.org/problems/replace-all-0s-with-5/1?fbclid=IwAR1ClzL8cLt9RT5hvC0-Kw6J1O9dC7tIM_inVT0noXKtlUeg7JFWRc5Ylvw


int convertFive(int n) {
    // Your code here
    string s= to_string(n);
    int len=s.length();
    
    for(int i=0; i<len; i++){
        if(s[i] == '0'){
            s[i]= '5';
        }
    }
    
    int x=stoi(s);
    return x;
    
    
}
