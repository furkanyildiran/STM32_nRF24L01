#ifdef __cplusplus
extern "C"{
#endif
#ifndef __nRF24L01_MNEMONICS_H__
#define __nRF24L01_MNEMONICS_H__




typedef enum{
	R_REGISTER = 0x00,
	W_REGISTER = 0x20,
	R_RX_PAYLOAD  = 0x61,
	W_TX_PAYLOAD = 0xA0,
	FLUSH_TX = 0xE1,
	FLUSH_RX = 0xE2,
	REUSE_TX_PL = 0xE3,
	R_RX_PL_WID = 0x60,
	W_ACK_PAYLOAD = 0xA0,
	W_TX_PAYLOAD_NO_ACK = 0xB0,
	NOP = 0xFF,
}nRF24L01_Command_t;

typedef enum{
	CONFIG = 0x00,
	EN_AA = 0x01,
	EN_RXADDR = 0x02,
	SETUP_AW = 0x03,
	SETUP_RETR = 0x04,
	RF_CH = 0x05,
	RF_SETUP = 0x06,
	STATUS = 0x07,
	OBSERVE_TX = 0x08,
	RPD = 0x09,
	RX_ADDR_P0 = 0x0A,
	RX_ADDR_P1 = 0x0B,
	RX_ADDR_P2 = 0x0C,
	RX_ADDR_P3 = 0x0D,
	RX_ADDR_P4 = 0x0E,
	RX_ADDR_P5 = 0x0F,
	TX_ADDR = 0x10,
	RX_PW_P0 = 0x11,
	RX_PW_P1 = 0x12,
	RX_PW_P2 = 0x13,
	RX_PW_P3 = 0x14,
	RX_PW_P4 = 0x15,
	RX_PW_P5 = 0x16,
	FIFO_STATUS = 0x17,
	ACK_PLD = NULL,
	TX_PLD = NULL,
	RX_PLD = NULL,
	DYNPD = 0x1C,
	FEATURE = 0x1D
}nRF24L01_Register_Addr_t;

typedef enum{
	PRIM_RX,
	PWR_UP,
	CRCO,
	EN_CRC,
	MASK_MAX_RT,
	MASK_TX_DS,
	MASK_RX_DR
}CONFIG_Bit_t;

typedef enum{
	ENAA_P0,
	ENAA_P1,
	ENAA_P2,
	ENAA_P3,
	ENAA_P4,
	ENAA_P5
}EN_AA_Bit_t;

typedef enum{
	ERX_P0,
	ERX_P1,
	ERX_P2,
	ERX_P3,
	ERX_P4,
	ERX_P5
}EN_RXADDR_Bit_t;

#endif
#ifdef __cplusplus
}
#endif
