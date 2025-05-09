 #include "pxt.h"
#include "MicroBit.h"

using namespace pxt;

namespace audiolib {
    /**
     * Hopefully this works
     */
    void hello() {
        uBit.serial.printf("Testing.");
    }
}