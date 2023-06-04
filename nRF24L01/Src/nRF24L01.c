#include "nRF24L01.h"

static SPI_HandleTypeDef *nRF_SPI_ptr;

void nRF24L01_init(SPI_HandleTypeDef *spi_ptr, nRF24L01Set_ptr_t nRF24Set_ptr){
	nRF_SPI_ptr = spi_ptr;
}
