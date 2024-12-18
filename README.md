# 2048 Game in C++ - README

## Overview

2048 is a single-player sliding puzzle game where the player aims to combine like-numbered tiles to reach the 2048 tile. The player can move tiles in four directions (up, down, left, and right), and when two tiles with the same number collide, they combine into one. The game ends when the player reaches the 2048 tile or when no more moves are possible.

This repository contains a C++ implementation of the 2048 game for terminal-based play.

## Table of Contents

1. [Game Overview](#overview)
2. [Installation](#installation)
3. [Gameplay](#gameplay)
4. [Controls](#controls)
5. [Features](#features)
6. [How to Play](#how-to-play)
7. [Licenses and Credits](#licenses-and-credits)

## Installation

### Prerequisites

- C++ Compiler (e.g., g++, clang++)
- CMake (optional, for building the project)

### Steps to Build

1. **Clone the repository:**

   ```
   git clone https://github.com/your-username/2048-cpp.git
   ```

2. **Navigate to the project directory:**

   ```
   cd 2048-cpp
   ```

3. **Compile the game:**

   If you're using g++ or clang++, you can compile the game with:

   ```
   g++ main.cpp -o 2048
   ```

4. **Run the game:**

   After compiling, you can run the game with:

   ```
   ./2048
   ```

Alternatively, if you are using CMake, you can build the project by following these steps:

- Create a `build` directory and navigate into it:
  ```
  mkdir build
  cd build
  ```
- Run CMake to configure the project:
  ```
  cmake ..
  ```
- Build the game:
  ```
  make
  ```
- After building, run the game:
  ```
  ./2048
  ```

## Gameplay

- **Objective**: The goal of 2048 is to combine tiles with the same number to eventually create a tile with the value 2048.
- **Game Board**: The board is a 4x4 grid where each cell can either be empty or hold a number.
- **Starting Condition**: The game starts with two tiles, each with the value of 2, randomly placed on the board.
- **Tile Movement**: You can move the tiles in any of the four directions: up, down, left, or right.
- **Tile Merging**: When two tiles of the same value collide, they combine to form a new tile with double the value.

## Controls

- **W**: Move tiles Up
- **S**: Move tiles Down
- **A**: Move tiles Left
- **D**: Move tiles Right
- **Q**: Quit the game

When a valid move is made, a new tile with the value of 2 will randomly appear on the board.

## Features

- 4x4 grid layout.
- Smooth tile merging and movement.
- Random tile spawning.
- Display of the current score.
- Game over detection when no valid moves remain.
- Restart option after game over.
- Simple terminal-based user interface.

## How to Play

1. **Start the game** by running the program with `./2048` in the terminal.
2. **Use the arrow keys** or `W`, `A`, `S`, `D` keys to move the tiles.
3. **Combine tiles** of the same number by moving them towards each other. For example, two tiles with the number `2` will combine to form a `4` tile.
4. **Goal**: Combine tiles until you create the 2048 tile.
5. **Game Over**: The game ends when no valid moves remain, and you can restart the game after that.
6. **Quit the game** at any time by pressing `Q`.

## Sample Game Loop

```
+-----+-----+-----+-----+
|  2  |     |     |     |
+-----+-----+-----+-----+
|     |  4  |     |     |
+-----+-----+-----+-----+
|     |     |  8  |     |
+-----+-----+-----+-----+
|     |     |     | 16  |
+-----+-----+-----+-----+
Score: 32
Press 'W' to move Up, 'S' to move Down, 'A' to move Left, 'D' to move Right.
Press 'Q' to quit.
```

## Licenses and Credits

- **License**: MIT License (or choose another license you prefer)
- **Creator**: Your Name or Username
- **Acknowledgments**: 
  - [2048 Game](https://github.com/gabrielecirulli/2048) for the inspiration behind the game mechanics.
  - [OpenAI ChatGPT](https://openai.com/) for assisting in creating this README.

