#include <iostream>

int main() {
  //Declare variables
  double pesos, reais, soles, dollars;
  
  //Input currencies
  std::cout << "Enter number of Colombian Pesos: ";
  std::cin>> pesos;
  
  std::cout << "Enter number of Brazilian Reais: ";
  std::cin>> reais;

  std::cout << "Enter number of Peruvian Soles: ";
  std::cin>> soles;

  //1 Mexican Peso equals 0.049 dollars
  double pesos_rate = 0.049;
  //1 Brazilian Real equals 0.19 dollars
  double reais_rate =0.19;
  //1 Peruvian Sole equals 0.27 dollars
  double soles_rate = 0.27;
  dollars = (pesos_rate*pesos) + (reais_rate*reais) + (soles_rate*soles);

  std::cout << "US Dollars = $"<< dollars <<"\n";
}