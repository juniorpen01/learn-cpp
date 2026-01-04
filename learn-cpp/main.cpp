#include<iostream>
#include<tuple>

template<typename...Args>
auto add(Args... args) {
	return (args + ...);
}

template<typename...Args>
void print(Args... args) {
	(std::cout << ... << args);
}

int main() {
	std::cout << "Hello world\n";
	auto foo{ std::make_unique<int>(2) };
	add(1, 2, 3);
	add(3.0);
	std::tuple<int, int> bar{ 1,2 };
	print(1, 2,"foo");
}

