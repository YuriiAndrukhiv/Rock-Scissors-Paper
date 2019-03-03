#include <iostream>
#include <string>
#include <stdlib.h>     /* srand, rand */ 
#include <time.h>       /* time */

int main()
{
  std::cout << "Enter Rock, Scissors or Paper: ";
  std::string myChoice;
  std::cin >> myChoice;
  std::string variantsOfChoice [3] = {"Rock", "Scissors", "Paper"};
  srand (time(0));
  std::string computerChoice = variantsOfChoice[rand() % 3];
  std::cout << "Computer choice: ";
  std::cout << computerChoice << std::endl;
	
  if(myChoice == computerChoice)
  {
    std::cout << "Nobody won or lost" << std::endl;
  }
  else  
  {
    if((myChoice == "Rock" && computerChoice == "Scissors") ||
     (myChoice == "Paper" && computerChoice == "Rock") || 
     (myChoice == "Scissors" && computerChoice == "Paper"))
    {
      std::cout << "You win!" << std::endl;
    }
    else
    {
      std::cout << "Looser!" << std::endl;
    }
  }
}


