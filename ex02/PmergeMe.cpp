/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 06:08:20 by bkaztaou          #+#    #+#             */
/*   Updated: 2024/08/05 11:57:33 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &src) {
    *this = src;
}

PmergeMe & PmergeMe::operator=(const PmergeMe &src) {
    if (this != &src) {
        this->_v = src._v;
        this->_d = src._d;
    }
    return *this;
}


void    PmergeMe::parseArgs(int ac, char **av) {
    if (ac < 2)
        throw std::invalid_argument("Usage: ./PmergeMe [args]");
    
    std::vector<int> _nums;

    for (int i = 1; i < ac; i++) {
        std::string arg = av[i];
        if (arg.empty() || arg.find_first_not_of("0123456789") != std::string::npos)
            throw std::invalid_argument("Error: Invalid argument");
        int num = std::atoi(arg.c_str());
        if (num < 0 || num >= INT_MAX)
            throw std::invalid_argument("Error: Invalid argument");
        _nums.push_back(num);

        if (std::count(_nums.begin(), _nums.end(), num) > 1)
            throw std::invalid_argument("Error: Duplicate argument");
        
        this->_v = _nums;
        this->_d = std::deque<int>(_nums.begin(), _nums.end());
    }
}

void    PmergeMe::mergeSort(std::vector<int> arr, int l, int r) {
    
}

PmergeMe::~PmergeMe() {}

