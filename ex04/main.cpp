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
	int length1 = s1.size();
	std::size_t pos;
	while (std::getline(rFile, line)) 
	{ 
		while((pos = line.find(s1)) != std::string::npos)
		{
			line.erase(pos, length1);
			line.insert(pos, s2);
		}
		wFile << line;
		if(!rFile.eof())
			wFile << "\n";
	}
    rFile.close();
	wFile.close();
    return 0;
}
