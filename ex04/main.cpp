/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mneri <mneri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 13:30:08 by mneri             #+#    #+#             */
/*   Updated: 2023/09/28 15:35:01 by mneri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>


std::string	ft_replace(std::string line, std::string s1, std::string s2)
{
	size_t pos = 0;

	while((pos = line.find(s1, pos)) != std::string::npos)
	{
		line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
		pos += s2.length();
	}
	return line;
}


int main(int argc, char **argv)
{

	if(argc != 4)
		return 0;
	std::string s1 = argv[2];	
	std::string s2 = argv[3];	
	std::ifstream infile;
	std::ofstream outfile;
	std::string line;
	infile.open(argv[1]);
	if(infile.fail())
		std::cout << "failed to open infile.";
	outfile.open((std::string(argv[1]) + ".replace").c_str());
	if(outfile.fail())
		std::cout << "failed to open outfile";
	while(std::getline(infile, line))
	{
		line = ft_replace(line, s1, s2);
		outfile << line << std::endl;
	}
	infile.close();
	outfile.close();
	return 0;
}