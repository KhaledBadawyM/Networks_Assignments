#include <iostream>
#include <string>

bool is_number(const std::string& s);

int main(int argc, char* argv[])
{

	if (argc < 2 || argc > 2)
	{
		std::cout << "One argument exactly is required. No less, no more\n";
		exit(1);
	}

	std::string arg = std::string(argv[1]);
	if (!is_number(arg))
	{
		std::cout << "This argument must be numeric\n";
		exit(1);
	}

	int index = stoi(arg) - 1; // -1 because the counting starts from 0 not 1

	if (index < 1 || index > message.size())
	{
		std::cout << "This argument must be ranging from 1 to " << message.size() <<"\n";
		exit(1);
	}

	std::string message, polynomial;
	getline(std::cin, message);
	getline(std::cin, polynomial);

	if (message[index] == '0')
		message[index] = '1';
	else
		message[index] = '0';

	std::cout << message << std::endl;
	std::cout << polynomial << std::endl;

	return 0;
}

bool is_number(const std::string& s)
{
	std::string::const_iterator it = s.begin();
	while (it != s.end() && isdigit(*it)) ++it;
	return !s.empty() && it == s.end();
}