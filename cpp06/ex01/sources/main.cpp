/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp" //NOLINT

int main(void) {
    Data *data = new Data;
    data->alpha = 42;
    data->beta = "Hello World";

    uintptr_t dataSerialized = serialize(data);
    Data *dataDeserialized = deserialize(dataSerialized);

    std::cout << "Data alpha: " << dataDeserialized->alpha << std::endl;
    std::cout << "Data beta: " << dataDeserialized->beta << std::endl;
    if (dataDeserialized->alpha == data->alpha && dataDeserialized->beta \
    == data->beta) {
        std::cout << "Data deserialized is the same as data serialized" \
        << std::endl;
    } else {
        std::cout << "Data deserialized is not the same as data serialized" \
        << std::endl;
    }
    delete data;

    return (0);
}
