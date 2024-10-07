//
// Created by Kayli Pike on 10/6/24.
//

#ifndef M2OEP_KNPIKE_SENTENCE_H
#define M2OEP_KNPIKE_SENTENCE_H

#include "Flashcard.h"

class Sentence : public Flashcard {
private:
    std::string englishSentence;

public:
    Sentence(const std::string& chineseSentence, const std::string& englishSentence);
    void practice(); // Implement how to practice with this sentence
};

#endif //M2OEP_KNPIKE_SENTENCE_H
