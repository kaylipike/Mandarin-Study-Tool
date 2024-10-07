//
// Created by Kayli Pike on 10/6/24.
//

#ifndef M2OEP_KNPIKE_FLASHCARD_H
#define M2OEP_KNPIKE_FLASHCARD_H


#include <string>
#include <iostream>

class Flashcard {
protected:
    std::string character; // Protected so derived classes can access it
    std::string pinyin;
    std::string meaning;
    std::string sentenceMandarin;
    std::string sentenceEnglish;

public:
    // Constructor for basic flashcard without sentences
    Flashcard(const std::string& character, const std::string& pinyin, const std::string& meaning);

    // Constructor for full flashcard with sentences
    Flashcard(const std::string& character, const std::string& pinyin, const std::string& meaning,
              const std::string& sentenceMandarin, const std::string& sentenceEnglish);

    // Virtual practice function
    virtual void practice() const;

    // Display functions
    virtual void displayCharacterPinyin() const;
    virtual void displayCharacterMeaning() const;
    virtual void displayFullReview() const;

    virtual ~Flashcard() {} // Virtual destructor for polymorphism
};

#endif //M2OEP_KNPIKE_FLASHCARD_H
