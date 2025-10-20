# Mandarin Study Tool – Flashcard Program

## Overview
This C++ project is an interactive study tool for Mandarin Chinese. It helps users learn some of the vocabulary and sentence structures from *3rd Year College Chinese* by John Jing-hua Yin and Diana Yiqing Sun. The program uses an object-oriented design to provide flashcards for words and sentences with multiple study modes.

---

## Key Features

- **Vocabulary Flashcards**: Chinese characters, pinyin, and English meaning.  
- **Sentence Flashcards**: Mandarin sentences with English translations.  
- **Custom Study Modes**: Review by Chinese character, English meaning, or pinyin.  
- **Interactive Console Interface**: Press Enter to reveal answers.  
- **Scalable & Extensible**: Easily add more words, sentences, or grammar exercises.

---

## Technical Highlights

- **Language & Tools**: C++, CLion, macOS  
- **OOP Concepts**: Polymorphism with a `Flashcard` base class and `Word`/`Sentence` derived classes.  
- **Dynamic Memory Management**: Flashcards stored as pointers with proper cleanup.  
- **File I/O & Parsing**: Reads structured text files and handles different delimiters.  
- **User Experience**: Smooth, step-by-step interactive study flow.

---

## Installation & Usage

1. **Clone the repository**
```bash
   
git clone https://github.com/kaylipike/MandarinStudyTool.git

cd MandarinStudyTool
```

2. **Build the project**
   
The project uses CMake for cross-platform compilation:
```bash

mkdir build

cd build

cmake ..

make
```

3. **Run the program**
```bash
   
./MandarinStudyTool
```

Follow the on-screen prompts to select a study mode.

Press Enter to reveal answers and translations.

Note: Ensure the mandarin_vocab.txt file is in the working directory when running the program.

---

## Technical Details
Language: C++
Development Environment: CLion, macOS
Key Concepts Demonstrated:
  - Object-Oriented Programming (inheritance, polymorphism)
  - Dynamic memory management (new/delete)
  - File I/O and string parsing
  - User input handling and interactive console applications

---

## Future Work
  - Add flashcard shuffling and spaced repetition algorithms to improve learning efficiency.
  - Include grammar-focused exercises and example sentences.
  - Expand vocabulary datasets and support multiple textbooks or levels.
  - Transition to a graphical user interface for enhanced usability.

---

## Why This Project Matters
This program demonstrates the ability to design and implement a practical, real-world tool using C++ fundamentals. It reflects careful object-oriented design for maintainability and scalability, practical data processing skills (parsing structured text files, and attention to user experience, even in a console-based program. This project is an excellent example of applying programming skills to solve educational challenges, making it both technically impressive and personally meaningful.

---

## Contact

For questions, feedback, or collaboration inquiries, please contact:
**Email:** [knpike@uvm.edu](mailto:knpike@uvm.edu)

---

**© 2025 Kayli Pike**
