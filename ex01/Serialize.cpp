/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:06:30 by laugarci          #+#    #+#             */
/*   Updated: 2024/02/08 19:17:08 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

Serialize::Serialize()
{
}

Serialize::~Serialize()
{
}

Serialize::Serialize(const Serialize& other)
{
	*this = other;
}

Serialize &Serialize::operator=(const Serialize& other)
{
	(void)other;
	return(*this);
}

uintptr_t	Serialize::serialize(Data *ptr)
{
	return (reinterpret_cast< uintptr_t >(ptr));
}

Data	*Serialize::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
