# Editing Text App

A **simple and intuitive text editing application** that allows users to write, edit, and manage text efficiently. Built using the [Qt C++ Framework](https://www.qt.io/), this application provides essential text editing functionalities and is designed to be lightweight and user-friendly.

---

## Features
### Current Features:
- **Text Writing**: Create and edit text and paragraphs effortlessly.
- **Basic Editing Actions**:
  - Copy
  - Cut
  - Paste

### Upcoming Features:
🚧 **Under Development**
- Open an existing text file.  
- Save text to a file.
- Save As functionality for custom file names and formats.
- Print text directly from the application.
- Undo/Redo actions for efficient text management.
- Enhanced formatting tools (e.g., bold, italic, underline).
- Additional customization options for fonts and colors.

---

## Getting Started
To build and run this project, ensure you have:
1. Qt installed ([Download Qt](https://www.qt.io/download)).
2. A C++ compiler configured with Qt Creator.
3. Make all "Environment Variables" needed to build and run the app:
    1. Add the path to the bin directory of the compiler to PATH system variable to allow dynamic linking for the DLLs. <br />(e.g. ...QT\5.15.18\msvc2019_64\bin).
    2. In case of using CMake GUI (Optional): Add CMAKE_INSTALL_PREFIX variable in the system variable with path to the head compiler directory (e.g. ... QT\5.15.18\msvc2019_64).
4. Install the CMake Tools Extension in case of building using VS Code.

### Steps:
1. In case of using Visual Studio:
    1. Clone this repository.
    2. Open CMake GUI and generate the sln solution in a new empty build folder.
    3. Open the project in VS.
    4. Build and run the application.

2. In case of using VS Code:
    1. Clone this repository.
    2. Open the project in VS Code.
    3. Build and run the application using CMake Tool Extension Commands Palette (ctrl + shift + p) --> Run without Debugging.
---
## Status
This project is actively being developed. Current features are functional, and additional features are being added progressively.  
Future updates will focus on:
- Expanding editing capabilities.
- Adding file management and printing functionalities.
- Improving the overall user experience.
---
## Demo:
![image](https://github.com/user-attachments/assets/60c5dc6c-d5f9-4116-b7ee-2285255fcf38)
