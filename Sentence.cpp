//
// Created by Kayli Pike on 10/6/24.
//

#include "Sentence.h"

// Constructor
Sentence::Sentence(const std::string& chineseSentence, const std::string& englishSentence)
        : Flashcard(chineseSentence, "", "") { // Call base class constructor, adapt as needed
    this->englishSentence = englishSentence;
}

void Sentence::practice() {
    std::cout << "Chinese Sentence: " << character << std::endl;
    std::cout << "English Sentence: " << englishSentence << std::endl;
    // Additional practice logic for Sentence
}
