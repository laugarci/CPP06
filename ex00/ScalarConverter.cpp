/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 18:48:44 by laugarci          #+#    #+#             */
/*   Updated: 2024/02/22 10:21:36 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
	*this = other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter& other)
{
	return(*this);
	(void)other;
}

void	ScalarConverter::printAll(std::string toChar, float toFloat, double toDouble, int toInt)
{
	std::cout << "char: " << toChar << std::endl;
	if (toChar == "imposible") {
		std::cout << "int: imposible" << std::endl;
	} else {
		std::cout << "int: " << toInt << std::endl;
	}

	if (toChar == "imposible" && toFloat == 0) {
		std::cout << "float: imposible" << std::endl;
		std::cout << "double: imposible" << std::endl;
	} else {
		if (toChar != "imposible" && toFloat - static_cast<int>(toFloat) == 0) {
			std::cout << "float: " << toFloat << ".0f" << std::endl;
			std::cout << "double: " << toDouble << ".0" << std::endl;
		} else {
			std::cout << "float: " << toFloat << "f" << std::endl;
			std::cout << "double: " << toDouble << std::endl;
		}
	}
}

void	ScalarConverter::isChar(std::string toChar)
{
	std::cout << "char: " << toChar << std::endl;
	std::cout << "int: " << static_cast<int>(toChar[0]) << std::endl;
	std::cout << "float: " << static_cast<float>(toChar[0]) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(toChar[0]) << ".0" << std::endl;
}

void	ScalarConverter::convert(const std::string& literal)
{
	std::string special[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
	std::string toChar = "";
	int toInt = 0;
	float toFloat = 0;
	double toDouble = 0;

	if (literal.size() == 1 && std::isprint(literal[0]) && !std::isdigit(literal[0]))
	{
		toChar = literal[0];
		isChar(toChar);
		return ;
	}
	else
	{
		toInt = std::atoi(literal.c_str());
		if (literal[literal.length() - 1] == 'f')
		{
			toFloat = std::atof(literal.c_str());
			toDouble = static_cast<double>(toFloat);
		}
		else
		{
			toDouble = std::atof(literal.c_str());
			toFloat = static_cast<float>(toDouble);
		}
	}
	int i = 0;
	while (i < 6)
	{
		if (literal == special[i])
		{
			toChar = "imposible";
			break ;
		}
		i++;
	}

	if (toChar == "" && std::isprint(toInt))
	{
		toChar = "'";
		toChar += static_cast<char>(toInt);
		toChar += "'";
	}
	else if (toChar == "")
	{
		toChar = "Non displayable";
	}
	printAll(toChar, toFloat, toDouble, toInt);
}
