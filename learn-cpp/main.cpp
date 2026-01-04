#include<print>

void foo(int& x) {
	std::println(stderr, "foo(int& x) {}", x);
}
void foo(int&& x) {
	std::println(stderr, "foo(int&& x) {}", x);

}

template<typename T>
void foo_wrapper(T&& x) {
	std::println(stderr, "foo_wrapper(T&& x)");
	foo(std::forward<T>(x));
}

int main() {
	std::println("hideous");

	int i{};

	foo(i);
	foo(std::move(i));

	foo_wrapper(i);
	foo_wrapper(std::move(i));
	foo_wrapper(1);
}
