/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 20:15:33 by jeremie           #+#    #+#             */
/*   Updated: 2025/05/27 20:19:33 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter() {}

ICharacter::ICharacter(const ICharacter& t) {};

ICharacter& ICharacter::operator=(const ICharacter& t) { return (*this); }

ICharacter::~ICharacter() {}
