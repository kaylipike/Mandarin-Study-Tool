//
// Created by Kayli Pike on 10/6/24.
//

// FileHandler.cpp
#include "FileHandler.h"
#include <fstream>
#include <sstream>
#include <iostream>

void loadFlashcards(const std::string& filename, std::vector<Flashcard>& flashcards) {
    std::ifstream file(filename);
    std::string line;

    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string character, pinyin, meaning, sentenceMandarin, sentenceEnglish;

        // Assuming your file format is:
        // character pinyin meaning
        // sentenceMandarin|sentenceEnglish
        iss >> character >> pinyin >> meaning;
        std::getline(file, line); // Get the sentence line
        std::istringstream sentenceStream(line);
        std::getline(sentenceStream, sentenceMandarin, '|'); // Assuming sentences are separated by '|'
        std::getline(sentenceStream, sentenceEnglish);

        // Assuming Flashcard has a constructor that takes these arguments
        flashcards.emplace_back(character, pinyin, meaning, sentenceMandarin, sentenceEnglish);
    }
}
