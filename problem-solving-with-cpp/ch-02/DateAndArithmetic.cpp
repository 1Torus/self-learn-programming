// Problem Solving with C++ - Walter Savitch
// Chapters 1-2 (for self-learning)

// Maksym Neyra-Nesterenko

// Chapter 2.3 - Self-Test Exercises - #18, #20
#include <iostream>
#include <string>

int main()
{
  int x, y;
  std::string day = "4/", month = "9/", year = "17.";

  // Question #18
  std::cout << "Please enter an integer: ";
  std::cin >> y;
  std::cout << "Now enter an integer to divide the above by: ";
  std::cin >> x;
  std::cout << y << " divided by " << x << " is " << y / x << std::endl;
  std::cout << " with remainder " << y % x;

  // Question #20
  std::cout << "\n\n\nAlso the date when I made this is " << month + day + year;

  return 0;
}
