//
// Created by Kayli Pike on 10/6/24.
//

#ifndef M2OEP_KNPIKE_SENTENCE_H
#define M2OEP_KNPIKE_SENTENCE_H

#include "Flashcard.h"

class Sentence : public Flashcard {
private:
    std::string chinese;
    std::string english;

public:
    // Constructor
    Sentence(const std::string& chinese, const std::string& english);

    // Getters
    std::string getChinese() const;
    std::string getEnglish() const;

    virtual ~Sentence() {}
};

#endif //M2OEP_KNPIKE_SENTENCE_H
