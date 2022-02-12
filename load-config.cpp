#include <iostream>
#include <fstream>
#include <algorithm>

int main()
{
	// std::ifstream is RAII, i.e. no need to call close
	std::ifstream cFile("cnf/ex1.cnf");
	if (cFile.is_open())
	{
		std::string line;
		while (getline(cFile, line))
		{
			line.erase(std::remove_if(line.begin(), line.end(), isspace), line.end());
			if (line.empty() || line[0] == '#')
			{
				continue;
			}
			auto delimiterPos = line.find("=");
			auto name = line.substr(0, delimiterPos);
			auto value = line.substr(delimiterPos + 1);
			std::cout << name << " " << value << '\n';
		}
	}
	else
	{
		std::cerr << "Couldn't open config file for reading.\n";
	}
}
/*
cnf/ex1.cnf
#ddd
test = 1
aaa= 2
*/
