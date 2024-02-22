/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:25:21 by laugarci          #+#    #+#             */
/*   Updated: 2024/02/19 09:26:54 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	converterTest()
{
	ScalarConverter::convert("a");
	std::cout << "-----" << std::endl;
	ScalarConverter::convert("10.5f");
	std::cout << "-----" << std::endl;
	ScalarConverter::convert("10.5");
	std::cout << "-----" << std::endl;
	ScalarConverter::convert("-5");
	std::cout << "-----" << std::endl;
	ScalarConverter::convert("@");
	std::cout << "-----" << std::endl;
	ScalarConverter::convert("65");
}

int main(int ac, char **av)
{
	if (ac > 1)
		ScalarConverter::convert(av[1]);
	else
		converterTest();
	return (1);
}
