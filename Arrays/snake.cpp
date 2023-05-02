#include <iostream>
#include <vector>

const int WINDOW_WIDTH = 20;
const int WINDOW_HEIGHT = 20;

// Represents a point on the game board
struct Point {
  int x;
  int y;
};

// Initializes the game board and the snake
void init(std::vector<Point>& snake, Point& food) {
  // Clear the game board
  for (int y = 0; y < WINDOW_HEIGHT; y++) {
    for (int x = 0; x < WINDOW_WIDTH; x++) {
      std::cout << ".";
    }
    std::cout << std::endl;
  }

  // Initialize the snake at the center of the board
  snake.push_back({WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2});

  // Generate a random location for the food
  food.x = rand() % WINDOW_WIDTH;
  food.y = rand() % WINDOW_HEIGHT;
}

// Updates the game board based on the current state of the snake and the food
// Updates the game board based on the current state of the snake and the food
void update(const std::vector<Point>& snake, const Point& food) {
  // Clear the game board
  for (int y = 0; y < WINDOW_HEIGHT; y++) {
    for (int x = 0; x < WINDOW_WIDTH; x++) {
      std::cout << ".";
    }
    std::cout << std::endl;
  }

  // Draw the snake and the food
  for (const Point& p : snake) {
    std::cout << "O";
  }
  std::cout << std::endl;
  std::cout << "X" << std::endl;
}

int main() {
  std::vector<Point> snake;
  Point food;
  init(snake, food);
  update(snake, food);
  return 0;
}
