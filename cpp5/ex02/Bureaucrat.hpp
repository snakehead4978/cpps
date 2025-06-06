/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremie <jeremie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 17:38:28 by jeremie           #+#    #+#             */
/*   Updated: 2025/06/04 20:50:16 by jeremie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>
# include <AForm.hpp>

class AForm;

class Bureaucrat
{
	protected:
		const std::string _name;
		int	_grade;
	public:
		// Canonic
		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat &);
		Bureaucrat &operator=(const Bureaucrat &);
		~Bureaucrat();
		
		// Exceptions
		class GradeTooHighException : public std::exception
		{
			public:
				const char*what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char*what() const throw();
		};
		
		// Getters and -crements
		const	std::string &getName() const;
		int	getGrade() const;
		void	promote();
		void	demote();

		void	signForm(AForm &) const;
		void	executeForm(const AForm & form) const;
};
	
std::ostream &operator<<(std::ostream &, Bureaucrat const &);

#endif