#include "Cosa/RTT.hh"
#include "Cosa/OutputPin.hh"

#include <wlib/stl/ArrayList.h>
#include <sensors/temperature/TMP006.h>

OutputPin ledPin(Board::LED);
wlp::ArrayList<int> int_list;
wlp::TMP006 tmp;

void setup() {
    RTT::begin();
}

void loop() {
    ledPin.on();
    delay(50);
    ledPin.off();
    delay(500);
}
