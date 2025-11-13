# 📚 get_next_line

## 🌟 About the Project

**`get_next_line`** is a function designed to **read a single line of text from a file descriptor** (`fd`) every time it is called, regardless of the line's length.

This project is a fundamental exercise in understanding file handling, file descriptors, and static variable management in C. It allows for the efficient processing of large or unknown-size text files, line by line.

### 🎯 Features

* **Sequential Reading:** Returns a complete line, terminated by a newline character (`\n`), or up to the `EOF` (`End-of-File`).
* **Memory Management:** Uses dynamic memory allocation (`malloc`) to handle lines of any length.
* **Customizable Buffer:** The size of the reading buffer (`BUFFER_SIZE`) can be defined at compile time.
* **Persistence:** Employs a **static** variable to remember unread data from the previous call on the same file descriptor.

---

## 🛠️ Installation and Usage

### Compiling

To compile the project with a main program (`main.c`), you must include the source files and define the `BUFFER_SIZE` macro.

```bash
# Compile with a BUFFER_SIZE of 42
cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c main.c -o gnl
