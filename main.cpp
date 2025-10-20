//
// Created by Kayli Pike on 10/6/24.
//

#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include "Flashcard.h"
#include "Word.h"
#include "Sentence.h"
#include "FileHandler.h"


int main() {
    std::vector<Flashcard*> flashcards;
    loadFlashcards("../mandarin_vocab.txt", flashcards);

    std::cout << "Choose study mode:\n";
    std::cout << "1. Study by Chinese character\n";
    std::cout << "2. Study by English meaning\n";
    std::cout << "3. Study by pinyin\n";
    int choice;
    std::cin >> choice;

    std::cout << "\nStarting flashcards...\n\n";

    for (Flashcard* card : flashcards) {
        Word* word = dynamic_cast<Word*>(card);
        Sentence* sentence = dynamic_cast<Sentence*>(card);

        if (word) {
            std::string question;
            std::string answer;

            switch (choice) {
                case 1: // Chinese character
                    question = word->getChinese();
                    answer = word->getMeaning() + " (" + word->getPinyin() + ")";
                    break;
                case 2: // English meaning
                    question = word->getMeaning();
                    answer = word->getChinese() + " (" + word->getPinyin() + ")";
                    break;
                case 3: // Pinyin
                    question = word->getPinyin();
                    answer = word->getChinese() + " - " + word->getMeaning();
                    break;
                default:
                    question = word->getChinese();
                    answer = word->getMeaning() + " (" + word->getPinyin() + ")";
            }

            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            std::cout << question << "\nPress enter to see the answer...";
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin.get();
            std::cout << answer << std::endl;

        } else if (sentence) {
            // Show sentence in Chinese first
            std::cout << "Sentence: " << sentence->getChinese() << "\nPress enter to see the English translation...";
            std::cin.ignore();
            std::cin.get();
            std::cout << "Translation: " << sentence->getEnglish() << "\n" << std::endl;
        }
    }

    // Clean up memory
    for (Flashcard* card : flashcards) {
        delete card;
    }
    flashcards.clear();

    std::cout << "All flashcards completed!" << std::endl;

    return 0;
}
