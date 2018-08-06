#include <iostream>
#include <random>

int main()
{ 
	std::mt19937 rng;
	rng.seed(std::random_device()());

	std::uniform_int_distribution<std::mt19937::result_type> dist6(0,99);

	int random_num =  dist6(rng);
	// int random_num = 5;
	int guess;
	std::cout << "Please guess a number between 0 to 99" << std::endl;
	std::cin >> guess;

	int diff = guess - random_num;

	while(diff != 0){
		if(diff > 0){
			std::cout << "Please guess a smaller number" << std::endl;
			std::cin >> guess;
			diff = guess - random_num;
		}
		else{
			std::cout << "Please guess a bigger number" << std::endl;
			std::cin >> guess;
			diff = guess - random_num;
		}

	}
	
	std::cout << "You win!" << std::endl;

	return 0;
}