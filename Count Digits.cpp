class Solution {
  public:
    int countDigits(int n) {
        // code here
        
        int count=0;
        for(int i=0;i<=100;i++){
            while(n>0){
            /* Keep dividing the number by 10(which removes the last digit) 
        until it becomes 0, and count how many times you can do this.*/
            count++;
            n = n/10;
            }
        }
        return count;
        
        //yeh niche wala program galat h... but maine logic try kiya ..sikhna h kya galat kiya
        // for(int i=1;i<=10000;i++){
        //     n=n/10;
        //     while(n<=9);{
                
        //         return i+1;
        //     }
            
        // }
    }
};
