//
// Created by Kayli Pike on 10/6/24.
//

// FileHandler.cpp
#include "FileHandler.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include "Word.h"
#include "Sentence.h"

std::string trim(const std::string& s) {
    auto start = s.find_first_not_of(" \t");
    auto end = s.find_last_not_of(" \t");
    if (start == std::string::npos) return "";
    return s.substr(start, end - start + 1);
}

void loadFlashcards(const std::string& filename, std::vector<Flashcard*>& flashcards) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return;
    }

    std::string line;
    while (std::getline(file, line)) {
        if (line.empty()) continue;

        std::vector<std::string> parts;
        std::stringstream ss(line);
        std::string part;

        while (std::getline(ss, part, '|')) {
            parts.push_back(trim(part));
        }

        if (parts.size() != 5) {
            std::cerr << "Invalid line format: " << line << std::endl;
            continue;
        }

        std::string chineseChar = parts[0];
        std::string pinyin = parts[1];
        std::string meaning = parts[2];
        std::string sentenceChinese = parts[3];
        std::string sentenceEnglish = parts[4];

        flashcards.push_back(new Word(chineseChar, pinyin, meaning));
        flashcards.push_back(new Sentence(sentenceChinese, sentenceEnglish));
    }
}