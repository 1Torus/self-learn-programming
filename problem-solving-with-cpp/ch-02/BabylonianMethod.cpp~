// Problem Solving with C++ - Walter Savitch
// Chapters 1-2 (for self-learning)

// Maksym Neyra-Nesterenko

// Chapter 2 - Practice Programs - #2

#include <iostream>

int main()
{
  double r, initial_guess, x, y, z;
  const double TOL = 0.00000001; // Tolerance of 10e-8

  std::cout << "Enter a positive real number to estimate its square root: ";
  std::cin >> r;
  initial_guess = r / 2;
  y = initial_guess;
  do
    {
      x = y;
      y = (x + (r / x)) / 2;
    } while ((y-x)/y > TOL || (x-y)/y > TOL);

  std::cout << "The square root of " << r << " is approximately " << y << std::endl;
  return 0;
}
