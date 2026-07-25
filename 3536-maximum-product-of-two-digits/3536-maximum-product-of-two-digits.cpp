class Solution {
public:
    int maxProduct(int n) {
        vector<int> arr;
        while(n!=0){
            int a=n%10;
            arr.push_back(a);
            n=n/10;

        }
        sort(arr.begin(),arr.end());
        int l =arr.size();
        return arr[l-2]*arr[l-1];
        
    }
};