#include "lib/include.h"
extern void I2C3_Init (void)
{
    // Function prototypes initialize, tranmit and rea functions  
int I2C_wait_till_done(void);
char I2C3_Write_Multiple(int slave_address, char slave_memory_address, int bytes_count, uint8_t* data);
char I2C3_Wr(int slaveAddr, char memAddr, uint8_t data);

}
