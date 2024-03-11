#include "Span.hpp"

int main()
{
    try
    {
        Span sp = Span(20);
        std::vector<int> v;
        v.push_back(11);
        v.push_back(12);
        v.push_back(13);
        v.push_back(14);
        v.push_back(100);
        v.push_back(80);
        v.push_back(24);
        v.push_back(15);
        v.push_back(102);
        v.push_back(1100);
        v.push_back(119);
        v.push_back(180);
        v.push_back(101);
        sp.addRange(v.begin(), v.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "exception found " << e.what() << '\n';
    }
    return 0;
}