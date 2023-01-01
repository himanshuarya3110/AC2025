// Find the smallest and second smallest element in an array
// https://practice.geeksforgeeks.org/problems/find-the-smallest-and-second-smallest-element-in-an-array3226/1?fbclid=IwAR29yZ9QooGDbHeXcT8KjqDpEeJ_Lche2EVYV9_OYogntPH0g5fBmtqmPZg

vector<int> minAnd2ndMin(int a[], int n) {
    sort(a,a+n);
    vector<int> s;
    s.push_back(a[0]);
    
    for(int i=1;i<n;i++){
        if(a[i-1]!=a[i]){
            s.push_back(a[i]);
            return s;
        }
    }
    return {-1};
}
