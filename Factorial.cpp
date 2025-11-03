class Solution {
  public:
    int factorial(int n) {
        // code here
        int j=1;
        for(int i=1;i<=n;i++){
            
            j=j*i;
        }
        return j;
    }
};

