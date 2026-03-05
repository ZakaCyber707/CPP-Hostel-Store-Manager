C++ Hostel Store Manager


📊 Logic Overview
This project demonstrates an interactive store interface using selection structures:
Menu Display: A formatted UI presents item options (Juice, Coffee, Tea) and their respective keys.
Case-Insensitive Input: The toupper() function is applied to the user's choice, allowing the system to accept both lowercase and uppercase letters (e.g., 'j' or 'J').

Selection Logic: A switch statement routes the program flow to specific item blocks based on the user's selection.
Error Handling: A default case is implemented to catch and notify the user of invalid menu choices.



🛠️ Features
Formatted UI: Uses tab escapes (\t) to create a centered, professional console interface.
Input Robustness: Prevents logic errors by normalizing user input to uppercase before processing.



🚀 Execution & Environment Guide
To run this project, follow the instructions below:
1. Recommended IDEs (Integrated Development Environments)
Dev-C++
Visual Studio Code
Online Compilers


2. Simple Execution Procedure
(Step 1): Setup the Project
Create a file named Hostel_Store_System.cpp.
Copy and paste the provided source code into the editor.

(Step 2): Compile the Code
In Dev-C++: Press F11 to Compile and Run the application.
In Terminal: Execute g++ Hostel_Store_System.cpp -o StoreSystem followed by ./StoreSystem.

(Step 3): Test the Output
Enter different item codes (J, C, T) in both upper and lower case to verify the logic and observe the confirmation messages.
