//
// Created by Kayli Pike on 10/6/24.
//

#include "Flashcard.h"

// Constructor for basic flashcard without sentences
Flashcard::Flashcard(const std::string& character, const std::string& pinyin, const std::string& meaning)
        : character(character), pinyin(pinyin), meaning(meaning) {}

// Constructor for full flashcard with sentences
Flashcard::Flashcard(const std::string& character, const std::string& pinyin, const std::string& meaning,
                     const std::string& sentenceMandarin, const std::string& sentenceEnglish)
        : character(character), pinyin(pinyin), meaning(meaning),
          sentenceMandarin(sentenceMandarin), sentenceEnglish(sentenceEnglish) {}

// Practice function
void Flashcard::practice() const {
    std::cout << "Character: " << character << std::endl;
    std::cout << "Pinyin: " << pinyin << std::endl;
    std::cout << "Meaning: " << meaning << std::endl;
}

// Display function for character and pinyin
void Flashcard::displayCharacterPinyin() const {
    std::cout << "Character: " << character << ", Pinyin: " << pinyin << std::endl;
}

// Display function for character and meaning
void Flashcard::displayCharacterMeaning() const {
    std::cout << "Character: " << character << ", Meaning: " << meaning << std::endl;
}

// Display function for full review, including sentences
void Flashcard::displayFullReview() const {
    std::cout << "Character: " << character << std::endl;
    std::cout << "Pinyin: " << pinyin << std::endl;
    std::cout << "Meaning: " << meaning << std::endl;
    if (!sentenceMandarin.empty() && !sentenceEnglish.empty()) {
        std::cout << "Example Sentence (Mandarin): " << sentenceMandarin << std::endl;
        std::cout << "Example Sentence (English): " << sentenceEnglish << std::endl;
    }
}