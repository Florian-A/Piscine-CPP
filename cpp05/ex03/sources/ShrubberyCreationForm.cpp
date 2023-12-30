/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp" //NOLINT

// Constructors
ShrubberyCreationForm::ShrubberyCreationForm(void) :
Form("ShrubberyCreationForm", 145, 137), _target("null") {
    std::cout << "ShrubberyCreationForm default constructor called" << \
    std::endl;
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) :
Form("ShrubberyCreationForm", 145, 137), _target("null") {
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
    this->_target = target;
    return;
}

// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm(void) {
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
    return;
}

// Copy constructor
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) \
: Form("ShrubberyCreationForm", 145, 137), _target(src._target) {
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
    return;
}

// Assignation operator
ShrubberyCreationForm &ShrubberyCreationForm::
operator=(const ShrubberyCreationForm &rhs) {
    std::cout << "ShrubberyCreationForm assignation operator called"\
     << std::endl;
    if (this == &rhs)
        return (*this);
    this->_target = rhs._target;
    if (rhs.isSigned() == 1)
        this->setSigned();
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    std::cout << executor.getName() << " executed " << this->getName() \
    << std::endl;
    if (!this->isSigned()) {
        throw Form::FormNotSignedException();
    }
    if (executor.getGrade() > this->getExecGrade()) {
        throw Form::GradeTooLowException();
    }
    std::string filename = this->_target + "_shrubbery";
    std::ofstream file(filename.c_str());
    if (!file.is_open()) {
        throw std::exception();
        return;
    }
    std::string tree[] = {
        "       *****                 ..         ", //NOLINT
        "    -=-=======-           :+=----       ", //NOLINT
        "   ---===+:-:--:          -------==-    ", //NOLINT
        "  +=====*-:-:--:+        =:----==---=   ", //NOLINT
        " *--====+==-===++=      =----+===-==+   ", //NOLINT
        " :+===++++===---=-      +----+++++==+:  ", //NOLINT
        "  =---+++--=*+==+-      +==-=++++++++.  ", //NOLINT
        "  *--==+*-==*++=*-     --+++=-----===+  ", //NOLINT
        "  *===+++===++=+*.   .=--=+=----------: ", //NOLINT
        "  -+===++*==+=+**    -----+=--==+++-=+: ", //NOLINT
        "   *+=+**+******-    -----===+-=-===*+  ", //NOLINT
        "     -:=::+.: -      ++=--=+++====.:+   ", //NOLINT
        "        .+            =**+-*++++++.     ", //NOLINT
        "         *              +  **+++*       ", //NOLINT
        "        =*                 ++*          ", //NOLINT
        "        =*                  **          ", //NOLINT
        "        =*                   *+:        ", //NOLINT
        "        =*                   ##*        ", //NOLINT
        "        =*                  ++#*        ", //NOLINT
    };
    for (int i = 0; i < 19; i++) {
        file << tree[i] << std::endl;
    }
    file.close();
}
