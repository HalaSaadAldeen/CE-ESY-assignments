# CE-ESY-assignments
## Assignment 1: Circular Buffer Implementation

Overview:
This project is an implementation of a Circular Buffer using the C programming language.

Features:
1-Manual Logic: Built from scratch without using high-level data structures or external libraries.
2-State Management: Tracks head, tail, and count to manage the buffer's state accurately.
3-Edge Case Handling: Includes robust checks for Buffer Overflow and Buffer Underflow 
4-Circular Navigation: Uses the modulo operator ( % ) to ensure pointers wrap around the array boundaries seamlessly.

Core Functions:
init(): Initializes the buffer pointers and counter to zero.
write(): Adds a character to the buffer; returns an error if the buffer is full.
read(): Removes and returns a character from the buffer; returns an error if the buffer is empty.
isFull() / isEmpty(): Utility functions to verify the buffer's current capacity.

How the Program Works:
1. Input: The program prompts the user to enter their name via standard input.
2. Processing: It appends the required suffix  (CE-ESY) to the input name.
3. Storage: Each character of the resulting string is written into the Circular Buffer.
4. Output: The program reads the data back from the buffer and prints it to the screen, verifying that the buffer is empty at the end.

How to Run:
To compile and run the program you can use any c compiler.
