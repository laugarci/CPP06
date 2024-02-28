/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:08:56 by laugarci          #+#    #+#             */
/*   Updated: 2024/02/28 10:07:58 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data data;
    data.value = 42;

    std::cout << BOLD "Original Data value: " RESET << data.value << std::endl;
    uintptr_t serialized = Serializer::serialize(&data);

	std::cout << BOLD "Serialized pointer value: " RESET << serialized << std::endl;
	Data* deserialized = Serializer::deserialize(serialized);
	std::cout << BOLD "Deserialized Data value: " RESET << deserialized->value << std::endl;

    if (deserialized== &data)
        std::cout << BOLD "Deserialized successfully" RESET << std::endl;
	else
        std::cout << BOLD "Deserialization failed." RESET << std::endl;	
	return 0;
}

