/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 20:37:51 by jmorneau          #+#    #+#             */
/*   Updated: 2023/04/24 21:15:50 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "../lib/mathLib/include/mathLib.hpp"

const vector2df gravity(0, 1);

class Point
{
private:
	double mass;
	vector2df Velocity;
	vector2df Force;
public:
	vector2df Cord;
	Point();
	Point(int32_t x, int32_t y);
	void update(void);
	Point(vector2df _cord);
	~Point();
};



#endif