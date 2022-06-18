#include <iostream>

int main() {
  
  double w;
  int n;
  std::cout<<"Enter your weight on Earth\n";
  std::cin>>w;

  std::cout<<"Enter a number between 1 and 7 for the planet you want to fight on\n";
  std::cout<<"1 stands for Mercury\n";
  std::cout<<"2 stands for Venus\n";
  std::cout<<"3 stands for Mars\n";
  std::cout<<"4 stands for Jupiter\n";
  std::cout<<"5 stands for Saturn\n";
  std::cout<<"6 stands for Uranus\n";
  std::cout<<"7 stands for Neptune\n";

  std::cin>>n;
  
  
  
  switch(n) {
    
    case 1 :
      std::cout << "Your weight on Mercury will be: "<<w*0.38<<"\n";
      break;
    case 2 :
      std::cout << "Your weight on Venus will be: "<<w*0.91<<"\n";
      break;
    case 3 :
      std::cout << "Your weight on Mars be: "<<w*0.38<<"\n";
      break;
    case 4 :
      std::cout << "Your weight on Jupiter will be: "<<w*2.34<<"\n";
      break;
    case 5 :
      std::cout << "Your weight on Saturn will be: "<<w*1.06<<"\n";
      break;
    case 6 :
      std::cout << "Your weight on Uranus will be: "<<w*0.92<<"\n";
      break;
    case 7 :
      std::cout << "Your weight on Neptune will be: "<<w*1.19<<"\n";
      break;
    default :
      std::cout << "Invalid number\n";
      break;
  
  }
  
  
}