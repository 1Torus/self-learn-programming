// Problem Solving with C++ - Walter Savitch
// Chapters 1-2 (for self learning)

// Maksym Neyra-Nesterenko

// Chapter 1 - Programming Projects - #5
#include <iostream>

int main()
{
  char c;

  std::cout << "Enter a letter to use with drawing a 'C': ";
  std::cin >> c;

  std::cout << std::endl;
  std::cout << "  " << c << " " << c << " " << c << "\n";
  std::cout << " " << c << "     " << c << "\n";
  std::cout << c << "\n";
  std::cout << c << "\n";
  std::cout << c << "\n";
  std::cout << c << "\n";
  std::cout << c << "\n";
  std::cout << " " << c << "     " << c << std::endl;
  std::cout << "  " << c << " " << c << " " << c << std::endl;

  return 0;
}
