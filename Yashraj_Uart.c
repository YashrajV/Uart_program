#include "uart_header.h"

int main(){
configure_baudrate(12800,1.8432);
configure_data_width(7);
configure_stop_bit(2,7);
configure_parity(1);
transmit_data('Y');
char c=receive_data();
return 0;

}
