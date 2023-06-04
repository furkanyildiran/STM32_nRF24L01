#ifdef __cplusplus
extern "C"{
#endif
#ifndef __nRF24L01_H__
#define __nRF24L01_H__
#include "nRF24L01_config.h"
#include "nRF24L01_mnemonics.h"

typedef struct nRF24L01Set{
	rf_data_rate_t rf_data_rate;
	uint8_t rf_channel;
	rf_pwr_t rf_power;
}nRF24L01Set_t, *nRF24L01Set_ptr_t;

void nRF24L01_init(SPI_HandleTypeDef *spi_ptr, nRF24L01Set_ptr_t nRF24Set_ptr);

#endif
#ifdef __cplusplus
}
#endif
