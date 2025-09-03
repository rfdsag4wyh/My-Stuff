// TODO(me): please fill in below.
// Ricardo Najera Blanco
// CPSC-121L
// September 1st, 2025
// rn4j3r4bl4nc0@scu.fullerton.edu
// rfdsag4wyh

#include <iomanip>
#include <iostream>

int main() {
  // TODO(me): Create a program that computes the restaurant bill.
  double mealCost = 0.0;
  double tipPercentage = 0.0;
  const double kTaxRate = 0.075;
  std::cout << "Please Input Meal Cost: ";
  std::cin >> mealCost;
  std::cout << "Please Input Tip Percentage: ";
  std::cin >> tipPercentage;
  std::cout << "\nRestaurant Bill\n";
  std::cout << "====================\n";
  std::cout << "Subtotal: $" << mealCost << std::endl;
  double taxes = mealCost * kTaxRate;
  std::cout << "Taxes: $" << taxes << std::endl;
  return 0;
}