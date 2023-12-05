#include "a.h"
#include "b.h"

void a::setB(b* ggg)
{
    std::cout << "A::setB(b)" << std::endl;
    B = ggg;
}

void a::Actie1(int n)
{
    for (int i = 0; i <= n; ++i) {
        if (i % 2 == 0) {
            B->Even();
        }
        else {
            B->odd();
        }
    }
}
