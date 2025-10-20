//
// Created by Kayli Pike on 10/6/24.
//

#ifndef M2OEP_KNPIKE_WORD_H
#define M2OEP_KNPIKE_WORD_H

#include "Flashcard.h"
#include <string>

class Word : public Flashcard {
private:
    std::string chinese;
    std::string pinyin;
    std::string meaning;

public:
    Word(const std::string& chinese, const std::string& pinyin, const std::string& meaning);

    std::string getChinese() const;
    std::string getPinyin() const;
    std::string getMeaning() const;

    virtual ~Word() {}
};

#endif //M2OEP_KNPIKE_WORD_H
