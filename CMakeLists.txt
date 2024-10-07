cmake_minimum_required(VERSION 3.8)
project(M2OEP-knpike)

set(CMAKE_CXX_STANDARD 14)

add_executable(MandarinStudyTool
        Flashcard.cpp
        Word.cpp
        Sentence.cpp
        main.cpp
        FileHandler.cpp
        Flashcard.h
        FileHandler.h
        Word.h
        Sentence.h
)
