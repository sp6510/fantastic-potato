#include "inout.h"
#include <algorithm>

int main() {
    std::vector<int> vec;
    read(vec);
    std::sort(vec.begin(), vec.end());
    print(vec);
    system("pause");
    return 0;
}