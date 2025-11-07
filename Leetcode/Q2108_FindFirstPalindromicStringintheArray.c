#include <stdio.h>
#include <string.h>

char* firstPalindrome(char** words, int wordsSize) {
    for (int i = 0; i < wordsSize; i++) {
        int j = 0;
        int n = strlen(words[i]) - 1;
        int flag = 1; 
        
        while (j < n) {
            if (words[i][j] != words[i][n]) {
                flag = 0; // not a palindrome
                break;
            }
            j++;
            n--;
        }
        
        if (flag) {
            return words[i]; 
        }
    }
    return ""; // no palindrome found
}

int main() {
    // Example input
    char* words[] = {"abc", "car", "ada", "racecar", "cool"};
    int wordsSize = sizeof(words) / sizeof(words[0]);
    
    // Call the function
    char* result = firstPalindrome(words, wordsSize);
    
    // Print the result
    if (strlen(result) > 0)
        printf("First Palindrome: %s\n", result);
    else
        printf("No palindrome found.\n");
    
    return 0;
}
