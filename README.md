# FILE MANAGEMENT TOOL

COMPANY : CODTECH IT SOLUTION

NAME : RAHISH KUMAR

INTERN ID : CT04DF599

DOMAIN :  C++ PROGRAMMING

DURATION : 4 WEEKS

MENTOR : NEELA SANTHOSH

Task Overview:
🔧 Introduction
The File Management Tool is a C++ application developed as part of an internship assignment. The goal of this task is to demonstrate core programming concepts by working with files — a vital aspect of many real-world software systems. This tool performs basic file operations such as writing, reading, and appending data in a text file.

🎯 Objective
This task aims to:

Build a simple command-line interface for managing file content.

Develop proficiency in file handling using C++.

Simulate real-world file operations like logging and data entry.

Enhance logical thinking and modular coding practices.

🧰 Technologies Used
Programming Language: C++

Compiler: g++

Development Environment: Visual Studio Code

Libraries Used:

#include <iostream>

#include <fstream>

#include <string>

🧠 Core Features
1. Write to File
This operation allows the user to input new data, which replaces all existing content in the file. The file is opened in write mode using ofstream. This is suitable when old data is no longer needed.

2. Append to File
In this mode, the user can add new data to the end of the file without deleting the existing content. The file is opened in append mode using ofstream with ios::app flag.

3. Read from File
This feature displays the entire content of the file on the screen. It uses ifstream and reads the file line-by-line, helping the user review what has already been stored.

4. Exit
Ends the program execution cleanly.

🛠 How It Works
Once the program runs, it presents a simple menu interface. The user selects a number corresponding to the operation they want to perform. The program then processes their request using file stream classes (ifstream, ofstream, or fstream), handles errors gracefully, and returns to the menu for further operations.

📋 Sample Output
mathematica
Copy
Edit
File Management Menu:
1. Write to file
2. Append to file
3. Read from file
4. Exit
Enter your choice: 2
Enter data to append to the file: Internship task completed.
Data appended successfully.
📘 Learning Experience
This project has strengthened my understanding of:

File stream operations in C++

Managing user input/output in console-based applications

Structuring code for clarity and maintainability

Real-world use cases of file I/O (logs, notes, data storage)

The task also illustrated how file-based systems, though simple, are widely used for storing configuration data, creating logs, or backing up records when databases aren't necessary.

🚀 Conclusion
The File Management Tool is a lightweight yet effective demonstration of fundamental file handling operations in C++. By completing this project, I gained hands-on experience in writing modular, interactive code while dealing with external file systems. This exercise lays a strong foundation for more complex systems such as file compression tools, report generators, and basic databases.

OUTPUT-
![Image](https://github.com/user-attachments/assets/ea9bcac3-ce7f-4bff-b91c-797580c04f1f)
