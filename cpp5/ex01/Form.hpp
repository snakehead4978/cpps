/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 19:06:07 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/04 20:05:03 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <exception>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;	
		bool				_signed;
		const int			_sign;
		const int			_execute;
	public:
		Form();
		Form(const std::string &, int sign, int execute);
		Form(const Form &);
		Form	&operator=(const Form &);
		~Form();
		
		const std::string	&getName() const;
		bool	getSigned() const;
		int	getSign() const;
		int	getExecute() const;

		class GradeTooHighException : public std::exception
		{
			public:
				const char	*what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			private:
				std::string _error;
			public:
				GradeTooLowException(int);
				~GradeTooLowException() throw();
				const char	*what() const throw();
		};

		bool	beSigned(const Bureaucrat &);
};

std::ostream	&operator<<(std::ostream &, const Form &);


#endif