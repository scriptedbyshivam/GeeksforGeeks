// User function Template for C++

bool prime(int n) {

    // Write your code here
    if (n<=1){
       return false;
    }
    for(int i = 2; i<= sqrt(n); i++) {
        if (n%i == 0){
            return false;
        }
    }
    // yeh sabhi return mai boolen value aayegi. 
    /*isme return mai "True" nahi aayega. isme simple ___ true____ likhna 
    hoga    ya 0 and 1 mai return kara sakte hai*/
    //"True" vali chiz only string mai aayega  
    
    return true;
    // returns a boolean value
}
