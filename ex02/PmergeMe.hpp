/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 06:07:12 by bkaztaou          #+#    #+#             */
/*   Updated: 2024/08/05 09:19:00 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
#include <stdexcept>
#include <climits>


class PmergeMe {
private:
    std::vector<int> _v;
    std::deque<int> _d;
public:
    PmergeMe();
    PmergeMe(const PmergeMe &src);
    PmergeMe &operator=(const PmergeMe &src);
    ~PmergeMe();

    void parseArgs(int ac, char **av);

    void mergeSort(std::vector<int> arr, int l, int r);
    void merge(std::vector<int> arr, int l, int m, int r);
    
};

#endif