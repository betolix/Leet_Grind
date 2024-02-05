class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> _mag;
        for(char c : magazine){
            if(_mag.find(c) != _mag.end()){
                int count = _mag[c] + 1;
                _mag[c] = count;
            } else{
                _mag.insert({c,1});
            }
        }
        for(char c: ransomNote){
            if(_mag.find(c) == _mag.end()) return false;
            int count = _mag[c];
            if(count == 0) return false;
            _mag[c] = count-1;
        }
        return true;
    }
};

int main() {
    
    Solution solution;
    
    
}


/*
383. Ransom Note
Solved
Easy
Topics
Companies
Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.

 

Example 1:

Input: ransomNote = "a", magazine = "b"
Output: false
Example 2:

Input: ransomNote = "aa", magazine = "ab"
Output: false
Example 3:

Input: ransomNote = "aa", magazine = "aab"
Output: true
 

Constraints:

1 <= ransomNote.length, magazine.length <= 105
ransomNote and magazine consist of lowercase English letters.


*/