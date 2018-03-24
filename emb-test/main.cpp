#include <Cosa/RTT.hh>
#include <Cosa/UART.hh>
#include <Cosa/Trace.hh>

#include <wcosa-package/GoodPackage.h>

bool value = wlp::are_equal<int, 5, 10>::value;

void setup() {
    uart.begin(9600);
    trace.begin(&uart);
    RTT::begin();
}

void loop() {
    trace << value << endl;
    delay(1000);
}

