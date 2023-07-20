// Start of the program
#include <iostream>
#include <fstream>

int main() {
    char filename[100]; // Create a character array to store the filename
    std::cout << "Enter a file name: ";
    std::cin >> filename;

    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Error: could not open file.\n";
        return 1;
    }

    int word_count = 0;
    char ch;
    bool in_word = false; // A flag to keep track of whether we're currently reading a word
    while (file.get(ch)) { // Read each character from the file one at a time
        if (ch == ' ' || ch == '\n' || ch == '\r' || ch == '\t') { // Check if the character is whitespace
            if (in_word) { // If we were previously reading a word, we've just reached the end of it
                word_count++; // Increment the word count
                in_word = false; // Set the flag to indicate that we're no longer reading a word
            }
        }
        else { // If the character is not whitespace
            in_word = true; // Set the flag to indicate that we're currently reading a word
        }
    }

    if (in_word) { // If the file doesn't end with whitespace, we need to increment the word count one last time
        word_count++;
    }

    std::cout << "The file contains " << word_count << " words.\n";
    return 0;
}

// End of the program