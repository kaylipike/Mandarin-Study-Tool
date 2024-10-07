//
// Created by Kayli Pike on 10/6/24.
//

#ifndef M2OEP_KNPIKE_WORD_H
#define M2OEP_KNPIKE_WORD_H

#include "Flashcard.h"

class Word : public Flashcard {
private:
    std::string pinyin;
    std::string meaning;

public:
    Word(const std::string& character, const std::string& pinyin, const std::string& meaning);
    void practice(); // Implement how to practice with this word
};

#endif //M2OEP_KNPIKE_WORD_H
