#include <iostream>
#include <thread>
#include <chrono>


int main() {
	std::cout << "Program started!" << std::endl;
	std::this_thread::sleep_for(std::chrono::seconds(5));
	std::cout << "5 seconds past" << std::endl;
	return 0;
}

