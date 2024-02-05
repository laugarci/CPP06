/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 18:48:44 by laugarci          #+#    #+#             */
/*   Updated: 2024/02/05 15:40:28 by laugarci         ###   ########.fr       */
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
	//add info
	return(*this);
	(void)other;
}

void	ScalarConverter::convert(const std::string& str)
{
	std::cout << "hola" << std::endl;
	(void)str;
}
