#ifndef FILE_OPS_H
#define FILE_OPS_H

#include <iosfwd>

template<typename T>
class File_ops {
public:
    virtual void save(const std::ostream &f_out) = 0;
    virtual T load(const std::istream &f_in) = 0;
};

#endif // FILE_OPS_H
