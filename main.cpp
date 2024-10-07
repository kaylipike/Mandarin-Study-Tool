//
// Created by Kayli Pike on 10/6/24.
//
#include <iostream>
#include <vector>
#include "FileHandler.h" // Include your file handling class if you have one
#include "Word.h"       // Include your Word class
#include "Sentence.h"   // Include your Sentence class

int main() {
    std::vector<Flashcard> flashcards; // Vector to store flashcard pointers
    loadFlashcards("mandarin_vocab.txt", flashcards); // Load from your vocabulary file

    int choice;
    do {
        std::cout << "Choose a practice option:\n";
        std::cout << "1. Character-Pinyin Practice\n";
        std::cout << "2. Character-Meaning Practice\n";
        std::cout << "3. Full Review\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                // Character-Pinyin Practice
                for (Flashcard card : flashcards) {
                    // Dynamic cast to Word to access pinyin
                    if (Word* word = dynamic_cast<Word>(card)) {
                        word->practice(); // Call the practice method
                    }
                }
                break;

            case 2:
                // Character-Meaning Practice
                for (Flashcard* card : flashcards) {
                    // Dynamic cast to Word to access meaning
                    if (Word* word = dynamic_cast<Word*>(card)) {
                        word->practice(); // Call the practice method
                    }
                }
                break;

            case 3:
                // Full Review
                for (Flashcard* card : flashcards) {
                    card->practice(); // Call the practice method for both Word and Sentence
                }
                break;

            case 4:
                std::cout << "Exiting...\n";
                break;

            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }

        std::cout << std::endl; // Add a new line for readability
    } while (choice != 4);

    // Cleanup
    for (Flashcard* card : flashcards) {
        delete card; // Free memory allocated for flashcards
    }

    return 0;
}
