/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:06:23 by laugarci          #+#    #+#             */
/*   Updated: 2024/02/28 10:42:43 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <iostream>
#include <cstdint>

#define BOLD "\x1B[1m"
#define RESET "\x1B[0m"

struct Data {
    int value;
};

class Serializer {
	private:
		Serializer();
	public:
		~Serializer();
		Serializer(const Serializer& other);
		Serializer& operator=(const Serializer& other);
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif
