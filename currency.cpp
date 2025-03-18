#include <iostream>

int main() {
  int pesos;
  int reais;
  int soles;
  int dollars;
  std::cout << "Enter number of Colombian Pesos:\n";
  std::cin >> pesos;
  std::cout << "Enter number of Brazilian Reais\n:
";
  std::cin >> reais;
  std::cout << "Enter number of Peruvian Soles\n:
";
  std::cin >> soles;

  //peso conversion rate 0.049
  //reais conversion rate 0.17
  //soles conversion rate 0.26

dollars = (0.049*pesos + 0.17*reais + 0.26*soles);
std::cout << "US Dollars = $ " << dollars;
}