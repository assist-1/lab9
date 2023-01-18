#include <iostream>
#include "func.h"

const int LENGTH = 8;

template<typename T>
void printResult(Result<T> res) {
    std::cout << "max = " << res.mx << " in [" << res.imx <<"] index \t";
    std::cout << "min = " << res.mn << " in [" << res.imn <<"] index\n";
}

int main() {
    int   arr1[LENGTH] = {3, 2, 5, 9, 4, 6, 1, 8};
    float arr2[LENGTH] = {3.1f, 2.2f, 5.3f, 9.4f, 4.5f, 6.6f, 1.7f, 8.8f};

    Result<int>   res1; res1 = extr<int>  (arr1, LENGTH);
    Result<float> res2; res2 = extr<float>(arr2, LENGTH);

    printResult<int>  (res1);
    printResult<float>(res2);

    /**
     * OUTPUT:
     * 
     * max = 9 in [3] index    min = 1 in [6] index
     * max = 9.4 in [3] index  min = 1.7 in [6] index
     * 
    **/

    return 0;
}