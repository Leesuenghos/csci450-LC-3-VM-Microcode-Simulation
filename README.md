# CSCI 450 - LC-3 VM & Microcode Simulation

This repository contains my solutions and implementation for **Problem Set / Assignment: LC-3 Virtual Machine and Microcode Simulation** from the CSCI 450 (Computer Architecture / Systems Programming) course.

## 📚 Description

The assignment involved building a simulation of the LC-3 architecture, including:

- Implementing a virtual machine capable of interpreting LC-3 assembly instructions.
- Simulating microcode-level execution, memory access, and ALU behavior.
- Testing instruction decoding, memory reads/writes, and condition codes.

## 🛠️ Key Features

- ✅ Full LC-3 instruction set support (ADD, AND, BR, JMP, JSR, LD, ST, etc.)
- 🧠 Microcode simulation engine
- 💾 Memory-mapped I/O
- 🧪 Built-in test cases and sample `.obj` files

## 📁 Project Structure

├── include/ # Header files
├── src/ # Source code (C / C++)
├── simfiles/ # Simulation input files
├── scripts/ # Helper scripts
├── config/ # Configuration files (e.g., microcode tables)
├── doc/ # Documentation and diagrams
├── .vscode/ # Editor settings
├── Makefile # Compilation rules
└── README.md # This file