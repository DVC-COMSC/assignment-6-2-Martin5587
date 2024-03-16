//

#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int getRandom(void);
int getClosestMed(int, int, int);

// complete two functions
int getRandom(void)
{
        static bool srand_called = false;

        if (!srand_called) {
        srand(time(nullptr));
        srand_called = true;
        }
        return rand() % 100;
}

int getClosestMed(int rdnum1, int rdnum2, int rdnum3)

{
        int mean = static_cast<double>(rdnum1 + rdnum2 + rdnum3) / 3;

        int diff1 = abs(rdnum1 - mean);
        int diff2 = abs(rdnum2 - mean);
        int diff3 = abs(rdnum3 - mean);

        int minDiff = min(diff1, min(diff2, diff3));

        if (diff1 == minDiff) {
                return rdnum1;
        } else if (diff2 == minDiff) {
                return rdnum2;
        } else {
                return rdnum3;
        }
}