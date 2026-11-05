# Bank-Management-System
Console-based Bank Management System developed in C++ using Object-Oriented Programming (OOP) principles.
# Bank Management System

A console-based **Bank Management System** developed in C++ using Object-Oriented Programming (OOP) principles. This project serves as an academic prototype created as part of the Object-Oriented Programming course at Chandigarh University.

## Features

- **Account Creation:** Initialize a customer account with a unique account number, customer name, and account type (Savings/Current).
- **Deposit Money:** Add valid positive funds to the account balance with immediate verification.
- **Withdraw Money:** Securely withdraw funds with built-in validation checks against insufficient balances and zero/negative amounts.
- **Account Details Display:** View comprehensive account information including account number, holder name, account type, and current balance formatted to two decimal places.
- **Encapsulation & Safety:** Internal data members are kept private to protect them from direct external modification, exposing operations strictly through controlled public member functions.

## Technologies Used

- **Language:** C++ (C++11 or later)
- **Paradigm:** Object-Oriented Programming (OOP)
- **Interface:** Console / Command Line Interface (CLI)
- **Development Environment:** Visual Studio Code / GCC / MinGW

## Project Structure

```text
Bank-Management-System/
│
├── main.cpp          # Core C++ source code containing the Account class and menu loop
└── README.md         # Project documentation
