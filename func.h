#ifndef FUNC_H_
#define FUNC_H_

#include <iostream>

template<typename T>
struct Result {
    T    mx,  mn;
    int imx, imn;
};

template<typename T>
Result<T> extr(T* items, int len) {
    if (len < 1) {
        std::cerr << "Array is empty\n";
        exit(1);
    }
    Result<T> res;
    res.mx  = items[0]; res.mn  = items[0];
    res.imx = 0;        res.imn = 0;
    for (int i = 1; i < len; ++i) {
        if (res.mx < items[i]) { res.mx = items[i]; res.imx = i; }
        if (res.mn > items[i]) { res.mn = items[i]; res.imn = i; }
    }
    return res;
}

#endif