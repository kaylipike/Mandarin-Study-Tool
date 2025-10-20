cmake_minimum_required(VERSION 3.8)
project(Mandarin-Flashcards)

set(CMAKE_CXX_STANDARD 14)

add_executable(MandarinStudyTool
        Word.cpp
        Sentence.cpp
        main.cpp
        FileHandler.cpp
        Flashcard.h
        FileHandler.h
        Word.h
        Sentence.h
)
