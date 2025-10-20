//
// Created by Kayli Pike on 10/6/24.
//

#include <string>
#include <iostream>
#include "Word.h"

Word::Word(const std::string& chinese, const std::string& pinyin, const std::string& meaning)
        : Flashcard(), chinese(chinese), pinyin(pinyin), meaning(meaning) {}

std::string Word::getChinese() const {
    return chinese;
}

std::string Word::getPinyin() const {
    return pinyin;
}

std::string Word::getMeaning() const {
    return meaning;
}
