/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 19:06:07 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/04 20:37:25 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <exception>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;	
		bool				_signed;
		const int			_sign;
		const int			_execute;
	protected:
		void	setSigned(bool);
	public:
		AForm();
		AForm(const std::string &, int sign, int execute);
		AForm(const AForm &);
		AForm	&operator=(const AForm &);
		virtual ~AForm();
		
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
		class FormNotSigned : public std::exception
		{
			public:
				const char	*what() const throw();
		};

		virtual	void	toExecute(const Bureaucrat & t) const;
		bool	beSigned(const Bureaucrat &);
		void	execute(Bureaucrat const & executor) const;
};

std::ostream	&operator<<(std::ostream &, const AForm &);


#endif