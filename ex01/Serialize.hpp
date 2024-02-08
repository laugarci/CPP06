/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:06:23 by laugarci          #+#    #+#             */
/*   Updated: 2024/02/08 19:10:21 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <iostream>

#include <cstdint>

typedef struct	s_Data
{
	char	c;
	int		i;
	int		*ptr;
}				Data;

class Serialize {
private:
	
public:
	Serialize();
	~Serialize();
	Serialize(const Serialize& other);
	Serialize& operator=(const Serialize& other);
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};

#endif
