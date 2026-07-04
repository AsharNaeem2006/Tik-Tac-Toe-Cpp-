# 🎮 Tic Tac Toe (C++)

A simple **Object-Oriented Programming (OOP)** based Tic Tac Toe game developed in **C++**. This is a console-based two-player game where players take turns marking **X** and **O** on a 3×3 grid. The game automatically detects a winner or a draw.

---

## 📌 Features

* ✅ Two-player gameplay
* ✅ Object-Oriented Programming (Classes & Objects)
* ✅ Interactive console interface
* ✅ Automatic win detection
* ✅ Draw detection
* ✅ Input validation for occupied positions
* ✅ Simple and beginner-friendly code

---

## 🛠 Technologies Used

* C++
* Standard Library (`iostream`)

---

## 📂 Project Structure

```text
TicTacToe/
│── main.cpp
│── README.md
```

---

## ▶️ How to Run

### Using g++

```bash
g++ main.cpp -o TicTacToe
./TicTacToe
```

### Using Visual Studio

1. Create a new C++ Console Project.
2. Replace the generated code with `main.cpp`.
3. Build and Run.

### Using Code::Blocks

1. Create a new Console Application.
2. Paste the code into `main.cpp`.
3. Compile and Run.

---

## 🎲 How to Play

* The game board contains positions **1–9**.

```text
 1 | 2 | 3
---|---|---
 4 | 5 | 6
---|---|---
 7 | 8 | 9
```

* Player **X** starts first.
* Enter the number corresponding to the position where you want to place your mark.
* Players alternate turns until:

  * A player gets three marks in a row (horizontal, vertical, or diagonal), or
  * All positions are filled, resulting in a draw.

---

## 🧠 OOP Concepts Used

* **Class**
* **Object**
* **Constructor**
* **Private Data Members**
* **Public Member Functions**
* **Encapsulation**

---

## 📸 Sample Gameplay

```text
 1 | 2 | 3
---|---|---
 4 | 5 | 6
---|---|---
 7 | 8 | 9

Player X, Enter position (1-9): 5

 1 | 2 | 3
---|---|---
 4 | X | 6
---|---|---
 7 | 8 | 9

Player O, Enter position (1-9): 1
```

---

## 🚀 Future Improvements

* Single-player mode (AI)
* Difficulty levels
* Scoreboard
* Restart game option
* Better input validation
* Colored console output

---

## 🤝 Contributing

Contributions, suggestions, and improvements are welcome. Feel free to fork this repository and submit a pull request.

---

## 📄 License

This project is open-source and available under the **MIT License**.

---

## ⭐ Support

If you found this project helpful, consider giving it a **⭐ Star** on GitHub!
