/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:08:56 by laugarci          #+#    #+#             */
/*   Updated: 2024/02/22 14:38:38 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data data;
    data.value = 42;

    std::cout << "Original Data value: " << data.value << std::endl;
    uintptr_t serialized_ptr = Serializer::serialize(&data);
	std::cout << "Serialized pointer value: " << serialized_ptr << std::endl;
	Data* deserialized_ptr = Serializer::deserialize(serialized_ptr);
	std::cout << "Deserialized Data value: " << deserialized_ptr->value << std::endl;
    if (deserialized_ptr == &data)
        std::cout << "Deserialized pointer points to the original Data object." << std::endl;
	else
        std::cout << "Deserialization failed." << std::endl;	
	return 0;
}

