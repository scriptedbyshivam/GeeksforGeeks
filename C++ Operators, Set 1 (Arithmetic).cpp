class Solution {
  public:
    vector<int> cppOperators(int A, int B){
        // code here
        vector<int>result;
        
        result.push_back(A+B);
        
        result.push_back(A*B);
        
        if(B>A){
            
            result.push_back(B-A);
            
            result.push_back(B/A);
            
        }
        
        else{
            
                result.push_back(A-B);
                
                result.push_back(A/B);
                
                /*isme return toh normal A+B,A*B,A-B,A/B hi karna tha pr 
                agar B>A toh Hume B-A or B/A karna tha 
                
                also remember the how output by vector in class*/
            }
        
        return result;
        
    }
    
};





//
//int main() {
//    Solution obj;
//    vector<int> output = obj.cppOperators(1, 2);
//
//    for (int val : output) {
//        cout << val << " ";
//    }
//    cout << endl;
//
//    return 0;
//}
