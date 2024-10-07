//
// Created by Kayli Pike on 10/6/24.
//

#include <string>
#include <iostream>

class Flashcard {
protected:
    std::string character; // Protected so derived classes can access it
    std::string pinyin;
    std::string meaning;

public:
    // Constructor
    Flashcard(const std::string& character, const std::string& pinyin, const std::string& meaning)
            : character(character), pinyin(pinyin), meaning(meaning) {}

    // Virtual practice function
    virtual void practice() {
        std::cout << "Character: " << character << std::endl;
        std::cout << "Pinyin: " << pinyin << std::endl;
        std::cout << "Meaning: " << meaning << std::endl;
    }

    virtual ~Flashcard() {} // Virtual destructor for polymorphism
};
