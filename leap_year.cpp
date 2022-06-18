#include <iostream>

int main() {
  int year;
  std::cout<<"Enter any year\n";
  std::cin>>year;
  if (year >999 && year<=9999){
    
  if (year%4!=0 ){
  std::cout<<"Not a Leap year\n";
  }
  else if (year%4==0 && year%100!=0){
  std::cout<<"Leap year\n";
  }
  else if (year%4==0 && year%100==0 && year%400==0){
    std::cout<<"Leap year\n";
  }
  else if (year%4==0 && year%100==0 && year%400!=0){
    std::cout<<"Not a Leap year\n";
  }
  }
  else{
  std::cout<<"Invalid entry\n";
  }
  
}