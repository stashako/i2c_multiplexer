#include <iostream>
#include "i2c_multiplexer.h"

using namespace std;

class i2cmultiplexer
{

public:
    char senaddr[256] = "0x70";
    char i2c_bus[256] = I2CBUS;
    i2cmultiplexer()
    {
        get_i2cbus_multiplexer(i2c_bus, senaddr);
    }
    
    void switch_channel(multiplexer_t channel){
        set_multiplexer(channel);
    }
};


int main()
{
    i2cmultiplexer multi;
    multi.switch_channel(channel1);
    
    return 0;
}

