// Problem Solving with C++ - Walter Savitch
// Chapters 1-2 (for self-learning)

// Maksym Neyra-Nesterenko

// Chapter 2 - Practice Programs - #1
#include <iostream>

int main()
{
  const double TON = 35273.92; // Number of ounces in 1 metric ton
  double weight;
  int box;

  bool session = true; // Program never terminates.

  while (session)
    {
      std::cout << "What is the weight of your breakfast cereal package in ounces?\n";
      std::cin >> weight;
      std::cout << "The package weights " << weight / TON << " metric tons.\n";
      box = (TON / weight) + 1;
      std::cout << "Furthermore, you need " << box << " boxes for a metric ton of cereal!\n";
      std::cout << std::endl;
    }
  return 0;
}
