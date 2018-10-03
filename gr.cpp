#include <iostream>
#include <string>
#include<sstream>
// Include the library that will allow you to convert from string to integer
int a,b,c,d;

int main() {
  /*-------------------------------
  PART 1 - Reading multiple integers
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 1         =" << std::endl;
  std::cout <<              "=========================" << std::endl;
  
  // Ask the user for 3 integers as input
  // The user should enter all integers on the same line, pressing enter only once
std::cin>>a;
std::cin>>b;
std::cin>>c;





  // Multiply the three integers
d=a*b*c;




  // Output the result of the multiplication
std::cout<<"The answer is "<< d <<std::endl;


  /*-------------------------------
  PART 2 - Reading strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 2         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  // Ask the user for three strings and output a haiku poem
  // http://examples.yourdictionary.com/examples-of-haiku-poems.html

std::string lamp;
std::string window;
std::string flower;


std::cout<< "The name of lamp"<<std::endl;
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
std::getline(std::cin,lamp);

std::cout<< "The name of window"<<std::endl;
std::getline(std::cin,window);
std::cout<<" the name of flower "<<std::endl;
std::getline(std::cin,flower);
std::cout<<"          "<<std::endl;

std::cout<<" the "<<lamp<<" once out "<<std::endl;
std::cout<<" cool stars enter "<<std::endl;
std::cout<<" the "<<window<<"frame"<<std::endl;
std::cout<<flower<<" flower temple  "<<std::endl;










  /*-------------------------------
  PART 3 - Converting strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 3         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  std::string myNumber = "1234"; // Convert this string to an integer 
int myint;
std::stringstream (myNumber)>>myint;

  
  std::cout<<myint << " :is an integer"; //Insert the integer before the text of this output

  return 0;
}