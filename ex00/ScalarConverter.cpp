/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 18:48:44 by laugarci          #+#    #+#             */
/*   Updated: 2024/02/08 12:25:11 by laugarci         ###   ########.fr       */
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

void	ScalarConverter::isChar(std::string toChar)
{
	std::cout << "char: " << toChar << std::endl;
	std::cout << "int: " << static_cast<int>(toChar[0]) << std::endl;
	std::cout << "float: " << static_cast<float>(toChar[0]) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(toChar[0]) << ".0" << std::endl;
}

void	ScalarConverter::convert(const std::string& literal)
{
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
		//los numeros acabados en f se interpretan como un float y los que no como un double (por ejemplo 3.14 y 3.14f)
		if (literal[literal.length() - 1] == 'f')
		{
			//atof y atoi esperan una cadena de caracteres tipo c (puntero terminado en nulo)
			toFloat = std::atof(literal.c_str());
			toDouble = static_cast<double>(toFloat);
		}
		else
		{
			toDouble = std::atof(literal.c_str());
			toFloat = static_cast<float>(toDouble);
		}
	}
	std::cout << "int: " << toInt << std::endl;
	std::cout << "float: " << toFloat << ".0f" << std::endl; //si es float no imprimir 0f
	std::cout << "double: " << toDouble << ".0" << std::endl;
}
