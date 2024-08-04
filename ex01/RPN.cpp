/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 02:47:07 by bkaztaou          #+#    #+#             */
/*   Updated: 2024/08/04 06:18:22 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN &src) {
    *this = src;
}

RPN & RPN::operator=(const RPN &src) {
    if (this != &src)
        _stack = src._stack;
    return *this;
}

bool   isValidInput(const std::string &str) {
    std::string::const_iterator it = str.begin();
    while (it != str.end()) {
        if (*it == ' ')
            it++;
        if (!std::isdigit(*it) && *it != '+' && *it != '-' && *it != '*' && *it != '/')
            return false;
        it++;
    }
    return true;
}

void    RPN::fillStack(const std::string &str) {
    if (!isValidInput(str))
        throw std::invalid_argument("Error");
    
    std::string input(str);
    std::reverse(input.begin(), input.end());

    std::string::const_iterator it = input.begin();
    while (it != input.end()) {
        if (*it == ' ')
            it++;
        if (isdigit(*it)) {
            int num = atoi(&(*it));
            if (num >= 10)
                throw std::invalid_argument("Error");
            _stack.push(num);
        }
        else {
            _stack.push(*it);
        }
        it++;
    }

}

void    RPN::calculate() {

    if (_stack.size() < 2)
        throw std::invalid_argument("Error");

    std::stack<int> tmp = _stack;

    while (tmp.size() > 0) {
        std::cout << tmp.top() << std::endl;
        tmp.pop();
    }
    
}

RPN::~RPN() {}