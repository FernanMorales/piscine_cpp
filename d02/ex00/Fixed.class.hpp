/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmorales <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 15:06:44 by fmorales          #+#    #+#             */
/*   Updated: 2015/11/05 15:06:45 by fmorales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

class Fixed
{
public:
	Fixed(void);
	Fixed(Fixed const & src);
	~Fixed(void);

	Fixed &				operator=(Fixed const & rhs);
	int					getRawBits(void) const;
	void				setRawBits(int const raw);

private:
	int					_fixedValue;
	static const int	_fractBits;
};

#endif