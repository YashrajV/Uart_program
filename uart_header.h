/*
 * This is the header file containing the driver function declarations for
 * LPC2148's UART written by Yashraj vernekar
 */


/**
 * @brief Configures the baud rate of the UART
 *
 * @param baud : the baud rate of the UART data to be transmitted
 * valid values: 50 ...128000
 * @param clock: the input clock frequency in MHz is from the crystal clock. 
 * valid values: 1.8432MHz, 3.072MHz, 18.432MHz
 *
 * @return none
 */
void configure_baudrate (unsigned int baud, float clock);

/**
 * @brief Configures the width of the data
 *
 * @param width : The width of the UART data
 * valid values: 5,6,7,8 these are the only valid width that can be transmitted
 *
 * @return none
 */
void configure_data_width ( unsigned int width);

/**
 * @brief To signal the end of the transmission
 *
 * @param stop_bit : unsigned char stop_bit 
 * @param width: this field is used to set the stop according the data width
 * valid values: input 1 to generate 1 stop_bit (for 5,6,7,8 data width) ,input 1.5 (to generate 1.5 stop_bit for 5 bit data width) ,input 2 (to generate 2 stop_bit 5,6,7,8 bit data width) 
 *
 * @return none
 */
void configure_stop_bit (unsigned int stop_bit,unsigned int width);

/**
 * @brief parity bit determines the evenness or oddness of the data
 *
 * @param parity_bit :need to pass even parity(0) if number of 1's in data frame is even else pass odd parity(1)  if the number of  1's id odd,pass 2 to disable the parity 
 * valid values: 0 ,1 and 2
 *
 * @return none
 */
void configure_parity (unsigned int parity_bit);

/**
 * @brief this function helps to transmit a 8 bit data
 *
 * @param data : it contains a unsigned 8 bit character data
 * valid values: it can be any 8 bit value
 *
 * @return none
 */
void transmit_data (unsigned char data);

/**
 * @brief receives the transmitted data
 *
 * @param none : it will take no parameters from the user 
 * valid values: none
 *
 * @return data read from the register
 */
unsigned char receive_data ();

