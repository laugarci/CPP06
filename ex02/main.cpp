/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 18:04:09 by laugarci          #+#    #+#             */
/*   Updated: 2024/02/18 19:49:51 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base *generate(void)
{
	Base *base = NULL;
	int i = rand() % 3;
	if (i == 0)
	{
		base = new A;
		return (base);
	}
	else if (i == 1)
	{
		base = new B;
		return (base);
	}
	else if (i == 2)
	{
		base = new C;
		return (base);
	}
	return (base);
}

void	identify(Base *p)
{
	std::cout << "Type of object: ";
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
	delete p;
}

void	identify(Base& p)
{
	try {
		A& a = dynamic_cast<A&>(p);
		std::cout << "A: success" << std::endl;
		(void)a;
		delete &p;
		return ;
	} catch (...) {
		std::cout << "Error: A: impossible to cast." << std::endl;
	}

	try {
		B& b = dynamic_cast<B&>(p);
		std::cout << "B: success" << std::endl;
		(void)b;
		delete &p;
		return ;
	} catch (...) {
		std::cout << "Error: B: impossible to cast." << std::endl;
	}

	try {
		C& c = dynamic_cast<C&>(p);
		std::cout << "C: success" << std::endl;
		(void)c;
		delete &p;
		return ;
	} catch (...) {
		std::cout << "Error: C: impossible to cast." << std::endl;
	}
}

int main()
{
	identify(generate());
	identify(generate());
	identify(generate());
	identify(generate());
	identify(*generate());
	identify(*generate());
	identify(*generate());
	identify(*generate());
	identify(*generate());
}
