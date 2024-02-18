/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:08:56 by laugarci          #+#    #+#             */
/*   Updated: 2024/02/18 17:34:18 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{

/*	Data data;

	data.value = 42;
	uintptr_t serializedPtr = Serializer::serialize(&data);
	Data* deserializedPtr = Serializer::deserialize(serializedPtr);
	(void)deserializedPtr;*/
	    Data data_instance;
    data_instance.value = 42; // Setting some value for demonstration

    // Print original value of Data object
    std::cout << "Original Data value: " << data_instance.value << std::endl;

    // Serialize the pointer to the Data object
    uintptr_t serialized_ptr = Serializer::serialize(&data_instance);

    // Print serialized pointer value
    std::cout << "Serialized pointer value: " << serialized_ptr << std::endl;

    // Deserialize the serialized pointer
    Data* deserialized_ptr = Serializer::deserialize(serialized_ptr);

    // Print deserialized Data value
    std::cout << "Deserialized Data value: " << deserialized_ptr->value << std::endl;

    // Check if deserialized pointer is equal to the original pointer
    if (deserialized_ptr == &data_instance) {
        std::cout << "Deserialized pointer points to the original Data object." << std::endl;
    } else {
        std::cout << "Deserialization failed. Deserialized pointer doesn't match the original Data object." << std::endl;
    }
	
	return 0;
}

