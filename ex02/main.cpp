/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 06:06:01 by bkaztaou          #+#    #+#             */
/*   Updated: 2024/08/05 06:48:34 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av) {
    try {
        PmergeMe p;

        p.parseArgs(ac, av);
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}