int findPattern(string &s, string &p) {
    // code here
    int n=s.size();
    int m=p.size();
    
    /*
    important 
    n -> s ki length (total characters)
    m -> p ki length
    Ye variables baar-baar s.size() aur p.size() call karne se bachate hain.
    iski ki wahse se mera code run return -1 karne laga  yeh important hai,
    ki size ko kisi variable ke sath store use karo. warna choti mistake bhi baari pad sakti hai. 
    */
    
    for(int i=0;i<=n-m;i++){
        int j;
        for( j=0;j<m;j++){
            
        
        if(s[i+j]!=p[j]){
            
            break;
        }
            
        }
        
        if(j==m){
            return i;
            
        }
        
        
    }
    return -1;
    
}


/*

i <= n - m isliye, kyunki agar remaining characters pattern se kam hain, match possible nahi.
Example: s = "Hello", p = "llo" -> loop i = 0,1,2 tak chalega.


Agar s ka current character p ke character se match nahi karta ? inner loop break ho jata hai
Matlab ye starting index i pe pattern match nahi hua



Agar inner loop complete ho gaya bina break ke, matlab j == m
Matlab pattern completely match ho gaya
Return karo starting index i



example:- 
n = 5, m = 3
Outer loop i = 0 -> s[0] != p[0] -> break
i = 1 -> s[1] != p[0] -> break
i = 2 -> s[2] == p[0], s[3] == p[1], s[4] == p[2] -> return 2










*/




