#include<iostream>
#include<string>
#include <fstream>

int main(int ac, char *av[]) 
{
	if (ac != 4) 
	{
		std::cout << "I need a filename and two strings to work \n";
		return 1;
	}
	std::string file = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	if(s1.empty())
		return 0;

	std::ifstream rFile(av[1]);
	if(rFile.good() == false)
	{
		std::cout << "Error opening " << file << "\n";
		return 1;
	}

	std::size_t pospoint = file.rfind(".");
	std::string filename = file;
	if(pospoint == std::string::npos || pospoint == 0)
		pospoint = file.size();
	filename.insert(pospoint, ".replace");

	std::ofstream wFile(filename.c_str());
	if(wFile.good() == false)
	{
		std::cout << "Error opening " << filename << "\n";
		return 1;
	}

	std::string line;
	while (std::getline(rFile, line)) 
	{ 
		std::size_t pos = 0;
		while((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		wFile << line;
		if(!rFile.eof())
			wFile << "\n";
	}
    rFile.close();
	wFile.close();
    return 0;
}
