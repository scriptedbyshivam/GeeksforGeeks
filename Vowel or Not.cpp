class Solution {
  public:
    string isVowel(char c) {
        // code here
        // char c;
        if (c=='a'){
            return "YES";
        }
        else if(c=='e'){
            return "YES";
        }
        else if(c=='i'){
            return "YES";
        }
        else if(c=='o'){
            return "YES";
        }
        else if(c=='u'){
            return "YES";
        }
        
        else if (c=='A'){
            return "YES";
        }
        else if(c=='E'){
            return "YES";
        }
        else if(c=='I'){
            return "YES";
        }
        else if(c=='O'){
            return "YES";
        }
        else if(c=='U'){
            return "YES";
        }
        
        
        else{
            return "NO";
        }
        
        
    }
};




//ALternate answer way 


/*
class Solution {
  public:
    string isVowel(char c) {
        // code here
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        return "YES";
        else{
            return "NO";
        }
    }
}
*/
