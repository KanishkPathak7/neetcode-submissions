class Solution {
public:
    bool isAnagram(string s, string t) {
     // Checking the length of both arrays
       if(s.length()!=t.length()) return false;  
    
    // Creating new array of 26 size to keep track of characters
    vector<int>count(26,0);
    
    for(int i=0; i<s.length();i++){

       count[s[i]-'a']++; // Incresing character count for string s
       count[t[i]-'a']--; // Decreasing character count for string t
    }

    // Iterate through array if any value is non-zero return false

    for(int val: count){
        if(val!=0) return false;
    }
    return true;
    }
};
