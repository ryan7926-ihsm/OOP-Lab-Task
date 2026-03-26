#include <iostream>
#include <cstring>
using namespace std;

int countRepeatedLetters(char* word);  

int main() {
    char* inputStr = new char[100];
    cout << "Enter a String: ";
    cin.getline(inputStr, 100);
	char* maxWord = nullptr;
    int maxRepeats = 0;
	char* word = strtok(inputStr, " ");     // Step 2: Split into words
    while (word != nullptr) {
        int repeats = countRepeatedLetters(word);
        if (repeats > maxRepeats)
		 {
            maxRepeats = repeats;
            maxWord = word;
		 }
        word = strtok(nullptr, " ");
    }
   if (maxWord != nullptr) {     // Step 3: Show result
        cout << "\n\n\tWord with tshe highest number of repeated letters: " << maxWord << endl;
    } else {
        cout << "No words found." << endl; }
	delete[] inputStr;
	return 0;
}


int countRepeatedLetters(char* word) {
    int freq[26] = {0}; // There are 26 letters
    int repeatedCount = 0;
	for (int i = 0; word[i]; i++) {
        char ch = tolower(word[i]); // convert to lowercase
        if (isalpha(ch)) {
            freq[ch - 'a']++; // map 'a' ? 0, 'b' ? 1, ..., 'z' ? 25
			   }   }
			   
	for (int i = 0; i < 26; i++) {
        if (freq[i] > 1) {
            repeatedCount += freq[i]; // add total occurrences of repeated letters
        }  }
	return repeatedCount;
}
