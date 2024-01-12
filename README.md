# Program Description

This C program provides a simple command-line interface to simulate two actions related to computer system upgrades: installing more RAM and upgrading storage. The user is prompted to choose between the two options by entering either '1' or '2'.

# Features

Install More RAM (bo function):
Simulates an infinite loop (while(1)) using the fork() system call, which creates child processes repeatedly. This is intended to humorously mimic the idea of continuously installing more RAM.
Upgrade Storage (storage function):
Creates two sub-folders within a folder named "New_folder." The sub-folders are named "New_folder_1" and "New_folder_2." The program displays success messages if the folders are created successfully, or an error message if the creation fails.

# Handling User Input

The program checks for valid user input, prompting the user to enter '1' or '2.' If the input is invalid (e.g., a string or character), the user is informed of the error and prompted to enter a valid number.
Educational Purposes

This program is designed for educational purposes to demonstrate basic concepts in C programming, including user input validation, decision-making with a switch statement, and system calls for process creation and directory creation.

Note: The infinite loop (bo function) and the continuous forking may not be practical in a real-world scenario and are included here for educational and illustrative purposes.

