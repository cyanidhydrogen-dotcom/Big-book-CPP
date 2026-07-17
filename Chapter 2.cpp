The Big Book of C++
Volume I — The Foundations
 Day 2
Part I — Understanding Your Computer Before Programming
Chapter 2
How a Computer Really Works

"A good developer doesn't just see code.

They see what the machine is doing."

1) Why Learn How a Computer Works?

Many beginners think:

"I want to learn C++, so why should I learn about processors or memory?"

The answer is simple.

C++ is a programming language that is very close to the hardware.

Unlike some languages that hide many implementation details, C++ gives you direct access to memory, performance, and concepts that are closely related to how a computer actually works.

Understanding your computer will help you:

Write faster and more efficient code.
Understand errors more easily.
Debug programs more effectively.
Better understand pointers and memory later in your learning journey.

It's an investment that will benefit you throughout your entire programming career.

2) What Happens When You Press "Run"?

Imagine you've written the following code:

#include <iostream>

int main()
{
    std::cout << "Hello";
}

You click:

▶ Run

What actually happens?

A lot more than you might think.

The process looks like this:

          You write your code

                  │

                  ▼

          main.cpp (text file)

                  │

                  ▼

             The Compiler

                  │

                  ▼

        Machine Code (.exe)

                  │

                  ▼

      Windows starts the program

                  │

                  ▼

          The CPU executes it

                  │

                  ▼

      The text appears on the screen

Many invisible steps take place behind the scenes.

We'll discover each one of them.

3) The .cpp File

When you write:

int age = 18;

You're simply creating...

...text.

Yes.

Your source file is nothing more than a text document.

It contains only characters:

i
n
t

a
g
e

=
1
8
;

The processor has absolutely no idea what this means.

To the CPU:

int

means nothing.

Your code must first be translated.

4) The Compiler

The compiler is a translator.

It reads your C++ code.

Then it converts it into machine language.

             C++

      int age = 18;

             │

             ▼

         Compiler

             │

             ▼

01010010
11101010
00010101
11000100
...

The result is a program that the processor can understand.

A compiler never tries to guess what you meant.

It follows a strict set of rules.

If you forget a semicolon:

int age = 18

the compiler stops immediately.

That's why compilation errors exist.

5) Machine Language

The processor understands only very simple instructions.

For example:

Load a value.
Add two numbers.
Compare two values.
Write data into memory.
Jump to another instruction.

At a slightly higher level, an instruction might look like:

MOV EAX, 18
ADD EAX, 5

Or, at an even lower level:

10110000
00010010

You'll almost never need to write this in C++, but knowing it exists helps you understand what your program is really doing.

6) The Processor (CPU)

Imagine a very disciplined employee.

They have a stack of papers.

Each paper contains one instruction.

Their job never changes:

Read

↓

Understand

↓

Execute

↓

Move to the next instruction

Again.

Again.

Again.

Billions of times every second.

The CPU doesn't know what a video game is.

It doesn't know what Minecraft is.

It doesn't even know what a variable is.

It only executes instructions.

7) RAM (Random Access Memory)

Imagine a huge wall filled with storage boxes.

Each box has an address.

Example:

Address	Value
0x1000	?
0x1004	?
0x1008	?
0x100C	?

When your program starts, Windows reserves a portion of RAM for it.

All of your variables will be stored there.

Later, when you write:

int score = 250;

the compiler and operating system work together to reserve enough memory to store that value.

We'll learn exactly how this works in the chapter about variables.

8) A Hard Drive Is Not Memory

This is a very common misconception.

An SSD (or hard drive) stores data permanently—even when the computer is turned off.

Examples include:

Your photos
Your games
Visual Studio
Windows itself

RAM, on the other hand, is temporary working memory.

When you turn off your computer:

Everything stored in RAM disappears.

That's why RAM is called volatile memory.

9) A Real Example

Let's say you launch Minecraft.

What happens?

The game files are read from the SSD.
Windows copies them into RAM.
The CPU executes the program's instructions.
The graphics card displays the images on your screen.

The SSD performs almost no calculations.

The CPU stores very little information.

Each hardware component has a specific job.

10) The Role of the Operating System

Your program doesn't communicate directly with the hardware.

Instead, it goes through the operating system.

Your Program

↓

Windows

↓

Drivers

↓

Hardware

For example, when you write:

std::cout << "Hello";

std::cout doesn't write directly to your monitor.

The C++ Standard Library asks the operating system for help.

The operating system then communicates with the appropriate drivers, which finally interact with the hardware.

💡 Key Takeaways
A .cpp file is simply a text file.
The compiler translates that text into machine language.
The CPU executes instructions one by one.
RAM stores data while a program is running.
The SSD permanently stores files.
Windows acts as an intermediary between your program and the hardware.
📝 Exercises
Exercise 1

Explain, in your own words, the difference between:

The processor (CPU)
RAM
The SSD
Exercise 2

Copy the compilation diagram below and explain the role of each step.

C++ Code

↓

Compiler

↓

Program

↓

CPU

↓

Screen
Exercise 3

Why is RAM called volatile memory?

Exercise 4

Imagine that compilers no longer existed.

Why couldn't a .cpp file be executed directly by the processor?

🚀 Mini Project

Draw (either on paper or using a text editor) the complete path of a program:

You

↓

Visual Studio

↓

Compiler

↓

Program

↓

Windows

↓

CPU

↓

RAM

↓

Screen

Write one sentence explaining the role of each step in the process.
