//
// Created by Owner on 5/3/2016.
//

#ifndef UCD_CSCI2312_PA5_IMPL_LESS_FUNCTOR_H
#define UCD_CSCI2312_PA5_IMPL_LESS_FUNCTOR_H



namespace CS2312
{

    template <class T> class less {
    public:
        bool operator() (const T& x, const T& y) const {return x<y;}
        typedef T first_argument_type;
        typedef T second_argument_type;
        typedef bool result_type;
    };




    template <>
    class less<const char *>
{ public:
    bool operator()(const char* x, const char* y) const { return *x < *y; }
};

template <>
class less<std::string>
{
public:
bool operator()(std::string x, std::string y) const { return x < y; }
};

}
#endif //UCD_CSCI2312_PA5_IMPL_LESS_FUNCTOR_H
