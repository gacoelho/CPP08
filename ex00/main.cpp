#include "easyfind.hpp"
#include <algorithm>

int main(int argc, char **argv)
{
    if(argc != 2)
        return 1;
    int arr[] = {1 ,2, 4, 16, 32, 64, 128};

    std::vector< int > vect( arr, arr + sizeof( arr ) / sizeof( int ));
    std::list< int > list( arr, arr + sizeof( arr ) / sizeof( int ));

    easyfind( vect, std::atoi(argv[1]));
    easyfind( list, std::atoi((argv[1])));
    return 0;
}