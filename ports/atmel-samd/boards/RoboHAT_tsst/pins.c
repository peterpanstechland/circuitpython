#include "shared-bindings/board/__init__.h"

STATIC const mp_rom_map_elem_t board_global_dict_table[] = {
	// Raspberry Pi
	{ MP_ROM_QSTR(MP_QSTR_PI_RX), MP_ROM_PTR(&pin_PA31) },
	{ MP_ROM_QSTR(MP_QSTR_PI_TX), MP_ROM_PTR(&pin_PA30) },

	// Special Function
	{ MP_ROM_QSTR(MP_QSTR_BATTERY), MP_ROM_PTR(&pin_PA02) },
	{ MP_ROM_QSTR(MP_QSTR_POWER_OFF), MP_ROM_PTR(&pin_PA03) },
	{ MP_ROM_QSTR(MP_QSTR_POWER_ON), MP_ROM_PTR(&pin_PA27) },

	{ MP_ROM_QSTR(MP_QSTR_NEOPIXEL), MP_ROM_PTR(&pin_PA20) },
	{ MP_ROM_QSTR(MP_QSTR_LED), MP_ROM_PTR(&pin_PA21) },
	{ MP_ROM_QSTR(MP_QSTR_SDA), MP_ROM_PTR(&pin_PA22) },
	{ MP_ROM_QSTR(MP_QSTR_SCL), MP_ROM_PTR(&pin_PA23) },

	// SPI Flash on SERCOM2
	{ MP_ROM_QSTR(MP_QSTR_FLASH_SCK), MP_ROM_PTR(&pin_PA13) },
	{ MP_ROM_QSTR(MP_QSTR_FLASH_MISO), MP_ROM_PTR(&pin_PA14) },
	{ MP_ROM_QSTR(MP_QSTR_FLASH_MOSI), MP_ROM_PTR(&pin_PA12) },
	{ MP_ROM_QSTR(MP_QSTR_FLASH_CS), MP_ROM_PTR(&pin_PA15) },

	{ MP_ROM_QSTR(MP_QSTR_I2C), MP_ROM_PTR(&board_i2c_obj) },
	{ MP_ROM_QSTR(MP_QSTR_SPI), MP_ROM_PTR(&board_spi_obj) },
	{ MP_ROM_QSTR(MP_QSTR_UART), MP_ROM_PTR(&board_uart_obj) },
};
MP_DEFINE_CONST_DICT(board_module_globals, board_global_dict_table);
