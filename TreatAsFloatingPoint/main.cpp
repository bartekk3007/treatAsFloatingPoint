#include <iostream>
#include <chrono>

int main()
{
	std::chrono::system_clock::rep systemClockRep{};
	std::cout << systemClockRep << '\n';
	bool result = std::chrono::treat_as_floating_point
		<std::chrono::duration<std::intmax_t, std::chrono::milliseconds::period>::rep>::value;

	std::cout << std::boolalpha << result << '\n';

	return 0;
}