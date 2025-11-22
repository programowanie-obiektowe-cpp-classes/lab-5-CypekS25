#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > result;
    result.resize(people.size());

    std::size_t i = people.size();

    for (auto it = people.begin(); it != people.end(); ++it) {
        it->birthday();

        i = i - 1;

        if (it->isMonster())
            result[i] = 'n';
        else
            result[i] = 'y';
    }

    return result;
}
