/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:25:21 by laugarci          #+#    #+#             */
/*   Updated: 2024/02/08 12:24:00 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main()
{
//	if (ac > 1)
//		ScalarConverter::convert(av[1]);
	ScalarConverter::convert("a");
	std::cout << "-----" << std::endl;
	ScalarConverter::convert("10.5f");
}
