class Solution {
public:
    bool isPalindrome(string s) {
        string modifiedString;

        // Convert to lowercase and remove non-alphanumeric characters
        // Alpha numeric : space (" "), ? / all special character
        for (auto c : s) {
            if (isalnum(c)) {
                modifiedString += tolower(c);
            }
        }

        // Check if the modified string is a palindrome
        int left = 0;
        int right = modifiedString.length() - 1;
        while (left < right) {
            if (modifiedString[left++] != modifiedString[right--]) {
                return false;
            }
        }

        return true;
    }
};