The Big Book of C++
Volume I — The Foundations
Preface

"Programming is not the art of writing code. It is the art of solving problems."

Welcome.

If you're reading these lines, it means you've decided to learn one of the most powerful programming languages ever created: C++.

Many people believe that C++ is difficult.

In reality, the language itself isn't what makes it difficult.

It's the way it's often taught.

Most courses look like this:

int age = 18;

Then they simply say:

A variable stores a value.

And that's the end of the explanation.

But...

Why?

Why an int?

Why 18?

Why a semicolon (;)?

How does the computer understand this line?

Why does a program work?

Very few books actually answer these questions.

This book was written to do exactly the opposite.

Here, you'll learn why before you learn how.

By the end of this book, you won't just know how to write C++ code.

You'll also understand:

How a computer works.
How a processor executes your code.
How memory is organized.
Why certain errors occur.
How to think like a software developer.

We'll build this knowledge step by step.

Without skipping important concepts.

Without copying code you don't understand.

Our motto will be:

"Never copy a line of code that you don't understand."

Welcome.

The adventure begins now.

Chapter 1
Before Writing Your First Line of Code

Close your eyes for a moment.

Imagine I hand you a blank sheet of paper.

Then I ask you:

Write a program.

Most beginners freeze.

Why?

Because they think a program is something mysterious.

In reality...

A program is nothing more than a list of instructions.

Let's use a simple example.

Imagine a cooking recipe.

Crack two eggs.
Add flour.
Mix everything together.
Bake for 30 minutes.

A recipe is simply a list of actions.

A computer program works exactly the same way.

Display "Hello".
Read a number.
Add 5 to it.
Display the result.

The idea is exactly the same.

The only difference is that the cook is replaced by...

The processor.

What Is a Computer?

When people think about a computer, they often imagine a mysterious black box.

In reality, a computer is made of several components working together.

The four main ones are:

             +----------------+
             |      CPU       |
             |   Processor    |
             +-------+--------+
                     |
                     |
+----------+---------+---------+----------+
|          |                   |          |
|    RAM (Memory)         Storage        |
|                      SSD / HDD         |
|                                       |
+-------------------+-------------------+
                    |
                    |
             Monitor / Keyboard

Each component has a specific role.

Throughout this book, you'll learn how every one of them works.

Today, we'll focus on the most important one:

The CPU.

The Processor (CPU)

Imagine a person who only knows how to do one thing.

Read an instruction.

Execute it.

Read the next instruction.

Execute it.

Again.

Again.

Again.

Billions of times every second.

That's exactly what a processor does.

It doesn't think.

It doesn't guess.

It doesn't understand what you want to do.

It only follows the instructions it's given.

Its job can be summarized like this:

Read an instruction

        ↓

Execute it

        ↓

Move to the next instruction

        ↓

Repeat

Billions of times every second.

The CPU does not understand words like:

int

if

while

std::cout

Those words are designed for humans.

The processor only understands machine language, a sequence of numbers and bits.

That's why we need a compiler.

We'll discover exactly how that works in the next chapter.

💡 Key Takeaways
A program is a sequence of instructions.
The processor executes instructions one by one.
The CPU does not understand C++.
It only understands machine code.
📝 Exercise 1

Without writing a single line of C++, answer the following questions:

What is a program?
What is the role of the processor?
Why can't the CPU execute a .cpp file directly?
What is the difference between a cooking recipe and a computer program?

Write your answers in your own words.

The goal isn't to memorize the lesson, but to make sure you've truly understood the concepts.
