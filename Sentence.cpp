//
// Created by Kayli Pike on 10/6/24.
//

#include "Sentence.h"

Sentence::Sentence(const std::string& chinese, const std::string& english)
        : Flashcard(), chinese(chinese), english(english) {}

std::string Sentence::getChinese() const {
    return chinese;
}

std::string Sentence::getEnglish() const {
    return english;
}