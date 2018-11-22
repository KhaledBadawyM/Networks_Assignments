#include <iostream>
#include <string>
#include <stdc++.h>
#include <algorithm>


std::string binary_subtract(const std::string & b1, const std::string & b2);

bool is_greater_than_binary(const std::string& b1, const std::string& b2);
std::string format_binary(const std::string& b1, size_t length);

int main()
{
	std::string message, G_ploynomial;
	int i = 5;
	std::cout << std::stoi("14");
	int s = itob()

	// read frome standard input the message and polynomial
	getline(std::cin, message);
	getline(std::cin, G_ploynomial);



	std::cout << binary_subtract("11010", "10011") << "\n";


	return 0;
}


std::string binary_division(const std::string& message, const std::string& ploynomial)
{
	std::string transmitted_frame;



	return transmitted_frame;
}

std::string binary_subtract(const std::string& b1, const std::string& b2)
{
	std::string b1_cpy, b2_cpy;
	size_t length = std::max(b1.size(), b2.size());

	b1_cpy = format_binary(b1, length);
	b2_cpy = format_binary(b2, length);

	std::string result(b1_cpy);

	for (size_t i = 0; i < length; i++)
	{
		if (b1[i] == b2[i])
			result[i] = '0';
		else
			result[i] = '1';
	}
	
	
	return result;
}

std::string binary_multiply(const std::string& b1, const std::string& b2)
{
	std::string result;



	return result;
}

bool is_greater_than_binary(const std::string& b1, const std::string& b2)
{
	int b1_int = std::stoi(b1, nullptr, 2);
	int b2_int = std::stoi(b2, nullptr, 2);

	return (b1_int > b2_int);
}

std::string format_binary(const std::string& b, size_t length)
{
	std::string result = b;
	for (size_t i = b.size(); i < length; i++)
		result = "0" + result;

	return result;
	
}

std::string append_zeros_low_order(const std::string& b, size_t r)
{
	std::string result = b;
	for (size_t i = 0; i < r; i++)
		result = result + "0";

	return result;
}