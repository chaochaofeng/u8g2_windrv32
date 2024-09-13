/* generated code (codebuild), u8g2 project */
class U8X8_SSD1305_128X32_NONAME_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1305_128X32_NONAME_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1305_128x32_noname, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1305_128X32_NONAME_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1305_128X32_NONAME_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1305_128x32_noname, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1305_128X32_NONAME_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1305_128X32_NONAME_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1305_128x32_noname, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1305_128X32_NONAME_6800 : public U8X8 {
  public: U8X8_SSD1305_128X32_NONAME_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1305_128x32_noname, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1305_128X32_NONAME_8080 : public U8X8 {
  public: U8X8_SSD1305_128X32_NONAME_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1305_128x32_noname, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1305_128X32_ADAFRUIT_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1305_128X32_ADAFRUIT_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1305_128x32_adafruit, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1305_128X32_ADAFRUIT_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1305_128X32_ADAFRUIT_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1305_128x32_adafruit, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1305_128X32_ADAFRUIT_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1305_128X32_ADAFRUIT_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1305_128x32_adafruit, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1305_128X32_ADAFRUIT_6800 : public U8X8 {
  public: U8X8_SSD1305_128X32_ADAFRUIT_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1305_128x32_adafruit, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1305_128X32_ADAFRUIT_8080 : public U8X8 {
  public: U8X8_SSD1305_128X32_ADAFRUIT_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1305_128x32_adafruit, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1305_128X32_NONAME_SW_I2C : public U8X8 {
  public: U8X8_SSD1305_128X32_NONAME_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1305_128x32_noname, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1305_128X32_NONAME_HW_I2C : public U8X8 {
  public: U8X8_SSD1305_128X32_NONAME_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1305_128x32_noname, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1305_128X32_NONAME_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1305_128X32_NONAME_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1305_128x32_noname, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1305_128X32_ADAFRUIT_SW_I2C : public U8X8 {
  public: U8X8_SSD1305_128X32_ADAFRUIT_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1305_128x32_adafruit, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1305_128X32_ADAFRUIT_HW_I2C : public U8X8 {
  public: U8X8_SSD1305_128X32_ADAFRUIT_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1305_128x32_adafruit, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1305_128X32_ADAFRUIT_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1305_128X32_ADAFRUIT_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1305_128x32_adafruit, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1305_128X64_ADAFRUIT_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1305_128X64_ADAFRUIT_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1305_128x64_adafruit, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1305_128X64_ADAFRUIT_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1305_128X64_ADAFRUIT_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1305_128x64_adafruit, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1305_128X64_ADAFRUIT_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1305_128X64_ADAFRUIT_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1305_128x64_adafruit, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1305_128X64_ADAFRUIT_6800 : public U8X8 {
  public: U8X8_SSD1305_128X64_ADAFRUIT_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1305_128x64_adafruit, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1305_128X64_ADAFRUIT_8080 : public U8X8 {
  public: U8X8_SSD1305_128X64_ADAFRUIT_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1305_128x64_adafruit, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1305_128X64_RAYSTAR_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1305_128X64_RAYSTAR_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1305_128x64_raystar, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1305_128X64_RAYSTAR_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1305_128X64_RAYSTAR_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1305_128x64_raystar, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1305_128X64_RAYSTAR_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1305_128X64_RAYSTAR_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1305_128x64_raystar, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1305_128X64_RAYSTAR_6800 : public U8X8 {
  public: U8X8_SSD1305_128X64_RAYSTAR_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1305_128x64_raystar, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1305_128X64_RAYSTAR_8080 : public U8X8 {
  public: U8X8_SSD1305_128X64_RAYSTAR_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1305_128x64_raystar, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1305_128X64_ADAFRUIT_SW_I2C : public U8X8 {
  public: U8X8_SSD1305_128X64_ADAFRUIT_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1305_128x64_adafruit, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1305_128X64_ADAFRUIT_HW_I2C : public U8X8 {
  public: U8X8_SSD1305_128X64_ADAFRUIT_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1305_128x64_adafruit, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1305_128X64_ADAFRUIT_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1305_128X64_ADAFRUIT_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1305_128x64_adafruit, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1305_128X64_RAYSTAR_SW_I2C : public U8X8 {
  public: U8X8_SSD1305_128X64_RAYSTAR_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1305_128x64_raystar, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1305_128X64_RAYSTAR_HW_I2C : public U8X8 {
  public: U8X8_SSD1305_128X64_RAYSTAR_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1305_128x64_raystar, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1305_128X64_RAYSTAR_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1305_128X64_RAYSTAR_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1305_128x64_raystar, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1306_2040X16_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1306_2040X16_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_2040x16, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1306_2040X16_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_2040X16_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_2040x16, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1306_2040X16_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_2040X16_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_2040x16, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1306_2040X16_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1306_2040X16_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_2040x16, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1306_2040X16_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_2040X16_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_2040x16, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1306_2040X16_6800 : public U8X8 {
  public: U8X8_SSD1306_2040X16_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_2040x16, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1306_2040X16_8080 : public U8X8 {
  public: U8X8_SSD1306_2040X16_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_2040x16, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1306_128X64_NONAME_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1306_128X64_NONAME_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x64_noname, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1306_128X64_NONAME_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_128X64_NONAME_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x64_noname, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1306_128X64_NONAME_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_128X64_NONAME_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x64_noname, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1306_128X64_NONAME_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1306_128X64_NONAME_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x64_noname, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1306_128X64_NONAME_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_128X64_NONAME_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x64_noname, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1306_128X64_NONAME_6800 : public U8X8 {
  public: U8X8_SSD1306_128X64_NONAME_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x64_noname, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1306_128X64_NONAME_8080 : public U8X8 {
  public: U8X8_SSD1306_128X64_NONAME_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x64_noname, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1306_128X64_VCOMH0_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1306_128X64_VCOMH0_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x64_vcomh0, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1306_128X64_VCOMH0_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_128X64_VCOMH0_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x64_vcomh0, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1306_128X64_VCOMH0_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_128X64_VCOMH0_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x64_vcomh0, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1306_128X64_VCOMH0_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1306_128X64_VCOMH0_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x64_vcomh0, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1306_128X64_VCOMH0_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_128X64_VCOMH0_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x64_vcomh0, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1306_128X64_VCOMH0_6800 : public U8X8 {
  public: U8X8_SSD1306_128X64_VCOMH0_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x64_vcomh0, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1306_128X64_VCOMH0_8080 : public U8X8 {
  public: U8X8_SSD1306_128X64_VCOMH0_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x64_vcomh0, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1306_128X64_ALT0_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1306_128X64_ALT0_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x64_alt0, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1306_128X64_ALT0_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_128X64_ALT0_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x64_alt0, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1306_128X64_ALT0_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_128X64_ALT0_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x64_alt0, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1306_128X64_ALT0_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1306_128X64_ALT0_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x64_alt0, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1306_128X64_ALT0_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_128X64_ALT0_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x64_alt0, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1306_128X64_ALT0_6800 : public U8X8 {
  public: U8X8_SSD1306_128X64_ALT0_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x64_alt0, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1306_128X64_ALT0_8080 : public U8X8 {
  public: U8X8_SSD1306_128X64_ALT0_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x64_alt0, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1306_128X64_NONAME_SW_I2C : public U8X8 {
  public: U8X8_SSD1306_128X64_NONAME_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x64_noname, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1306_128X64_NONAME_HW_I2C : public U8X8 {
  public: U8X8_SSD1306_128X64_NONAME_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x64_noname, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1306_128X64_NONAME_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1306_128X64_NONAME_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x64_noname, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1306_128X64_VCOMH0_SW_I2C : public U8X8 {
  public: U8X8_SSD1306_128X64_VCOMH0_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x64_vcomh0, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1306_128X64_VCOMH0_HW_I2C : public U8X8 {
  public: U8X8_SSD1306_128X64_VCOMH0_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x64_vcomh0, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1306_128X64_VCOMH0_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1306_128X64_VCOMH0_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x64_vcomh0, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1306_128X64_ALT0_SW_I2C : public U8X8 {
  public: U8X8_SSD1306_128X64_ALT0_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x64_alt0, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1306_128X64_ALT0_HW_I2C : public U8X8 {
  public: U8X8_SSD1306_128X64_ALT0_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x64_alt0, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1306_128X64_ALT0_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1306_128X64_ALT0_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x64_alt0, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1312_128X64_NONAME_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1312_128X64_NONAME_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1312_128x64_noname, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1312_128X64_NONAME_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1312_128X64_NONAME_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1312_128x64_noname, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1312_128X64_NONAME_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1312_128X64_NONAME_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1312_128x64_noname, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1312_128X64_NONAME_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1312_128X64_NONAME_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1312_128x64_noname, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1312_128X64_NONAME_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1312_128X64_NONAME_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1312_128x64_noname, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1312_128X64_NONAME_6800 : public U8X8 {
  public: U8X8_SSD1312_128X64_NONAME_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1312_128x64_noname, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1312_128X64_NONAME_8080 : public U8X8 {
  public: U8X8_SSD1312_128X64_NONAME_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1312_128x64_noname, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1312_128X64_NONAME_SW_I2C : public U8X8 {
  public: U8X8_SSD1312_128X64_NONAME_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1312_128x64_noname, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1312_128X64_NONAME_HW_I2C : public U8X8 {
  public: U8X8_SSD1312_128X64_NONAME_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1312_128x64_noname, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1312_128X64_NONAME_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1312_128X64_NONAME_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1312_128x64_noname, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1306_72X40_ER_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1306_72X40_ER_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_72x40_er, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1306_72X40_ER_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_72X40_ER_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_72x40_er, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1306_72X40_ER_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_72X40_ER_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_72x40_er, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1306_72X40_ER_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1306_72X40_ER_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_72x40_er, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1306_72X40_ER_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_72X40_ER_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_72x40_er, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1306_72X40_ER_6800 : public U8X8 {
  public: U8X8_SSD1306_72X40_ER_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_72x40_er, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1306_72X40_ER_8080 : public U8X8 {
  public: U8X8_SSD1306_72X40_ER_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_72x40_er, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1306_72X40_ER_SW_I2C : public U8X8 {
  public: U8X8_SSD1306_72X40_ER_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_72x40_er, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1306_72X40_ER_HW_I2C : public U8X8 {
  public: U8X8_SSD1306_72X40_ER_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_72x40_er, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1306_72X40_ER_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1306_72X40_ER_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_72x40_er, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1306_96X40_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1306_96X40_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_96x40, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1306_96X40_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_96X40_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_96x40, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1306_96X40_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_96X40_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_96x40, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1306_96X40_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1306_96X40_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_96x40, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1306_96X40_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_96X40_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_96x40, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1306_96X40_6800 : public U8X8 {
  public: U8X8_SSD1306_96X40_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_96x40, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1306_96X40_8080 : public U8X8 {
  public: U8X8_SSD1306_96X40_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_96x40, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1306_96X39_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1306_96X39_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_96x39, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1306_96X39_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_96X39_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_96x39, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1306_96X39_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_96X39_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_96x39, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1306_96X39_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1306_96X39_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_96x39, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1306_96X39_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_96X39_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_96x39, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1306_96X39_6800 : public U8X8 {
  public: U8X8_SSD1306_96X39_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_96x39, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1306_96X39_8080 : public U8X8 {
  public: U8X8_SSD1306_96X39_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_96x39, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1306_96X40_SW_I2C : public U8X8 {
  public: U8X8_SSD1306_96X40_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_96x40, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1306_96X40_HW_I2C : public U8X8 {
  public: U8X8_SSD1306_96X40_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_96x40, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1306_96X40_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1306_96X40_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_96x40, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1306_96X39_SW_I2C : public U8X8 {
  public: U8X8_SSD1306_96X39_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_96x39, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1306_96X39_HW_I2C : public U8X8 {
  public: U8X8_SSD1306_96X39_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_96x39, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1306_96X39_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1306_96X39_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_96x39, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SH1106_128X64_NONAME_4W_SW_SPI : public U8X8 {
  public: U8X8_SH1106_128X64_NONAME_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x64_noname, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SH1106_128X64_NONAME_4W_HW_SPI : public U8X8 {
  public: U8X8_SH1106_128X64_NONAME_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x64_noname, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SH1106_128X64_NONAME_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SH1106_128X64_NONAME_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x64_noname, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SH1106_128X64_NONAME_3W_SW_SPI : public U8X8 {
  public: U8X8_SH1106_128X64_NONAME_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x64_noname, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SH1106_128X64_NONAME_3W_HW_SPI : public U8X8 {
  public: U8X8_SH1106_128X64_NONAME_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x64_noname, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SH1106_128X64_NONAME_6800 : public U8X8 {
  public: U8X8_SH1106_128X64_NONAME_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x64_noname, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SH1106_128X64_NONAME_8080 : public U8X8 {
  public: U8X8_SH1106_128X64_NONAME_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x64_noname, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SH1106_128X64_VCOMH0_4W_SW_SPI : public U8X8 {
  public: U8X8_SH1106_128X64_VCOMH0_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x64_vcomh0, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SH1106_128X64_VCOMH0_4W_HW_SPI : public U8X8 {
  public: U8X8_SH1106_128X64_VCOMH0_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x64_vcomh0, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SH1106_128X64_VCOMH0_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SH1106_128X64_VCOMH0_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x64_vcomh0, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SH1106_128X64_VCOMH0_3W_SW_SPI : public U8X8 {
  public: U8X8_SH1106_128X64_VCOMH0_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x64_vcomh0, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SH1106_128X64_VCOMH0_3W_HW_SPI : public U8X8 {
  public: U8X8_SH1106_128X64_VCOMH0_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x64_vcomh0, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SH1106_128X64_VCOMH0_6800 : public U8X8 {
  public: U8X8_SH1106_128X64_VCOMH0_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x64_vcomh0, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SH1106_128X64_VCOMH0_8080 : public U8X8 {
  public: U8X8_SH1106_128X64_VCOMH0_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x64_vcomh0, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SH1106_128X64_WINSTAR_4W_SW_SPI : public U8X8 {
  public: U8X8_SH1106_128X64_WINSTAR_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x64_winstar, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SH1106_128X64_WINSTAR_4W_HW_SPI : public U8X8 {
  public: U8X8_SH1106_128X64_WINSTAR_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x64_winstar, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SH1106_128X64_WINSTAR_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SH1106_128X64_WINSTAR_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x64_winstar, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SH1106_128X64_WINSTAR_3W_SW_SPI : public U8X8 {
  public: U8X8_SH1106_128X64_WINSTAR_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x64_winstar, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SH1106_128X64_WINSTAR_3W_HW_SPI : public U8X8 {
  public: U8X8_SH1106_128X64_WINSTAR_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x64_winstar, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SH1106_128X64_WINSTAR_6800 : public U8X8 {
  public: U8X8_SH1106_128X64_WINSTAR_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x64_winstar, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SH1106_128X64_WINSTAR_8080 : public U8X8 {
  public: U8X8_SH1106_128X64_WINSTAR_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x64_winstar, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SH1106_128X64_NONAME_SW_I2C : public U8X8 {
  public: U8X8_SH1106_128X64_NONAME_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x64_noname, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SH1106_128X64_NONAME_HW_I2C : public U8X8 {
  public: U8X8_SH1106_128X64_NONAME_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x64_noname, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SH1106_128X64_NONAME_2ND_HW_I2C : public U8X8 {
  public: U8X8_SH1106_128X64_NONAME_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x64_noname, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SH1106_128X64_VCOMH0_SW_I2C : public U8X8 {
  public: U8X8_SH1106_128X64_VCOMH0_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x64_vcomh0, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SH1106_128X64_VCOMH0_HW_I2C : public U8X8 {
  public: U8X8_SH1106_128X64_VCOMH0_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x64_vcomh0, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SH1106_128X64_VCOMH0_2ND_HW_I2C : public U8X8 {
  public: U8X8_SH1106_128X64_VCOMH0_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x64_vcomh0, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SH1106_128X64_WINSTAR_SW_I2C : public U8X8 {
  public: U8X8_SH1106_128X64_WINSTAR_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x64_winstar, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SH1106_128X64_WINSTAR_HW_I2C : public U8X8 {
  public: U8X8_SH1106_128X64_WINSTAR_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x64_winstar, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SH1106_128X64_WINSTAR_2ND_HW_I2C : public U8X8 {
  public: U8X8_SH1106_128X64_WINSTAR_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x64_winstar, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SH1106_72X40_WISE_4W_SW_SPI : public U8X8 {
  public: U8X8_SH1106_72X40_WISE_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_72x40_wise, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SH1106_72X40_WISE_4W_HW_SPI : public U8X8 {
  public: U8X8_SH1106_72X40_WISE_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_72x40_wise, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SH1106_72X40_WISE_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SH1106_72X40_WISE_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_72x40_wise, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SH1106_72X40_WISE_3W_SW_SPI : public U8X8 {
  public: U8X8_SH1106_72X40_WISE_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_72x40_wise, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SH1106_72X40_WISE_3W_HW_SPI : public U8X8 {
  public: U8X8_SH1106_72X40_WISE_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_72x40_wise, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SH1106_72X40_WISE_6800 : public U8X8 {
  public: U8X8_SH1106_72X40_WISE_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_72x40_wise, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SH1106_72X40_WISE_8080 : public U8X8 {
  public: U8X8_SH1106_72X40_WISE_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_72x40_wise, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SH1106_72X40_WISE_SW_I2C : public U8X8 {
  public: U8X8_SH1106_72X40_WISE_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_72x40_wise, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SH1106_72X40_WISE_HW_I2C : public U8X8 {
  public: U8X8_SH1106_72X40_WISE_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_72x40_wise, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SH1106_72X40_WISE_2ND_HW_I2C : public U8X8 {
  public: U8X8_SH1106_72X40_WISE_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_72x40_wise, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SH1106_64X32_4W_SW_SPI : public U8X8 {
  public: U8X8_SH1106_64X32_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_64x32, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SH1106_64X32_4W_HW_SPI : public U8X8 {
  public: U8X8_SH1106_64X32_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_64x32, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SH1106_64X32_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SH1106_64X32_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_64x32, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SH1106_64X32_3W_SW_SPI : public U8X8 {
  public: U8X8_SH1106_64X32_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_64x32, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SH1106_64X32_3W_HW_SPI : public U8X8 {
  public: U8X8_SH1106_64X32_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_64x32, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SH1106_64X32_6800 : public U8X8 {
  public: U8X8_SH1106_64X32_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_64x32, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SH1106_64X32_8080 : public U8X8 {
  public: U8X8_SH1106_64X32_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_64x32, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SH1106_64X32_SW_I2C : public U8X8 {
  public: U8X8_SH1106_64X32_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_64x32, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SH1106_64X32_HW_I2C : public U8X8 {
  public: U8X8_SH1106_64X32_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_64x32, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SH1106_64X32_2ND_HW_I2C : public U8X8 {
  public: U8X8_SH1106_64X32_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_64x32, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SH1107_64X128_4W_SW_SPI : public U8X8 {
  public: U8X8_SH1107_64X128_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_64x128, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SH1107_64X128_4W_HW_SPI : public U8X8 {
  public: U8X8_SH1107_64X128_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_64x128, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SH1107_64X128_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SH1107_64X128_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_64x128, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SH1107_64X128_3W_SW_SPI : public U8X8 {
  public: U8X8_SH1107_64X128_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_64x128, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SH1107_64X128_3W_HW_SPI : public U8X8 {
  public: U8X8_SH1107_64X128_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_64x128, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SH1107_64X128_6800 : public U8X8 {
  public: U8X8_SH1107_64X128_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_64x128, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SH1107_64X128_8080 : public U8X8 {
  public: U8X8_SH1107_64X128_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_64x128, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SH1107_64X128_SW_I2C : public U8X8 {
  public: U8X8_SH1107_64X128_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_64x128, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SH1107_64X128_HW_I2C : public U8X8 {
  public: U8X8_SH1107_64X128_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_64x128, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SH1107_64X128_2ND_HW_I2C : public U8X8 {
  public: U8X8_SH1107_64X128_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_64x128, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SH1107_SEEED_96X96_4W_SW_SPI : public U8X8 {
  public: U8X8_SH1107_SEEED_96X96_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_seeed_96x96, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SH1107_SEEED_96X96_4W_HW_SPI : public U8X8 {
  public: U8X8_SH1107_SEEED_96X96_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_seeed_96x96, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SH1107_SEEED_96X96_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SH1107_SEEED_96X96_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_seeed_96x96, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SH1107_SEEED_96X96_3W_SW_SPI : public U8X8 {
  public: U8X8_SH1107_SEEED_96X96_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_seeed_96x96, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SH1107_SEEED_96X96_3W_HW_SPI : public U8X8 {
  public: U8X8_SH1107_SEEED_96X96_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_seeed_96x96, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SH1107_SEEED_96X96_6800 : public U8X8 {
  public: U8X8_SH1107_SEEED_96X96_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_seeed_96x96, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SH1107_SEEED_96X96_8080 : public U8X8 {
  public: U8X8_SH1107_SEEED_96X96_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_seeed_96x96, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SH1107_HJR_OEL1M0201_96X96_4W_SW_SPI : public U8X8 {
  public: U8X8_SH1107_HJR_OEL1M0201_96X96_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_hjr_oel1m0201_96x96, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SH1107_HJR_OEL1M0201_96X96_4W_HW_SPI : public U8X8 {
  public: U8X8_SH1107_HJR_OEL1M0201_96X96_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_hjr_oel1m0201_96x96, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SH1107_HJR_OEL1M0201_96X96_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SH1107_HJR_OEL1M0201_96X96_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_hjr_oel1m0201_96x96, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SH1107_HJR_OEL1M0201_96X96_3W_SW_SPI : public U8X8 {
  public: U8X8_SH1107_HJR_OEL1M0201_96X96_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_hjr_oel1m0201_96x96, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SH1107_HJR_OEL1M0201_96X96_3W_HW_SPI : public U8X8 {
  public: U8X8_SH1107_HJR_OEL1M0201_96X96_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_hjr_oel1m0201_96x96, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SH1107_HJR_OEL1M0201_96X96_6800 : public U8X8 {
  public: U8X8_SH1107_HJR_OEL1M0201_96X96_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_hjr_oel1m0201_96x96, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SH1107_HJR_OEL1M0201_96X96_8080 : public U8X8 {
  public: U8X8_SH1107_HJR_OEL1M0201_96X96_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_hjr_oel1m0201_96x96, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SH1107_SEEED_96X96_SW_I2C : public U8X8 {
  public: U8X8_SH1107_SEEED_96X96_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_seeed_96x96, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SH1107_SEEED_96X96_HW_I2C : public U8X8 {
  public: U8X8_SH1107_SEEED_96X96_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_seeed_96x96, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SH1107_SEEED_96X96_2ND_HW_I2C : public U8X8 {
  public: U8X8_SH1107_SEEED_96X96_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_seeed_96x96, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SH1107_HJR_OEL1M0201_96X96_SW_I2C : public U8X8 {
  public: U8X8_SH1107_HJR_OEL1M0201_96X96_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_hjr_oel1m0201_96x96, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SH1107_HJR_OEL1M0201_96X96_HW_I2C : public U8X8 {
  public: U8X8_SH1107_HJR_OEL1M0201_96X96_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_hjr_oel1m0201_96x96, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SH1107_HJR_OEL1M0201_96X96_2ND_HW_I2C : public U8X8 {
  public: U8X8_SH1107_HJR_OEL1M0201_96X96_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_hjr_oel1m0201_96x96, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SH1107_128X80_4W_SW_SPI : public U8X8 {
  public: U8X8_SH1107_128X80_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_128x80, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SH1107_128X80_4W_HW_SPI : public U8X8 {
  public: U8X8_SH1107_128X80_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_128x80, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SH1107_128X80_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SH1107_128X80_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_128x80, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SH1107_128X80_3W_SW_SPI : public U8X8 {
  public: U8X8_SH1107_128X80_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_128x80, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SH1107_128X80_3W_HW_SPI : public U8X8 {
  public: U8X8_SH1107_128X80_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_128x80, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SH1107_128X80_6800 : public U8X8 {
  public: U8X8_SH1107_128X80_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_128x80, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SH1107_128X80_8080 : public U8X8 {
  public: U8X8_SH1107_128X80_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_128x80, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SH1107_TK078F288_80X128_4W_SW_SPI : public U8X8 {
  public: U8X8_SH1107_TK078F288_80X128_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_tk078f288_80x128, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SH1107_TK078F288_80X128_4W_HW_SPI : public U8X8 {
  public: U8X8_SH1107_TK078F288_80X128_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_tk078f288_80x128, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SH1107_TK078F288_80X128_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SH1107_TK078F288_80X128_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_tk078f288_80x128, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SH1107_TK078F288_80X128_3W_SW_SPI : public U8X8 {
  public: U8X8_SH1107_TK078F288_80X128_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_tk078f288_80x128, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SH1107_TK078F288_80X128_3W_HW_SPI : public U8X8 {
  public: U8X8_SH1107_TK078F288_80X128_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_tk078f288_80x128, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SH1107_TK078F288_80X128_6800 : public U8X8 {
  public: U8X8_SH1107_TK078F288_80X128_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_tk078f288_80x128, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SH1107_TK078F288_80X128_8080 : public U8X8 {
  public: U8X8_SH1107_TK078F288_80X128_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_tk078f288_80x128, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SH1107_128X80_SW_I2C : public U8X8 {
  public: U8X8_SH1107_128X80_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_128x80, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SH1107_128X80_HW_I2C : public U8X8 {
  public: U8X8_SH1107_128X80_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_128x80, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SH1107_128X80_2ND_HW_I2C : public U8X8 {
  public: U8X8_SH1107_128X80_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_128x80, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SH1107_TK078F288_80X128_SW_I2C : public U8X8 {
  public: U8X8_SH1107_TK078F288_80X128_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_tk078f288_80x128, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SH1107_TK078F288_80X128_HW_I2C : public U8X8 {
  public: U8X8_SH1107_TK078F288_80X128_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_tk078f288_80x128, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SH1107_TK078F288_80X128_2ND_HW_I2C : public U8X8 {
  public: U8X8_SH1107_TK078F288_80X128_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_tk078f288_80x128, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SH1107_128X128_4W_SW_SPI : public U8X8 {
  public: U8X8_SH1107_128X128_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_128x128, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SH1107_128X128_4W_HW_SPI : public U8X8 {
  public: U8X8_SH1107_128X128_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_128x128, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SH1107_128X128_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SH1107_128X128_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_128x128, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SH1107_128X128_3W_SW_SPI : public U8X8 {
  public: U8X8_SH1107_128X128_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_128x128, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SH1107_128X128_3W_HW_SPI : public U8X8 {
  public: U8X8_SH1107_128X128_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_128x128, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SH1107_128X128_6800 : public U8X8 {
  public: U8X8_SH1107_128X128_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_128x128, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SH1107_128X128_8080 : public U8X8 {
  public: U8X8_SH1107_128X128_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_128x128, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SH1107_PIMORONI_128X128_4W_SW_SPI : public U8X8 {
  public: U8X8_SH1107_PIMORONI_128X128_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_pimoroni_128x128, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SH1107_PIMORONI_128X128_4W_HW_SPI : public U8X8 {
  public: U8X8_SH1107_PIMORONI_128X128_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_pimoroni_128x128, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SH1107_PIMORONI_128X128_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SH1107_PIMORONI_128X128_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_pimoroni_128x128, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SH1107_PIMORONI_128X128_3W_SW_SPI : public U8X8 {
  public: U8X8_SH1107_PIMORONI_128X128_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_pimoroni_128x128, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SH1107_PIMORONI_128X128_3W_HW_SPI : public U8X8 {
  public: U8X8_SH1107_PIMORONI_128X128_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_pimoroni_128x128, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SH1107_PIMORONI_128X128_6800 : public U8X8 {
  public: U8X8_SH1107_PIMORONI_128X128_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_pimoroni_128x128, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SH1107_PIMORONI_128X128_8080 : public U8X8 {
  public: U8X8_SH1107_PIMORONI_128X128_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_pimoroni_128x128, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SH1107_SEEED_128X128_4W_SW_SPI : public U8X8 {
  public: U8X8_SH1107_SEEED_128X128_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_seeed_128x128, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SH1107_SEEED_128X128_4W_HW_SPI : public U8X8 {
  public: U8X8_SH1107_SEEED_128X128_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_seeed_128x128, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SH1107_SEEED_128X128_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SH1107_SEEED_128X128_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_seeed_128x128, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SH1107_SEEED_128X128_3W_SW_SPI : public U8X8 {
  public: U8X8_SH1107_SEEED_128X128_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_seeed_128x128, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SH1107_SEEED_128X128_3W_HW_SPI : public U8X8 {
  public: U8X8_SH1107_SEEED_128X128_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_seeed_128x128, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SH1107_SEEED_128X128_6800 : public U8X8 {
  public: U8X8_SH1107_SEEED_128X128_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_seeed_128x128, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SH1107_SEEED_128X128_8080 : public U8X8 {
  public: U8X8_SH1107_SEEED_128X128_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_seeed_128x128, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SH1107_128X128_SW_I2C : public U8X8 {
  public: U8X8_SH1107_128X128_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_128x128, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SH1107_128X128_HW_I2C : public U8X8 {
  public: U8X8_SH1107_128X128_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_128x128, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SH1107_128X128_2ND_HW_I2C : public U8X8 {
  public: U8X8_SH1107_128X128_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_128x128, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SH1107_PIMORONI_128X128_SW_I2C : public U8X8 {
  public: U8X8_SH1107_PIMORONI_128X128_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_pimoroni_128x128, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SH1107_PIMORONI_128X128_HW_I2C : public U8X8 {
  public: U8X8_SH1107_PIMORONI_128X128_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_pimoroni_128x128, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SH1107_PIMORONI_128X128_2ND_HW_I2C : public U8X8 {
  public: U8X8_SH1107_PIMORONI_128X128_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_pimoroni_128x128, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SH1107_SEEED_128X128_SW_I2C : public U8X8 {
  public: U8X8_SH1107_SEEED_128X128_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_seeed_128x128, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SH1107_SEEED_128X128_HW_I2C : public U8X8 {
  public: U8X8_SH1107_SEEED_128X128_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_seeed_128x128, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SH1107_SEEED_128X128_2ND_HW_I2C : public U8X8 {
  public: U8X8_SH1107_SEEED_128X128_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1107_seeed_128x128, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SH1108_128X160_4W_SW_SPI : public U8X8 {
  public: U8X8_SH1108_128X160_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1108_128x160, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SH1108_128X160_4W_HW_SPI : public U8X8 {
  public: U8X8_SH1108_128X160_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1108_128x160, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SH1108_128X160_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SH1108_128X160_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1108_128x160, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SH1108_128X160_3W_SW_SPI : public U8X8 {
  public: U8X8_SH1108_128X160_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1108_128x160, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SH1108_128X160_3W_HW_SPI : public U8X8 {
  public: U8X8_SH1108_128X160_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1108_128x160, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SH1108_128X160_6800 : public U8X8 {
  public: U8X8_SH1108_128X160_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1108_128x160, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SH1108_128X160_8080 : public U8X8 {
  public: U8X8_SH1108_128X160_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1108_128x160, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SH1108_128X160_SW_I2C : public U8X8 {
  public: U8X8_SH1108_128X160_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1108_128x160, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SH1108_128X160_HW_I2C : public U8X8 {
  public: U8X8_SH1108_128X160_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1108_128x160, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SH1108_128X160_2ND_HW_I2C : public U8X8 {
  public: U8X8_SH1108_128X160_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1108_128x160, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SH1108_160X160_4W_SW_SPI : public U8X8 {
  public: U8X8_SH1108_160X160_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1108_160x160, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SH1108_160X160_4W_HW_SPI : public U8X8 {
  public: U8X8_SH1108_160X160_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1108_160x160, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SH1108_160X160_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SH1108_160X160_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1108_160x160, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SH1108_160X160_3W_SW_SPI : public U8X8 {
  public: U8X8_SH1108_160X160_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1108_160x160, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SH1108_160X160_3W_HW_SPI : public U8X8 {
  public: U8X8_SH1108_160X160_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1108_160x160, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SH1108_160X160_6800 : public U8X8 {
  public: U8X8_SH1108_160X160_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1108_160x160, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SH1108_160X160_8080 : public U8X8 {
  public: U8X8_SH1108_160X160_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1108_160x160, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SH1108_160X160_SW_I2C : public U8X8 {
  public: U8X8_SH1108_160X160_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1108_160x160, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SH1108_160X160_HW_I2C : public U8X8 {
  public: U8X8_SH1108_160X160_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1108_160x160, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SH1108_160X160_2ND_HW_I2C : public U8X8 {
  public: U8X8_SH1108_160X160_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1108_160x160, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SH1122_256X64_4W_SW_SPI : public U8X8 {
  public: U8X8_SH1122_256X64_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1122_256x64, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SH1122_256X64_4W_HW_SPI : public U8X8 {
  public: U8X8_SH1122_256X64_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1122_256x64, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SH1122_256X64_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SH1122_256X64_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1122_256x64, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SH1122_256X64_3W_SW_SPI : public U8X8 {
  public: U8X8_SH1122_256X64_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1122_256x64, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SH1122_256X64_3W_HW_SPI : public U8X8 {
  public: U8X8_SH1122_256X64_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1122_256x64, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SH1122_256X64_6800 : public U8X8 {
  public: U8X8_SH1122_256X64_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1122_256x64, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SH1122_256X64_8080 : public U8X8 {
  public: U8X8_SH1122_256X64_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1122_256x64, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SH1122_256X64_SW_I2C : public U8X8 {
  public: U8X8_SH1122_256X64_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1122_256x64, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SH1122_256X64_HW_I2C : public U8X8 {
  public: U8X8_SH1122_256X64_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1122_256x64, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SH1122_256X64_2ND_HW_I2C : public U8X8 {
  public: U8X8_SH1122_256X64_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1122_256x64, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1306_128X32_UNIVISION_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1306_128X32_UNIVISION_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x32_univision, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1306_128X32_UNIVISION_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_128X32_UNIVISION_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x32_univision, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1306_128X32_UNIVISION_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_128X32_UNIVISION_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x32_univision, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1306_128X32_UNIVISION_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1306_128X32_UNIVISION_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x32_univision, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1306_128X32_UNIVISION_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_128X32_UNIVISION_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x32_univision, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1306_128X32_UNIVISION_6800 : public U8X8 {
  public: U8X8_SSD1306_128X32_UNIVISION_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x32_univision, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1306_128X32_UNIVISION_8080 : public U8X8 {
  public: U8X8_SSD1306_128X32_UNIVISION_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x32_univision, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1306_128X32_WINSTAR_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1306_128X32_WINSTAR_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x32_winstar, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1306_128X32_WINSTAR_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_128X32_WINSTAR_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x32_winstar, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1306_128X32_WINSTAR_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_128X32_WINSTAR_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x32_winstar, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1306_128X32_WINSTAR_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1306_128X32_WINSTAR_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x32_winstar, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1306_128X32_WINSTAR_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_128X32_WINSTAR_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x32_winstar, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1306_128X32_WINSTAR_6800 : public U8X8 {
  public: U8X8_SSD1306_128X32_WINSTAR_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x32_winstar, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1306_128X32_WINSTAR_8080 : public U8X8 {
  public: U8X8_SSD1306_128X32_WINSTAR_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x32_winstar, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1306_128X32_UNIVISION_SW_I2C : public U8X8 {
  public: U8X8_SSD1306_128X32_UNIVISION_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x32_univision, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1306_128X32_UNIVISION_HW_I2C : public U8X8 {
  public: U8X8_SSD1306_128X32_UNIVISION_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x32_univision, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1306_128X32_UNIVISION_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1306_128X32_UNIVISION_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x32_univision, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1306_128X32_WINSTAR_SW_I2C : public U8X8 {
  public: U8X8_SSD1306_128X32_WINSTAR_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x32_winstar, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1306_128X32_WINSTAR_HW_I2C : public U8X8 {
  public: U8X8_SSD1306_128X32_WINSTAR_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x32_winstar, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1306_128X32_WINSTAR_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1306_128X32_WINSTAR_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_128x32_winstar, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1306_102X64_EA_OLEDS102_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1306_102X64_EA_OLEDS102_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_102x64_ea_oleds102, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1306_102X64_EA_OLEDS102_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_102X64_EA_OLEDS102_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_102x64_ea_oleds102, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1306_102X64_EA_OLEDS102_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_102X64_EA_OLEDS102_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_102x64_ea_oleds102, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1306_102X64_EA_OLEDS102_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1306_102X64_EA_OLEDS102_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_102x64_ea_oleds102, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1306_102X64_EA_OLEDS102_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_102X64_EA_OLEDS102_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_102x64_ea_oleds102, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1306_102X64_EA_OLEDS102_6800 : public U8X8 {
  public: U8X8_SSD1306_102X64_EA_OLEDS102_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_102x64_ea_oleds102, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1306_102X64_EA_OLEDS102_8080 : public U8X8 {
  public: U8X8_SSD1306_102X64_EA_OLEDS102_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_102x64_ea_oleds102, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1306_102X64_EA_OLEDS102_SW_I2C : public U8X8 {
  public: U8X8_SSD1306_102X64_EA_OLEDS102_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_102x64_ea_oleds102, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1306_102X64_EA_OLEDS102_HW_I2C : public U8X8 {
  public: U8X8_SSD1306_102X64_EA_OLEDS102_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_102x64_ea_oleds102, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1306_102X64_EA_OLEDS102_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1306_102X64_EA_OLEDS102_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_102x64_ea_oleds102, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SH1106_128X32_VISIONOX_4W_SW_SPI : public U8X8 {
  public: U8X8_SH1106_128X32_VISIONOX_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x32_visionox, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SH1106_128X32_VISIONOX_4W_HW_SPI : public U8X8 {
  public: U8X8_SH1106_128X32_VISIONOX_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x32_visionox, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SH1106_128X32_VISIONOX_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SH1106_128X32_VISIONOX_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x32_visionox, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SH1106_128X32_VISIONOX_3W_SW_SPI : public U8X8 {
  public: U8X8_SH1106_128X32_VISIONOX_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x32_visionox, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SH1106_128X32_VISIONOX_3W_HW_SPI : public U8X8 {
  public: U8X8_SH1106_128X32_VISIONOX_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x32_visionox, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SH1106_128X32_VISIONOX_6800 : public U8X8 {
  public: U8X8_SH1106_128X32_VISIONOX_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x32_visionox, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SH1106_128X32_VISIONOX_8080 : public U8X8 {
  public: U8X8_SH1106_128X32_VISIONOX_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x32_visionox, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SH1106_128X32_VISIONOX_SW_I2C : public U8X8 {
  public: U8X8_SH1106_128X32_VISIONOX_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x32_visionox, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SH1106_128X32_VISIONOX_HW_I2C : public U8X8 {
  public: U8X8_SH1106_128X32_VISIONOX_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x32_visionox, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SH1106_128X32_VISIONOX_2ND_HW_I2C : public U8X8 {
  public: U8X8_SH1106_128X32_VISIONOX_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sh1106_128x32_visionox, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1306_64X48_ER_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1306_64X48_ER_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_64x48_er, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1306_64X48_ER_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_64X48_ER_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_64x48_er, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1306_64X48_ER_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_64X48_ER_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_64x48_er, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1306_64X48_ER_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1306_64X48_ER_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_64x48_er, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1306_64X48_ER_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_64X48_ER_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_64x48_er, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1306_64X48_ER_6800 : public U8X8 {
  public: U8X8_SSD1306_64X48_ER_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_64x48_er, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1306_64X48_ER_8080 : public U8X8 {
  public: U8X8_SSD1306_64X48_ER_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_64x48_er, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1306_64X48_ER_SW_I2C : public U8X8 {
  public: U8X8_SSD1306_64X48_ER_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_64x48_er, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1306_64X48_ER_HW_I2C : public U8X8 {
  public: U8X8_SSD1306_64X48_ER_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_64x48_er, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1306_64X48_ER_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1306_64X48_ER_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_64x48_er, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1306_48X64_WINSTAR_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1306_48X64_WINSTAR_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_48x64_winstar, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1306_48X64_WINSTAR_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_48X64_WINSTAR_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_48x64_winstar, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1306_48X64_WINSTAR_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_48X64_WINSTAR_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_48x64_winstar, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1306_48X64_WINSTAR_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1306_48X64_WINSTAR_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_48x64_winstar, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1306_48X64_WINSTAR_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_48X64_WINSTAR_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_48x64_winstar, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1306_48X64_WINSTAR_6800 : public U8X8 {
  public: U8X8_SSD1306_48X64_WINSTAR_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_48x64_winstar, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1306_48X64_WINSTAR_8080 : public U8X8 {
  public: U8X8_SSD1306_48X64_WINSTAR_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_48x64_winstar, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1306_48X64_WINSTAR_SW_I2C : public U8X8 {
  public: U8X8_SSD1306_48X64_WINSTAR_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_48x64_winstar, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1306_48X64_WINSTAR_HW_I2C : public U8X8 {
  public: U8X8_SSD1306_48X64_WINSTAR_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_48x64_winstar, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1306_48X64_WINSTAR_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1306_48X64_WINSTAR_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_48x64_winstar, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1306_64X32_NONAME_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1306_64X32_NONAME_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_64x32_noname, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1306_64X32_NONAME_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_64X32_NONAME_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_64x32_noname, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1306_64X32_NONAME_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_64X32_NONAME_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_64x32_noname, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1306_64X32_NONAME_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1306_64X32_NONAME_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_64x32_noname, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1306_64X32_NONAME_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_64X32_NONAME_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_64x32_noname, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1306_64X32_NONAME_6800 : public U8X8 {
  public: U8X8_SSD1306_64X32_NONAME_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_64x32_noname, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1306_64X32_NONAME_8080 : public U8X8 {
  public: U8X8_SSD1306_64X32_NONAME_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_64x32_noname, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1306_64X32_1F_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1306_64X32_1F_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_64x32_1f, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1306_64X32_1F_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_64X32_1F_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_64x32_1f, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1306_64X32_1F_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_64X32_1F_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_64x32_1f, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1306_64X32_1F_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1306_64X32_1F_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_64x32_1f, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1306_64X32_1F_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_64X32_1F_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_64x32_1f, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1306_64X32_1F_6800 : public U8X8 {
  public: U8X8_SSD1306_64X32_1F_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_64x32_1f, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1306_64X32_1F_8080 : public U8X8 {
  public: U8X8_SSD1306_64X32_1F_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_64x32_1f, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1306_64X32_NONAME_SW_I2C : public U8X8 {
  public: U8X8_SSD1306_64X32_NONAME_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_64x32_noname, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1306_64X32_NONAME_HW_I2C : public U8X8 {
  public: U8X8_SSD1306_64X32_NONAME_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_64x32_noname, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1306_64X32_NONAME_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1306_64X32_NONAME_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_64x32_noname, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1306_64X32_1F_SW_I2C : public U8X8 {
  public: U8X8_SSD1306_64X32_1F_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_64x32_1f, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1306_64X32_1F_HW_I2C : public U8X8 {
  public: U8X8_SSD1306_64X32_1F_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_64x32_1f, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1306_64X32_1F_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1306_64X32_1F_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_64x32_1f, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1306_96X16_ER_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1306_96X16_ER_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_96x16_er, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1306_96X16_ER_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_96X16_ER_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_96x16_er, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1306_96X16_ER_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_96X16_ER_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_96x16_er, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1306_96X16_ER_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1306_96X16_ER_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_96x16_er, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1306_96X16_ER_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1306_96X16_ER_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_96x16_er, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1306_96X16_ER_6800 : public U8X8 {
  public: U8X8_SSD1306_96X16_ER_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_96x16_er, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1306_96X16_ER_8080 : public U8X8 {
  public: U8X8_SSD1306_96X16_ER_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_96x16_er, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1306_96X16_ER_SW_I2C : public U8X8 {
  public: U8X8_SSD1306_96X16_ER_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_96x16_er, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1306_96X16_ER_HW_I2C : public U8X8 {
  public: U8X8_SSD1306_96X16_ER_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_96x16_er, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1306_96X16_ER_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1306_96X16_ER_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1306_96x16_er, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1309_128X64_NONAME2_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1309_128X64_NONAME2_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1309_128x64_noname2, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1309_128X64_NONAME2_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1309_128X64_NONAME2_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1309_128x64_noname2, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1309_128X64_NONAME2_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1309_128X64_NONAME2_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1309_128x64_noname2, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1309_128X64_NONAME2_6800 : public U8X8 {
  public: U8X8_SSD1309_128X64_NONAME2_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1309_128x64_noname2, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1309_128X64_NONAME2_8080 : public U8X8 {
  public: U8X8_SSD1309_128X64_NONAME2_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1309_128x64_noname2, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1309_128X64_NONAME2_SW_I2C : public U8X8 {
  public: U8X8_SSD1309_128X64_NONAME2_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1309_128x64_noname2, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1309_128X64_NONAME2_HW_I2C : public U8X8 {
  public: U8X8_SSD1309_128X64_NONAME2_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1309_128x64_noname2, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1309_128X64_NONAME2_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1309_128X64_NONAME2_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1309_128x64_noname2, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1309_128X64_NONAME0_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1309_128X64_NONAME0_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1309_128x64_noname0, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1309_128X64_NONAME0_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1309_128X64_NONAME0_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1309_128x64_noname0, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1309_128X64_NONAME0_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1309_128X64_NONAME0_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1309_128x64_noname0, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1309_128X64_NONAME0_6800 : public U8X8 {
  public: U8X8_SSD1309_128X64_NONAME0_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1309_128x64_noname0, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1309_128X64_NONAME0_8080 : public U8X8 {
  public: U8X8_SSD1309_128X64_NONAME0_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1309_128x64_noname0, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1309_128X64_NONAME0_SW_I2C : public U8X8 {
  public: U8X8_SSD1309_128X64_NONAME0_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1309_128x64_noname0, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1309_128X64_NONAME0_HW_I2C : public U8X8 {
  public: U8X8_SSD1309_128X64_NONAME0_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1309_128x64_noname0, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1309_128X64_NONAME0_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1309_128X64_NONAME0_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1309_128x64_noname0, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1312_128X32_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1312_128X32_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1312_128x32, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1312_128X32_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1312_128X32_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1312_128x32, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1312_128X32_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1312_128X32_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1312_128x32, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1312_128X32_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1312_128X32_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1312_128x32, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1312_128X32_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1312_128X32_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1312_128x32, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1312_128X32_6800 : public U8X8 {
  public: U8X8_SSD1312_128X32_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1312_128x32, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1312_128X32_8080 : public U8X8 {
  public: U8X8_SSD1312_128X32_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1312_128x32, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1312_128X32_SW_I2C : public U8X8 {
  public: U8X8_SSD1312_128X32_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1312_128x32, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1312_128X32_HW_I2C : public U8X8 {
  public: U8X8_SSD1312_128X32_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1312_128x32, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1312_128X32_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1312_128X32_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1312_128x32, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1316_128X32_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1316_128X32_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1316_128x32, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1316_128X32_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1316_128X32_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1316_128x32, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1316_128X32_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1316_128X32_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1316_128x32, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1316_128X32_6800 : public U8X8 {
  public: U8X8_SSD1316_128X32_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1316_128x32, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1316_128X32_8080 : public U8X8 {
  public: U8X8_SSD1316_128X32_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1316_128x32, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1316_128X32_SW_I2C : public U8X8 {
  public: U8X8_SSD1316_128X32_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1316_128x32, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1316_128X32_HW_I2C : public U8X8 {
  public: U8X8_SSD1316_128X32_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1316_128x32, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1316_128X32_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1316_128X32_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1316_128x32, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1316_96X32_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1316_96X32_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1316_96x32, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1316_96X32_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1316_96X32_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1316_96x32, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1316_96X32_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1316_96X32_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1316_96x32, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1316_96X32_6800 : public U8X8 {
  public: U8X8_SSD1316_96X32_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1316_96x32, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1316_96X32_8080 : public U8X8 {
  public: U8X8_SSD1316_96X32_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1316_96x32, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1316_96X32_SW_I2C : public U8X8 {
  public: U8X8_SSD1316_96X32_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1316_96x32, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1316_96X32_HW_I2C : public U8X8 {
  public: U8X8_SSD1316_96X32_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1316_96x32, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1316_96X32_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1316_96X32_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1316_96x32, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1317_96X96_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1317_96X96_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1317_96x96, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1317_96X96_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1317_96X96_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1317_96x96, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1317_96X96_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1317_96X96_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1317_96x96, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1317_96X96_6800 : public U8X8 {
  public: U8X8_SSD1317_96X96_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1317_96x96, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1317_96X96_8080 : public U8X8 {
  public: U8X8_SSD1317_96X96_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1317_96x96, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1317_96X96_SW_I2C : public U8X8 {
  public: U8X8_SSD1317_96X96_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1317_96x96, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1317_96X96_HW_I2C : public U8X8 {
  public: U8X8_SSD1317_96X96_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1317_96x96, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1317_96X96_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1317_96X96_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1317_96x96, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1318_128X96_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1318_128X96_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1318_128x96, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1318_128X96_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1318_128X96_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1318_128x96, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1318_128X96_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1318_128X96_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1318_128x96, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1318_128X96_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1318_128X96_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1318_128x96, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1318_128X96_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1318_128X96_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1318_128x96, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1318_128X96_6800 : public U8X8 {
  public: U8X8_SSD1318_128X96_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1318_128x96, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1318_128X96_8080 : public U8X8 {
  public: U8X8_SSD1318_128X96_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1318_128x96, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1318_128X96_XCP_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1318_128X96_XCP_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1318_128x96_xcp, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1318_128X96_XCP_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1318_128X96_XCP_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1318_128x96_xcp, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1318_128X96_XCP_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1318_128X96_XCP_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1318_128x96_xcp, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1318_128X96_XCP_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1318_128X96_XCP_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1318_128x96_xcp, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1318_128X96_XCP_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1318_128X96_XCP_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1318_128x96_xcp, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1318_128X96_XCP_6800 : public U8X8 {
  public: U8X8_SSD1318_128X96_XCP_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1318_128x96_xcp, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1318_128X96_XCP_8080 : public U8X8 {
  public: U8X8_SSD1318_128X96_XCP_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1318_128x96_xcp, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1318_128X96_SW_I2C : public U8X8 {
  public: U8X8_SSD1318_128X96_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1318_128x96, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1318_128X96_HW_I2C : public U8X8 {
  public: U8X8_SSD1318_128X96_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1318_128x96, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1318_128X96_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1318_128X96_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1318_128x96, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1318_128X96_XCP_SW_I2C : public U8X8 {
  public: U8X8_SSD1318_128X96_XCP_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1318_128x96_xcp, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1318_128X96_XCP_HW_I2C : public U8X8 {
  public: U8X8_SSD1318_128X96_XCP_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1318_128x96_xcp, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1318_128X96_XCP_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1318_128X96_XCP_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1318_128x96_xcp, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1325_NHD_128X64_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1325_NHD_128X64_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1325_nhd_128x64, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1325_NHD_128X64_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1325_NHD_128X64_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1325_nhd_128x64, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1325_NHD_128X64_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1325_NHD_128X64_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1325_nhd_128x64, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1325_NHD_128X64_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1325_NHD_128X64_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1325_nhd_128x64, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1325_NHD_128X64_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1325_NHD_128X64_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1325_nhd_128x64, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1325_NHD_128X64_6800 : public U8X8 {
  public: U8X8_SSD1325_NHD_128X64_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1325_nhd_128x64, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1325_NHD_128X64_8080 : public U8X8 {
  public: U8X8_SSD1325_NHD_128X64_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1325_nhd_128x64, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1325_NHD_128X64_SW_I2C : public U8X8 {
  public: U8X8_SSD1325_NHD_128X64_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1325_nhd_128x64, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1325_NHD_128X64_HW_I2C : public U8X8 {
  public: U8X8_SSD1325_NHD_128X64_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1325_nhd_128x64, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1325_NHD_128X64_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1325_NHD_128X64_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1325_nhd_128x64, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD0323_OS128064_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD0323_OS128064_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd0323_os128064, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD0323_OS128064_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD0323_OS128064_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd0323_os128064, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD0323_OS128064_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD0323_OS128064_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd0323_os128064, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD0323_OS128064_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD0323_OS128064_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd0323_os128064, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD0323_OS128064_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD0323_OS128064_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd0323_os128064, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD0323_OS128064_6800 : public U8X8 {
  public: U8X8_SSD0323_OS128064_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd0323_os128064, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD0323_OS128064_8080 : public U8X8 {
  public: U8X8_SSD0323_OS128064_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd0323_os128064, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD0323_OS128064_SW_I2C : public U8X8 {
  public: U8X8_SSD0323_OS128064_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd0323_os128064, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD0323_OS128064_HW_I2C : public U8X8 {
  public: U8X8_SSD0323_OS128064_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd0323_os128064, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD0323_OS128064_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD0323_OS128064_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd0323_os128064, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1326_ER_256X32_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1326_ER_256X32_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1326_er_256x32, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1326_ER_256X32_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1326_ER_256X32_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1326_er_256x32, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1326_ER_256X32_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1326_ER_256X32_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1326_er_256x32, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1326_ER_256X32_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1326_ER_256X32_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1326_er_256x32, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1326_ER_256X32_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1326_ER_256X32_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1326_er_256x32, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1326_ER_256X32_6800 : public U8X8 {
  public: U8X8_SSD1326_ER_256X32_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1326_er_256x32, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1326_ER_256X32_8080 : public U8X8 {
  public: U8X8_SSD1326_ER_256X32_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1326_er_256x32, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1326_ER_256X32_SW_I2C : public U8X8 {
  public: U8X8_SSD1326_ER_256X32_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1326_er_256x32, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1326_ER_256X32_HW_I2C : public U8X8 {
  public: U8X8_SSD1326_ER_256X32_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1326_er_256x32, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1326_ER_256X32_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1326_ER_256X32_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1326_er_256x32, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1327_WS_96X64_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1327_WS_96X64_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_ws_96x64, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1327_WS_96X64_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1327_WS_96X64_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_ws_96x64, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1327_WS_96X64_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1327_WS_96X64_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_ws_96x64, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1327_WS_96X64_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1327_WS_96X64_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_ws_96x64, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1327_WS_96X64_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1327_WS_96X64_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_ws_96x64, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1327_WS_96X64_6800 : public U8X8 {
  public: U8X8_SSD1327_WS_96X64_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_ws_96x64, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1327_WS_96X64_8080 : public U8X8 {
  public: U8X8_SSD1327_WS_96X64_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_ws_96x64, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1327_WS_96X64_SW_I2C : public U8X8 {
  public: U8X8_SSD1327_WS_96X64_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_ws_96x64, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1327_WS_96X64_HW_I2C : public U8X8 {
  public: U8X8_SSD1327_WS_96X64_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_ws_96x64, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1327_WS_96X64_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1327_WS_96X64_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_ws_96x64, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1327_SEEED_96X96_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1327_SEEED_96X96_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_seeed_96x96, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1327_SEEED_96X96_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1327_SEEED_96X96_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_seeed_96x96, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1327_SEEED_96X96_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1327_SEEED_96X96_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_seeed_96x96, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1327_SEEED_96X96_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1327_SEEED_96X96_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_seeed_96x96, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1327_SEEED_96X96_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1327_SEEED_96X96_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_seeed_96x96, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1327_SEEED_96X96_6800 : public U8X8 {
  public: U8X8_SSD1327_SEEED_96X96_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_seeed_96x96, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1327_SEEED_96X96_8080 : public U8X8 {
  public: U8X8_SSD1327_SEEED_96X96_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_seeed_96x96, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1327_SEEED_96X96_SW_I2C : public U8X8 {
  public: U8X8_SSD1327_SEEED_96X96_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_seeed_96x96, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1327_SEEED_96X96_HW_I2C : public U8X8 {
  public: U8X8_SSD1327_SEEED_96X96_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_seeed_96x96, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1327_SEEED_96X96_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1327_SEEED_96X96_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_seeed_96x96, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1327_EA_W128128_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1327_EA_W128128_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_ea_w128128, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1327_EA_W128128_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1327_EA_W128128_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_ea_w128128, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1327_EA_W128128_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1327_EA_W128128_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_ea_w128128, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1327_EA_W128128_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1327_EA_W128128_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_ea_w128128, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1327_EA_W128128_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1327_EA_W128128_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_ea_w128128, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1327_EA_W128128_6800 : public U8X8 {
  public: U8X8_SSD1327_EA_W128128_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_ea_w128128, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1327_EA_W128128_8080 : public U8X8 {
  public: U8X8_SSD1327_EA_W128128_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_ea_w128128, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1327_MIDAS_128X128_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1327_MIDAS_128X128_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_midas_128x128, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1327_MIDAS_128X128_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1327_MIDAS_128X128_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_midas_128x128, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1327_MIDAS_128X128_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1327_MIDAS_128X128_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_midas_128x128, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1327_MIDAS_128X128_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1327_MIDAS_128X128_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_midas_128x128, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1327_MIDAS_128X128_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1327_MIDAS_128X128_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_midas_128x128, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1327_MIDAS_128X128_6800 : public U8X8 {
  public: U8X8_SSD1327_MIDAS_128X128_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_midas_128x128, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1327_MIDAS_128X128_8080 : public U8X8 {
  public: U8X8_SSD1327_MIDAS_128X128_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_midas_128x128, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1327_ZJY_128X128_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1327_ZJY_128X128_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_zjy_128x128, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1327_ZJY_128X128_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1327_ZJY_128X128_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_zjy_128x128, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1327_ZJY_128X128_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1327_ZJY_128X128_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_zjy_128x128, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1327_ZJY_128X128_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1327_ZJY_128X128_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_zjy_128x128, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1327_ZJY_128X128_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1327_ZJY_128X128_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_zjy_128x128, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1327_ZJY_128X128_6800 : public U8X8 {
  public: U8X8_SSD1327_ZJY_128X128_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_zjy_128x128, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1327_ZJY_128X128_8080 : public U8X8 {
  public: U8X8_SSD1327_ZJY_128X128_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_zjy_128x128, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1327_WS_128X128_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1327_WS_128X128_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_ws_128x128, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1327_WS_128X128_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1327_WS_128X128_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_ws_128x128, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1327_WS_128X128_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1327_WS_128X128_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_ws_128x128, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1327_WS_128X128_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1327_WS_128X128_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_ws_128x128, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1327_WS_128X128_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1327_WS_128X128_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_ws_128x128, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1327_WS_128X128_6800 : public U8X8 {
  public: U8X8_SSD1327_WS_128X128_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_ws_128x128, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1327_WS_128X128_8080 : public U8X8 {
  public: U8X8_SSD1327_WS_128X128_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_ws_128x128, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1327_EA_W128128_SW_I2C : public U8X8 {
  public: U8X8_SSD1327_EA_W128128_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_ea_w128128, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1327_EA_W128128_HW_I2C : public U8X8 {
  public: U8X8_SSD1327_EA_W128128_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_ea_w128128, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1327_EA_W128128_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1327_EA_W128128_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_ea_w128128, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1327_MIDAS_128X128_SW_I2C : public U8X8 {
  public: U8X8_SSD1327_MIDAS_128X128_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_midas_128x128, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1327_MIDAS_128X128_HW_I2C : public U8X8 {
  public: U8X8_SSD1327_MIDAS_128X128_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_midas_128x128, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1327_MIDAS_128X128_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1327_MIDAS_128X128_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_midas_128x128, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1327_ZJY_128X128_SW_I2C : public U8X8 {
  public: U8X8_SSD1327_ZJY_128X128_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_zjy_128x128, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1327_ZJY_128X128_HW_I2C : public U8X8 {
  public: U8X8_SSD1327_ZJY_128X128_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_zjy_128x128, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1327_ZJY_128X128_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1327_ZJY_128X128_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_zjy_128x128, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1327_WS_128X128_SW_I2C : public U8X8 {
  public: U8X8_SSD1327_WS_128X128_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_ws_128x128, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1327_WS_128X128_HW_I2C : public U8X8 {
  public: U8X8_SSD1327_WS_128X128_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_ws_128x128, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1327_WS_128X128_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1327_WS_128X128_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_ws_128x128, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1327_VISIONOX_128X96_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1327_VISIONOX_128X96_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_visionox_128x96, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1327_VISIONOX_128X96_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1327_VISIONOX_128X96_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_visionox_128x96, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1327_VISIONOX_128X96_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1327_VISIONOX_128X96_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_visionox_128x96, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1327_VISIONOX_128X96_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1327_VISIONOX_128X96_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_visionox_128x96, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1327_VISIONOX_128X96_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1327_VISIONOX_128X96_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_visionox_128x96, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1327_VISIONOX_128X96_6800 : public U8X8 {
  public: U8X8_SSD1327_VISIONOX_128X96_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_visionox_128x96, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1327_VISIONOX_128X96_8080 : public U8X8 {
  public: U8X8_SSD1327_VISIONOX_128X96_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_visionox_128x96, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1327_VISIONOX_128X96_SW_I2C : public U8X8 {
  public: U8X8_SSD1327_VISIONOX_128X96_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_visionox_128x96, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1327_VISIONOX_128X96_HW_I2C : public U8X8 {
  public: U8X8_SSD1327_VISIONOX_128X96_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_visionox_128x96, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1327_VISIONOX_128X96_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1327_VISIONOX_128X96_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1327_visionox_128x96, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1329_128X96_NONAME_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1329_128X96_NONAME_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1329_128x96_noname, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1329_128X96_NONAME_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1329_128X96_NONAME_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1329_128x96_noname, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1329_128X96_NONAME_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1329_128X96_NONAME_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1329_128x96_noname, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1329_128X96_NONAME_6800 : public U8X8 {
  public: U8X8_SSD1329_128X96_NONAME_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1329_128x96_noname, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1329_128X96_NONAME_8080 : public U8X8 {
  public: U8X8_SSD1329_128X96_NONAME_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1329_128x96_noname, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1329_96X96_NONAME_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1329_96X96_NONAME_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1329_96x96_noname, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1329_96X96_NONAME_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1329_96X96_NONAME_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1329_96x96_noname, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1329_96X96_NONAME_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1329_96X96_NONAME_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1329_96x96_noname, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1329_96X96_NONAME_6800 : public U8X8 {
  public: U8X8_SSD1329_96X96_NONAME_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1329_96x96_noname, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1329_96X96_NONAME_8080 : public U8X8 {
  public: U8X8_SSD1329_96X96_NONAME_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1329_96x96_noname, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_LD7032_60X32_4W_SW_SPI : public U8X8 {
  public: U8X8_LD7032_60X32_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ld7032_60x32, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_LD7032_60X32_4W_HW_SPI : public U8X8 {
  public: U8X8_LD7032_60X32_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ld7032_60x32, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_LD7032_60X32_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_LD7032_60X32_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ld7032_60x32, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_LD7032_60X32_ALT_4W_SW_SPI : public U8X8 {
  public: U8X8_LD7032_60X32_ALT_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ld7032_60x32_alt, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_LD7032_60X32_ALT_4W_HW_SPI : public U8X8 {
  public: U8X8_LD7032_60X32_ALT_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ld7032_60x32_alt, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_LD7032_60X32_ALT_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_LD7032_60X32_ALT_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ld7032_60x32_alt, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_LD7032_60X32_SW_I2C : public U8X8 {
  public: U8X8_LD7032_60X32_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ld7032_60x32, u8x8_cad_ld7032_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_LD7032_60X32_HW_I2C : public U8X8 {
  public: U8X8_LD7032_60X32_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ld7032_60x32, u8x8_cad_ld7032_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_LD7032_60X32_2ND_HW_I2C : public U8X8 {
  public: U8X8_LD7032_60X32_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ld7032_60x32, u8x8_cad_ld7032_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_LD7032_60X32_ALT_SW_I2C : public U8X8 {
  public: U8X8_LD7032_60X32_ALT_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ld7032_60x32_alt, u8x8_cad_ld7032_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_LD7032_60X32_ALT_HW_I2C : public U8X8 {
  public: U8X8_LD7032_60X32_ALT_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ld7032_60x32_alt, u8x8_cad_ld7032_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_LD7032_60X32_ALT_2ND_HW_I2C : public U8X8 {
  public: U8X8_LD7032_60X32_ALT_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ld7032_60x32_alt, u8x8_cad_ld7032_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_LD7032_128X36_4W_SW_SPI : public U8X8 {
  public: U8X8_LD7032_128X36_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ld7032_128x36, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_LD7032_128X36_4W_HW_SPI : public U8X8 {
  public: U8X8_LD7032_128X36_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ld7032_128x36, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_LD7032_128X36_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_LD7032_128X36_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ld7032_128x36, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_LD7032_128X36_SW_I2C : public U8X8 {
  public: U8X8_LD7032_128X36_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ld7032_128x36, u8x8_cad_ld7032_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_LD7032_128X36_HW_I2C : public U8X8 {
  public: U8X8_LD7032_128X36_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ld7032_128x36, u8x8_cad_ld7032_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_LD7032_128X36_2ND_HW_I2C : public U8X8 {
  public: U8X8_LD7032_128X36_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ld7032_128x36, u8x8_cad_ld7032_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_ST7920_256X32_8080 : public U8X8 {
  public: U8X8_ST7920_256X32_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7920_256x32, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7920_256X32_6800 : public U8X8 {
  public: U8X8_ST7920_256X32_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7920_256x32, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7920_256X32_SW_SPI : public U8X8 {
  public: U8X8_ST7920_256X32_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7920_256x32, u8x8_cad_st7920_spi, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST7920_256X32_HW_SPI : public U8X8 {
  public: U8X8_ST7920_256X32_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7920_256x32, u8x8_cad_st7920_spi, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_ST7920_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7920_256X32_2ND_HW_SPI : public U8X8 {
  public: U8X8_ST7920_256X32_2ND_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7920_256x32, u8x8_cad_st7920_spi, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_ST7920_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7920_144X32_8080 : public U8X8 {
  public: U8X8_ST7920_144X32_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7920_144x32, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7920_144X32_6800 : public U8X8 {
  public: U8X8_ST7920_144X32_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7920_144x32, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7920_144X32_SW_SPI : public U8X8 {
  public: U8X8_ST7920_144X32_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7920_144x32, u8x8_cad_st7920_spi, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST7920_144X32_HW_SPI : public U8X8 {
  public: U8X8_ST7920_144X32_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7920_144x32, u8x8_cad_st7920_spi, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_ST7920_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7920_144X32_2ND_HW_SPI : public U8X8 {
  public: U8X8_ST7920_144X32_2ND_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7920_144x32, u8x8_cad_st7920_spi, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_ST7920_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7920_128X32_8080 : public U8X8 {
  public: U8X8_ST7920_128X32_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7920_128x32, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7920_128X32_6800 : public U8X8 {
  public: U8X8_ST7920_128X32_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7920_128x32, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7920_128X32_SW_SPI : public U8X8 {
  public: U8X8_ST7920_128X32_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7920_128x32, u8x8_cad_st7920_spi, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST7920_128X32_HW_SPI : public U8X8 {
  public: U8X8_ST7920_128X32_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7920_128x32, u8x8_cad_st7920_spi, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_ST7920_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7920_128X32_2ND_HW_SPI : public U8X8 {
  public: U8X8_ST7920_128X32_2ND_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7920_128x32, u8x8_cad_st7920_spi, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_ST7920_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7920_160X32_8080 : public U8X8 {
  public: U8X8_ST7920_160X32_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7920_160x32, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7920_160X32_6800 : public U8X8 {
  public: U8X8_ST7920_160X32_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7920_160x32, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7920_160X32_SW_SPI : public U8X8 {
  public: U8X8_ST7920_160X32_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7920_160x32, u8x8_cad_st7920_spi, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST7920_160X32_HW_SPI : public U8X8 {
  public: U8X8_ST7920_160X32_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7920_160x32, u8x8_cad_st7920_spi, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_ST7920_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7920_160X32_2ND_HW_SPI : public U8X8 {
  public: U8X8_ST7920_160X32_2ND_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7920_160x32, u8x8_cad_st7920_spi, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_ST7920_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7920_192X32_8080 : public U8X8 {
  public: U8X8_ST7920_192X32_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7920_192x32, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7920_192X32_6800 : public U8X8 {
  public: U8X8_ST7920_192X32_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7920_192x32, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7920_192X32_SW_SPI : public U8X8 {
  public: U8X8_ST7920_192X32_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7920_192x32, u8x8_cad_st7920_spi, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST7920_192X32_HW_SPI : public U8X8 {
  public: U8X8_ST7920_192X32_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7920_192x32, u8x8_cad_st7920_spi, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_ST7920_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7920_192X32_2ND_HW_SPI : public U8X8 {
  public: U8X8_ST7920_192X32_2ND_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7920_192x32, u8x8_cad_st7920_spi, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_ST7920_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7920_128X64_8080 : public U8X8 {
  public: U8X8_ST7920_128X64_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7920_128x64, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7920_128X64_6800 : public U8X8 {
  public: U8X8_ST7920_128X64_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7920_128x64, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7920_128X64_SW_SPI : public U8X8 {
  public: U8X8_ST7920_128X64_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7920_128x64, u8x8_cad_st7920_spi, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST7920_128X64_HW_SPI : public U8X8 {
  public: U8X8_ST7920_128X64_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7920_128x64, u8x8_cad_st7920_spi, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_ST7920_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7920_128X64_2ND_HW_SPI : public U8X8 {
  public: U8X8_ST7920_128X64_2ND_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7920_128x64, u8x8_cad_st7920_spi, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_ST7920_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_LS013B7DH03_128X128_4W_SW_SPI : public U8X8 {
  public: U8X8_LS013B7DH03_128X128_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ls013b7dh03_128x128, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_LS013B7DH03_128X128_4W_HW_SPI : public U8X8 {
  public: U8X8_LS013B7DH03_128X128_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ls013b7dh03_128x128, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_LS013B7DH03_128X128_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_LS013B7DH03_128X128_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ls013b7dh03_128x128, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_LS027B7DH01_400X240_4W_SW_SPI : public U8X8 {
  public: U8X8_LS027B7DH01_400X240_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ls027b7dh01_400x240, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_LS027B7DH01_400X240_4W_HW_SPI : public U8X8 {
  public: U8X8_LS027B7DH01_400X240_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ls027b7dh01_400x240, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_LS027B7DH01_400X240_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_LS027B7DH01_400X240_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ls027b7dh01_400x240, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_LS027B7DH01_M0_400X240_4W_SW_SPI : public U8X8 {
  public: U8X8_LS027B7DH01_M0_400X240_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ls027b7dh01_m0_400x240, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_LS027B7DH01_M0_400X240_4W_HW_SPI : public U8X8 {
  public: U8X8_LS027B7DH01_M0_400X240_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ls027b7dh01_m0_400x240, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_LS027B7DH01_M0_400X240_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_LS027B7DH01_M0_400X240_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ls027b7dh01_m0_400x240, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_LS013B7DH05_144X168_4W_SW_SPI : public U8X8 {
  public: U8X8_LS013B7DH05_144X168_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ls013b7dh05_144x168, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_LS013B7DH05_144X168_4W_HW_SPI : public U8X8 {
  public: U8X8_LS013B7DH05_144X168_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ls013b7dh05_144x168, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_LS013B7DH05_144X168_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_LS013B7DH05_144X168_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ls013b7dh05_144x168, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1701_EA_DOGS102_4W_SW_SPI : public U8X8 {
  public: U8X8_UC1701_EA_DOGS102_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1701_ea_dogs102, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_UC1701_EA_DOGS102_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1701_EA_DOGS102_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1701_ea_dogs102, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1701_EA_DOGS102_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1701_EA_DOGS102_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1701_ea_dogs102, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1701_EA_DOGS102_3W_SW_SPI : public U8X8 {
  public: U8X8_UC1701_EA_DOGS102_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1701_ea_dogs102, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_UC1701_EA_DOGS102_3W_HW_SPI : public U8X8 {
  public: U8X8_UC1701_EA_DOGS102_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1701_ea_dogs102, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_UC1701_EA_DOGS102_6800 : public U8X8 {
  public: U8X8_UC1701_EA_DOGS102_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1701_ea_dogs102, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1701_EA_DOGS102_8080 : public U8X8 {
  public: U8X8_UC1701_EA_DOGS102_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1701_ea_dogs102, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1701_MINI12864_4W_SW_SPI : public U8X8 {
  public: U8X8_UC1701_MINI12864_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1701_mini12864, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_UC1701_MINI12864_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1701_MINI12864_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1701_mini12864, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1701_MINI12864_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1701_MINI12864_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1701_mini12864, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1701_MINI12864_3W_SW_SPI : public U8X8 {
  public: U8X8_UC1701_MINI12864_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1701_mini12864, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_UC1701_MINI12864_3W_HW_SPI : public U8X8 {
  public: U8X8_UC1701_MINI12864_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1701_mini12864, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_UC1701_MINI12864_6800 : public U8X8 {
  public: U8X8_UC1701_MINI12864_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1701_mini12864, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1701_MINI12864_8080 : public U8X8 {
  public: U8X8_UC1701_MINI12864_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1701_mini12864, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_PCD8544_84X48_4W_SW_SPI : public U8X8 {
  public: U8X8_PCD8544_84X48_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_pcd8544_84x48, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_PCD8544_84X48_4W_HW_SPI : public U8X8 {
  public: U8X8_PCD8544_84X48_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_pcd8544_84x48, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_PCD8544_84X48_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_PCD8544_84X48_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_pcd8544_84x48, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_PCD8544_84X48_3W_SW_SPI : public U8X8 {
  public: U8X8_PCD8544_84X48_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_pcd8544_84x48, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_PCD8544_84X48_3W_HW_SPI : public U8X8 {
  public: U8X8_PCD8544_84X48_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_pcd8544_84x48, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_PCF8812_96X65_4W_SW_SPI : public U8X8 {
  public: U8X8_PCF8812_96X65_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_pcf8812_96x65, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_PCF8812_96X65_4W_HW_SPI : public U8X8 {
  public: U8X8_PCF8812_96X65_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_pcf8812_96x65, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_PCF8812_96X65_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_PCF8812_96X65_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_pcf8812_96x65, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_PCF8812_96X65_3W_SW_SPI : public U8X8 {
  public: U8X8_PCF8812_96X65_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_pcf8812_96x65, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_PCF8812_96X65_3W_HW_SPI : public U8X8 {
  public: U8X8_PCF8812_96X65_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_pcf8812_96x65, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_PCF8812_101X64_4W_SW_SPI : public U8X8 {
  public: U8X8_PCF8812_101X64_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_pcf8812_101x64, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_PCF8812_101X64_4W_HW_SPI : public U8X8 {
  public: U8X8_PCF8812_101X64_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_pcf8812_101x64, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_PCF8812_101X64_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_PCF8812_101X64_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_pcf8812_101x64, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_PCF8812_101X64_3W_SW_SPI : public U8X8 {
  public: U8X8_PCF8812_101X64_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_pcf8812_101x64, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_PCF8812_101X64_3W_HW_SPI : public U8X8 {
  public: U8X8_PCF8812_101X64_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_pcf8812_101x64, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_HX1230_96X68_4W_SW_SPI : public U8X8 {
  public: U8X8_HX1230_96X68_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_hx1230_96x68, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_HX1230_96X68_4W_HW_SPI : public U8X8 {
  public: U8X8_HX1230_96X68_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_hx1230_96x68, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_HX1230_96X68_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_HX1230_96X68_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_hx1230_96x68, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_HX1230_96X68_3W_SW_SPI : public U8X8 {
  public: U8X8_HX1230_96X68_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_hx1230_96x68, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_HX1230_96X68_3W_HW_SPI : public U8X8 {
  public: U8X8_HX1230_96X68_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_hx1230_96x68, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_UC1604_JLX19264_4W_SW_SPI : public U8X8 {
  public: U8X8_UC1604_JLX19264_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1604_jlx19264, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_UC1604_JLX19264_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1604_JLX19264_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1604_jlx19264, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1604_JLX19264_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1604_JLX19264_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1604_jlx19264, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1604_JLX19264_3W_SW_SPI : public U8X8 {
  public: U8X8_UC1604_JLX19264_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1604_jlx19264, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_UC1604_JLX19264_3W_HW_SPI : public U8X8 {
  public: U8X8_UC1604_JLX19264_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1604_jlx19264, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_UC1604_JLX19264_6800 : public U8X8 {
  public: U8X8_UC1604_JLX19264_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1604_jlx19264, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1604_JLX19264_8080 : public U8X8 {
  public: U8X8_UC1604_JLX19264_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1604_jlx19264, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1604_JLX19264_SW_I2C : public U8X8 {
  public: U8X8_UC1604_JLX19264_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1604_jlx19264, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_UC1604_JLX19264_HW_I2C : public U8X8 {
  public: U8X8_UC1604_JLX19264_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1604_jlx19264, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_UC1604_JLX19264_2ND_HW_I2C : public U8X8 {
  public: U8X8_UC1604_JLX19264_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1604_jlx19264, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_UC1608_ERC24064_4W_SW_SPI : public U8X8 {
  public: U8X8_UC1608_ERC24064_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_erc24064, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_UC1608_ERC24064_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1608_ERC24064_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_erc24064, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1608_ERC24064_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1608_ERC24064_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_erc24064, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1608_ERC24064_3W_SW_SPI : public U8X8 {
  public: U8X8_UC1608_ERC24064_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_erc24064, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_UC1608_ERC24064_3W_HW_SPI : public U8X8 {
  public: U8X8_UC1608_ERC24064_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_erc24064, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_UC1608_ERC24064_6800 : public U8X8 {
  public: U8X8_UC1608_ERC24064_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_erc24064, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1608_ERC24064_8080 : public U8X8 {
  public: U8X8_UC1608_ERC24064_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_erc24064, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1608_DEM240064_4W_SW_SPI : public U8X8 {
  public: U8X8_UC1608_DEM240064_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_dem240064, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_UC1608_DEM240064_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1608_DEM240064_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_dem240064, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1608_DEM240064_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1608_DEM240064_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_dem240064, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1608_DEM240064_3W_SW_SPI : public U8X8 {
  public: U8X8_UC1608_DEM240064_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_dem240064, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_UC1608_DEM240064_3W_HW_SPI : public U8X8 {
  public: U8X8_UC1608_DEM240064_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_dem240064, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_UC1608_DEM240064_6800 : public U8X8 {
  public: U8X8_UC1608_DEM240064_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_dem240064, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1608_DEM240064_8080 : public U8X8 {
  public: U8X8_UC1608_DEM240064_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_dem240064, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1608_ERC24064_SW_I2C : public U8X8 {
  public: U8X8_UC1608_ERC24064_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_erc24064, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_UC1608_ERC24064_HW_I2C : public U8X8 {
  public: U8X8_UC1608_ERC24064_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_erc24064, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_UC1608_ERC24064_2ND_HW_I2C : public U8X8 {
  public: U8X8_UC1608_ERC24064_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_erc24064, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_UC1608_DEM240064_SW_I2C : public U8X8 {
  public: U8X8_UC1608_DEM240064_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_dem240064, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_UC1608_DEM240064_HW_I2C : public U8X8 {
  public: U8X8_UC1608_DEM240064_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_dem240064, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_UC1608_DEM240064_2ND_HW_I2C : public U8X8 {
  public: U8X8_UC1608_DEM240064_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_dem240064, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_UC1608_ERC240120_4W_SW_SPI : public U8X8 {
  public: U8X8_UC1608_ERC240120_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_erc240120, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_UC1608_ERC240120_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1608_ERC240120_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_erc240120, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1608_ERC240120_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1608_ERC240120_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_erc240120, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1608_ERC240120_3W_SW_SPI : public U8X8 {
  public: U8X8_UC1608_ERC240120_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_erc240120, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_UC1608_ERC240120_3W_HW_SPI : public U8X8 {
  public: U8X8_UC1608_ERC240120_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_erc240120, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_UC1608_ERC240120_6800 : public U8X8 {
  public: U8X8_UC1608_ERC240120_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_erc240120, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1608_ERC240120_8080 : public U8X8 {
  public: U8X8_UC1608_ERC240120_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_erc240120, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1608_ERC240120_SW_I2C : public U8X8 {
  public: U8X8_UC1608_ERC240120_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_erc240120, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_UC1608_ERC240120_HW_I2C : public U8X8 {
  public: U8X8_UC1608_ERC240120_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_erc240120, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_UC1608_ERC240120_2ND_HW_I2C : public U8X8 {
  public: U8X8_UC1608_ERC240120_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_erc240120, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_UC1608_240X128_4W_SW_SPI : public U8X8 {
  public: U8X8_UC1608_240X128_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_240x128, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_UC1608_240X128_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1608_240X128_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_240x128, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1608_240X128_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1608_240X128_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_240x128, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1608_240X128_3W_SW_SPI : public U8X8 {
  public: U8X8_UC1608_240X128_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_240x128, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_UC1608_240X128_3W_HW_SPI : public U8X8 {
  public: U8X8_UC1608_240X128_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_240x128, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_UC1608_240X128_6800 : public U8X8 {
  public: U8X8_UC1608_240X128_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_240x128, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1608_240X128_8080 : public U8X8 {
  public: U8X8_UC1608_240X128_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_240x128, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1608_240X128_SW_I2C : public U8X8 {
  public: U8X8_UC1608_240X128_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_240x128, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_UC1608_240X128_HW_I2C : public U8X8 {
  public: U8X8_UC1608_240X128_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_240x128, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_UC1608_240X128_2ND_HW_I2C : public U8X8 {
  public: U8X8_UC1608_240X128_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1608_240x128, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_UC1609_SLG19264_4W_SW_SPI : public U8X8 {
  public: U8X8_UC1609_SLG19264_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1609_slg19264, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_UC1609_SLG19264_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1609_SLG19264_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1609_slg19264, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1609_SLG19264_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1609_SLG19264_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1609_slg19264, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1609_SLG19264_3W_SW_SPI : public U8X8 {
  public: U8X8_UC1609_SLG19264_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1609_slg19264, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_UC1609_SLG19264_3W_HW_SPI : public U8X8 {
  public: U8X8_UC1609_SLG19264_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1609_slg19264, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_UC1609_SLG19264_6800 : public U8X8 {
  public: U8X8_UC1609_SLG19264_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1609_slg19264, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1609_SLG19264_8080 : public U8X8 {
  public: U8X8_UC1609_SLG19264_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1609_slg19264, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1609_SLG19264_SW_I2C : public U8X8 {
  public: U8X8_UC1609_SLG19264_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1609_slg19264, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_UC1609_SLG19264_HW_I2C : public U8X8 {
  public: U8X8_UC1609_SLG19264_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1609_slg19264, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_UC1609_SLG19264_2ND_HW_I2C : public U8X8 {
  public: U8X8_UC1609_SLG19264_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1609_slg19264, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_UC1628_128X64_4W_SW_SPI : public U8X8 {
  public: U8X8_UC1628_128X64_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1628_128x64, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_UC1628_128X64_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1628_128X64_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1628_128x64, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1628_128X64_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1628_128X64_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1628_128x64, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1628_128X64_6800 : public U8X8 {
  public: U8X8_UC1628_128X64_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1628_128x64, u8x8_cad_011, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1628_128X64_8080 : public U8X8 {
  public: U8X8_UC1628_128X64_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1628_128x64, u8x8_cad_011, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1628_128X64_SW_I2C : public U8X8 {
  public: U8X8_UC1628_128X64_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1628_128x64, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_UC1628_128X64_HW_I2C : public U8X8 {
  public: U8X8_UC1628_128X64_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1628_128x64, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_UC1628_128X64_2ND_HW_I2C : public U8X8 {
  public: U8X8_UC1628_128X64_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1628_128x64, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_UC1628_256X128_4W_SW_SPI : public U8X8 {
  public: U8X8_UC1628_256X128_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1628_256x128, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_UC1628_256X128_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1628_256X128_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1628_256x128, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1628_256X128_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1628_256X128_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1628_256x128, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1628_256X128_6800 : public U8X8 {
  public: U8X8_UC1628_256X128_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1628_256x128, u8x8_cad_011, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1628_256X128_8080 : public U8X8 {
  public: U8X8_UC1628_256X128_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1628_256x128, u8x8_cad_011, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1628_256X128_SW_I2C : public U8X8 {
  public: U8X8_UC1628_256X128_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1628_256x128, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_UC1628_256X128_HW_I2C : public U8X8 {
  public: U8X8_UC1628_256X128_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1628_256x128, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_UC1628_256X128_2ND_HW_I2C : public U8X8 {
  public: U8X8_UC1628_256X128_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1628_256x128, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_UC1628_256X32_4W_SW_SPI : public U8X8 {
  public: U8X8_UC1628_256X32_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1628_256x32, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_UC1628_256X32_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1628_256X32_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1628_256x32, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1628_256X32_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1628_256X32_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1628_256x32, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1628_256X32_6800 : public U8X8 {
  public: U8X8_UC1628_256X32_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1628_256x32, u8x8_cad_011, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1628_256X32_8080 : public U8X8 {
  public: U8X8_UC1628_256X32_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1628_256x32, u8x8_cad_011, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1628_256X32_SW_I2C : public U8X8 {
  public: U8X8_UC1628_256X32_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1628_256x32, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_UC1628_256X32_HW_I2C : public U8X8 {
  public: U8X8_UC1628_256X32_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1628_256x32, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_UC1628_256X32_2ND_HW_I2C : public U8X8 {
  public: U8X8_UC1628_256X32_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1628_256x32, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_UC1638_160X128_4W_SW_SPI : public U8X8 {
  public: U8X8_UC1638_160X128_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1638_160x128, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_UC1638_160X128_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1638_160X128_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1638_160x128, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1638_160X128_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1638_160X128_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1638_160x128, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1638_160X128_3W_SW_SPI : public U8X8 {
  public: U8X8_UC1638_160X128_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1638_160x128, u8x8_cad_011, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_UC1638_160X128_3W_HW_SPI : public U8X8 {
  public: U8X8_UC1638_160X128_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1638_160x128, u8x8_cad_011, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_UC1638_160X128_6800 : public U8X8 {
  public: U8X8_UC1638_160X128_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1638_160x128, u8x8_cad_011, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1638_160X128_8080 : public U8X8 {
  public: U8X8_UC1638_160X128_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1638_160x128, u8x8_cad_011, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1638_192X96_4W_SW_SPI : public U8X8 {
  public: U8X8_UC1638_192X96_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1638_192x96, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_UC1638_192X96_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1638_192X96_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1638_192x96, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1638_192X96_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1638_192X96_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1638_192x96, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1638_192X96_3W_SW_SPI : public U8X8 {
  public: U8X8_UC1638_192X96_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1638_192x96, u8x8_cad_011, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_UC1638_192X96_3W_HW_SPI : public U8X8 {
  public: U8X8_UC1638_192X96_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1638_192x96, u8x8_cad_011, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_UC1638_192X96_6800 : public U8X8 {
  public: U8X8_UC1638_192X96_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1638_192x96, u8x8_cad_011, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1638_192X96_8080 : public U8X8 {
  public: U8X8_UC1638_192X96_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1638_192x96, u8x8_cad_011, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1638_192X96_SW_I2C : public U8X8 {
  public: U8X8_UC1638_192X96_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1638_192x96, u8x8_cad_uc1638_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_UC1638_192X96_HW_I2C : public U8X8 {
  public: U8X8_UC1638_192X96_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1638_192x96, u8x8_cad_uc1638_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_UC1638_192X96_2ND_HW_I2C : public U8X8 {
  public: U8X8_UC1638_192X96_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1638_192x96, u8x8_cad_uc1638_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_UC1638_240X128_4W_SW_SPI : public U8X8 {
  public: U8X8_UC1638_240X128_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1638_240x128, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_UC1638_240X128_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1638_240X128_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1638_240x128, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1638_240X128_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1638_240X128_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1638_240x128, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1638_240X128_3W_SW_SPI : public U8X8 {
  public: U8X8_UC1638_240X128_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1638_240x128, u8x8_cad_011, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_UC1638_240X128_3W_HW_SPI : public U8X8 {
  public: U8X8_UC1638_240X128_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1638_240x128, u8x8_cad_011, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_UC1638_240X128_6800 : public U8X8 {
  public: U8X8_UC1638_240X128_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1638_240x128, u8x8_cad_011, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1638_240X128_8080 : public U8X8 {
  public: U8X8_UC1638_240X128_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1638_240x128, u8x8_cad_011, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1638_240X128_SW_I2C : public U8X8 {
  public: U8X8_UC1638_240X128_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1638_240x128, u8x8_cad_uc1638_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_UC1638_240X128_HW_I2C : public U8X8 {
  public: U8X8_UC1638_240X128_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1638_240x128, u8x8_cad_uc1638_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_UC1638_240X128_2ND_HW_I2C : public U8X8 {
  public: U8X8_UC1638_240X128_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1638_240x128, u8x8_cad_uc1638_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_UC1610_EA_DOGXL160_4W_SW_SPI : public U8X8 {
  public: U8X8_UC1610_EA_DOGXL160_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1610_ea_dogxl160, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_UC1610_EA_DOGXL160_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1610_EA_DOGXL160_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1610_ea_dogxl160, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1610_EA_DOGXL160_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1610_EA_DOGXL160_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1610_ea_dogxl160, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1610_EA_DOGXL160_3W_SW_SPI : public U8X8 {
  public: U8X8_UC1610_EA_DOGXL160_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1610_ea_dogxl160, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_UC1610_EA_DOGXL160_3W_HW_SPI : public U8X8 {
  public: U8X8_UC1610_EA_DOGXL160_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1610_ea_dogxl160, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_UC1610_EA_DOGXL160_6800 : public U8X8 {
  public: U8X8_UC1610_EA_DOGXL160_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1610_ea_dogxl160, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1610_EA_DOGXL160_8080 : public U8X8 {
  public: U8X8_UC1610_EA_DOGXL160_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1610_ea_dogxl160, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1610_EA_DOGXL160_SW_I2C : public U8X8 {
  public: U8X8_UC1610_EA_DOGXL160_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1610_ea_dogxl160, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_UC1610_EA_DOGXL160_HW_I2C : public U8X8 {
  public: U8X8_UC1610_EA_DOGXL160_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1610_ea_dogxl160, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_UC1610_EA_DOGXL160_2ND_HW_I2C : public U8X8 {
  public: U8X8_UC1610_EA_DOGXL160_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1610_ea_dogxl160, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_UC1611_EA_DOGM240_4W_SW_SPI : public U8X8 {
  public: U8X8_UC1611_EA_DOGM240_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ea_dogm240, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_UC1611_EA_DOGM240_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1611_EA_DOGM240_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ea_dogm240, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1611_EA_DOGM240_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1611_EA_DOGM240_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ea_dogm240, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1611_EA_DOGM240_3W_SW_SPI : public U8X8 {
  public: U8X8_UC1611_EA_DOGM240_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ea_dogm240, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_UC1611_EA_DOGM240_3W_HW_SPI : public U8X8 {
  public: U8X8_UC1611_EA_DOGM240_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ea_dogm240, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_UC1611_EA_DOGM240_6800 : public U8X8 {
  public: U8X8_UC1611_EA_DOGM240_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ea_dogm240, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1611_EA_DOGM240_8080 : public U8X8 {
  public: U8X8_UC1611_EA_DOGM240_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ea_dogm240, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1611_EA_DOGM240_SW_I2C : public U8X8 {
  public: U8X8_UC1611_EA_DOGM240_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ea_dogm240, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_UC1611_EA_DOGM240_HW_I2C : public U8X8 {
  public: U8X8_UC1611_EA_DOGM240_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ea_dogm240, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_UC1611_EA_DOGM240_2ND_HW_I2C : public U8X8 {
  public: U8X8_UC1611_EA_DOGM240_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ea_dogm240, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_UC1611_EA_DOGXL240_4W_SW_SPI : public U8X8 {
  public: U8X8_UC1611_EA_DOGXL240_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ea_dogxl240, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_UC1611_EA_DOGXL240_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1611_EA_DOGXL240_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ea_dogxl240, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1611_EA_DOGXL240_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1611_EA_DOGXL240_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ea_dogxl240, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1611_EA_DOGXL240_3W_SW_SPI : public U8X8 {
  public: U8X8_UC1611_EA_DOGXL240_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ea_dogxl240, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_UC1611_EA_DOGXL240_3W_HW_SPI : public U8X8 {
  public: U8X8_UC1611_EA_DOGXL240_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ea_dogxl240, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_UC1611_EA_DOGXL240_6800 : public U8X8 {
  public: U8X8_UC1611_EA_DOGXL240_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ea_dogxl240, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1611_EA_DOGXL240_8080 : public U8X8 {
  public: U8X8_UC1611_EA_DOGXL240_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ea_dogxl240, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1611_EA_DOGXL240_SW_I2C : public U8X8 {
  public: U8X8_UC1611_EA_DOGXL240_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ea_dogxl240, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_UC1611_EA_DOGXL240_HW_I2C : public U8X8 {
  public: U8X8_UC1611_EA_DOGXL240_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ea_dogxl240, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_UC1611_EA_DOGXL240_2ND_HW_I2C : public U8X8 {
  public: U8X8_UC1611_EA_DOGXL240_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ea_dogxl240, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_UC1611_EW50850_4W_SW_SPI : public U8X8 {
  public: U8X8_UC1611_EW50850_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ew50850, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_UC1611_EW50850_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1611_EW50850_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ew50850, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1611_EW50850_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1611_EW50850_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ew50850, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1611_EW50850_3W_SW_SPI : public U8X8 {
  public: U8X8_UC1611_EW50850_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ew50850, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_UC1611_EW50850_3W_HW_SPI : public U8X8 {
  public: U8X8_UC1611_EW50850_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ew50850, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_UC1611_EW50850_6800 : public U8X8 {
  public: U8X8_UC1611_EW50850_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ew50850, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1611_EW50850_8080 : public U8X8 {
  public: U8X8_UC1611_EW50850_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ew50850, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1611_EW50850_SW_I2C : public U8X8 {
  public: U8X8_UC1611_EW50850_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ew50850, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_UC1611_EW50850_HW_I2C : public U8X8 {
  public: U8X8_UC1611_EW50850_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ew50850, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_UC1611_EW50850_2ND_HW_I2C : public U8X8 {
  public: U8X8_UC1611_EW50850_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ew50850, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_UC1611_CG160160_4W_SW_SPI : public U8X8 {
  public: U8X8_UC1611_CG160160_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_cg160160, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_UC1611_CG160160_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1611_CG160160_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_cg160160, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1611_CG160160_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1611_CG160160_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_cg160160, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1611_CG160160_3W_SW_SPI : public U8X8 {
  public: U8X8_UC1611_CG160160_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_cg160160, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_UC1611_CG160160_3W_HW_SPI : public U8X8 {
  public: U8X8_UC1611_CG160160_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_cg160160, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_UC1611_CG160160_6800 : public U8X8 {
  public: U8X8_UC1611_CG160160_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_cg160160, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1611_CG160160_8080 : public U8X8 {
  public: U8X8_UC1611_CG160160_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_cg160160, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1611_CG160160_SW_I2C : public U8X8 {
  public: U8X8_UC1611_CG160160_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_cg160160, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_UC1611_CG160160_HW_I2C : public U8X8 {
  public: U8X8_UC1611_CG160160_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_cg160160, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_UC1611_CG160160_2ND_HW_I2C : public U8X8 {
  public: U8X8_UC1611_CG160160_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_cg160160, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_UC1611_IDS4073_4W_SW_SPI : public U8X8 {
  public: U8X8_UC1611_IDS4073_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ids4073, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_UC1611_IDS4073_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1611_IDS4073_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ids4073, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1611_IDS4073_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1611_IDS4073_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ids4073, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1611_IDS4073_3W_SW_SPI : public U8X8 {
  public: U8X8_UC1611_IDS4073_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ids4073, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_UC1611_IDS4073_3W_HW_SPI : public U8X8 {
  public: U8X8_UC1611_IDS4073_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ids4073, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_UC1611_IDS4073_6800 : public U8X8 {
  public: U8X8_UC1611_IDS4073_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ids4073, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1611_IDS4073_8080 : public U8X8 {
  public: U8X8_UC1611_IDS4073_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ids4073, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1611_IDS4073_SW_I2C : public U8X8 {
  public: U8X8_UC1611_IDS4073_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ids4073, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_UC1611_IDS4073_HW_I2C : public U8X8 {
  public: U8X8_UC1611_IDS4073_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ids4073, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_UC1611_IDS4073_2ND_HW_I2C : public U8X8 {
  public: U8X8_UC1611_IDS4073_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1611_ids4073, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_ST7511_AVD_320X240_4W_SW_SPI : public U8X8 {
  public: U8X8_ST7511_AVD_320X240_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7511_avd_320x240, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST7511_AVD_320X240_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7511_AVD_320X240_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7511_avd_320x240, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7511_AVD_320X240_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7511_AVD_320X240_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7511_avd_320x240, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7511_AVD_320X240_3W_SW_SPI : public U8X8 {
  public: U8X8_ST7511_AVD_320X240_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7511_avd_320x240, u8x8_cad_011, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST7511_AVD_320X240_3W_HW_SPI : public U8X8 {
  public: U8X8_ST7511_AVD_320X240_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7511_avd_320x240, u8x8_cad_011, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7511_AVD_320X240_6800 : public U8X8 {
  public: U8X8_ST7511_AVD_320X240_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7511_avd_320x240, u8x8_cad_011, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7511_AVD_320X240_8080 : public U8X8 {
  public: U8X8_ST7511_AVD_320X240_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7511_avd_320x240, u8x8_cad_011, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7528_NHD_C160100_4W_SW_SPI : public U8X8 {
  public: U8X8_ST7528_NHD_C160100_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7528_nhd_c160100, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST7528_NHD_C160100_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7528_NHD_C160100_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7528_nhd_c160100, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7528_NHD_C160100_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7528_NHD_C160100_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7528_nhd_c160100, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7528_NHD_C160100_6800 : public U8X8 {
  public: U8X8_ST7528_NHD_C160100_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7528_nhd_c160100, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7528_NHD_C160100_8080 : public U8X8 {
  public: U8X8_ST7528_NHD_C160100_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7528_nhd_c160100, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7528_NHD_C160100_SW_I2C : public U8X8 {
  public: U8X8_ST7528_NHD_C160100_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7528_nhd_c160100, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_ST7528_NHD_C160100_HW_I2C : public U8X8 {
  public: U8X8_ST7528_NHD_C160100_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7528_nhd_c160100, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_ST7528_NHD_C160100_2ND_HW_I2C : public U8X8 {
  public: U8X8_ST7528_NHD_C160100_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7528_nhd_c160100, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_ST7528_ERC16064_4W_SW_SPI : public U8X8 {
  public: U8X8_ST7528_ERC16064_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7528_erc16064, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST7528_ERC16064_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7528_ERC16064_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7528_erc16064, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7528_ERC16064_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7528_ERC16064_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7528_erc16064, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7528_ERC16064_6800 : public U8X8 {
  public: U8X8_ST7528_ERC16064_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7528_erc16064, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7528_ERC16064_8080 : public U8X8 {
  public: U8X8_ST7528_ERC16064_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7528_erc16064, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7528_ERC16064_SW_I2C : public U8X8 {
  public: U8X8_ST7528_ERC16064_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7528_erc16064, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_ST7528_ERC16064_HW_I2C : public U8X8 {
  public: U8X8_ST7528_ERC16064_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7528_erc16064, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_ST7528_ERC16064_2ND_HW_I2C : public U8X8 {
  public: U8X8_ST7528_ERC16064_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7528_erc16064, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_UC1617_JLX128128_4W_SW_SPI : public U8X8 {
  public: U8X8_UC1617_JLX128128_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1617_jlx128128, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_UC1617_JLX128128_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1617_JLX128128_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1617_jlx128128, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1617_JLX128128_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1617_JLX128128_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1617_jlx128128, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1617_JLX128128_3W_SW_SPI : public U8X8 {
  public: U8X8_UC1617_JLX128128_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1617_jlx128128, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_UC1617_JLX128128_3W_HW_SPI : public U8X8 {
  public: U8X8_UC1617_JLX128128_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1617_jlx128128, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_UC1617_JLX128128_SW_I2C : public U8X8 {
  public: U8X8_UC1617_JLX128128_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1617_jlx128128, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_UC1617_JLX128128_HW_I2C : public U8X8 {
  public: U8X8_UC1617_JLX128128_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1617_jlx128128, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_UC1617_JLX128128_2ND_HW_I2C : public U8X8 {
  public: U8X8_UC1617_JLX128128_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1617_jlx128128, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_ST7565_EA_DOGM128_4W_SW_SPI : public U8X8 {
  public: U8X8_ST7565_EA_DOGM128_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_ea_dogm128, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST7565_EA_DOGM128_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_EA_DOGM128_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_ea_dogm128, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7565_EA_DOGM128_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_EA_DOGM128_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_ea_dogm128, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7565_EA_DOGM128_3W_SW_SPI : public U8X8 {
  public: U8X8_ST7565_EA_DOGM128_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_ea_dogm128, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST7565_EA_DOGM128_3W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_EA_DOGM128_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_ea_dogm128, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7565_EA_DOGM128_6800 : public U8X8 {
  public: U8X8_ST7565_EA_DOGM128_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_ea_dogm128, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7565_EA_DOGM128_8080 : public U8X8 {
  public: U8X8_ST7565_EA_DOGM128_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_ea_dogm128, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7565_LM6063_4W_SW_SPI : public U8X8 {
  public: U8X8_ST7565_LM6063_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_lm6063, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST7565_LM6063_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_LM6063_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_lm6063, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7565_LM6063_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_LM6063_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_lm6063, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7565_LM6063_3W_SW_SPI : public U8X8 {
  public: U8X8_ST7565_LM6063_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_lm6063, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST7565_LM6063_3W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_LM6063_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_lm6063, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7565_LM6063_6800 : public U8X8 {
  public: U8X8_ST7565_LM6063_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_lm6063, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7565_LM6063_8080 : public U8X8 {
  public: U8X8_ST7565_LM6063_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_lm6063, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7565_64128N_4W_SW_SPI : public U8X8 {
  public: U8X8_ST7565_64128N_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_64128n, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST7565_64128N_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_64128N_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_64128n, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7565_64128N_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_64128N_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_64128n, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7565_64128N_3W_SW_SPI : public U8X8 {
  public: U8X8_ST7565_64128N_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_64128n, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST7565_64128N_3W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_64128N_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_64128n, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7565_64128N_6800 : public U8X8 {
  public: U8X8_ST7565_64128N_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_64128n, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7565_64128N_8080 : public U8X8 {
  public: U8X8_ST7565_64128N_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_64128n, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7565_ZOLEN_128X64_4W_SW_SPI : public U8X8 {
  public: U8X8_ST7565_ZOLEN_128X64_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_zolen_128x64, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST7565_ZOLEN_128X64_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_ZOLEN_128X64_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_zolen_128x64, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7565_ZOLEN_128X64_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_ZOLEN_128X64_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_zolen_128x64, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7565_ZOLEN_128X64_3W_SW_SPI : public U8X8 {
  public: U8X8_ST7565_ZOLEN_128X64_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_zolen_128x64, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST7565_ZOLEN_128X64_3W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_ZOLEN_128X64_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_zolen_128x64, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7565_ZOLEN_128X64_6800 : public U8X8 {
  public: U8X8_ST7565_ZOLEN_128X64_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_zolen_128x64, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7565_ZOLEN_128X64_8080 : public U8X8 {
  public: U8X8_ST7565_ZOLEN_128X64_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_zolen_128x64, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7565_LM6059_4W_SW_SPI : public U8X8 {
  public: U8X8_ST7565_LM6059_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_lm6059, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST7565_LM6059_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_LM6059_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_lm6059, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7565_LM6059_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_LM6059_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_lm6059, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7565_LM6059_3W_SW_SPI : public U8X8 {
  public: U8X8_ST7565_LM6059_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_lm6059, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST7565_LM6059_3W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_LM6059_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_lm6059, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7565_LM6059_6800 : public U8X8 {
  public: U8X8_ST7565_LM6059_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_lm6059, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7565_LM6059_8080 : public U8X8 {
  public: U8X8_ST7565_LM6059_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_lm6059, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7565_KS0713_4W_SW_SPI : public U8X8 {
  public: U8X8_ST7565_KS0713_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_ks0713, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST7565_KS0713_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_KS0713_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_ks0713, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7565_KS0713_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_KS0713_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_ks0713, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7565_KS0713_3W_SW_SPI : public U8X8 {
  public: U8X8_ST7565_KS0713_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_ks0713, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST7565_KS0713_3W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_KS0713_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_ks0713, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7565_KS0713_6800 : public U8X8 {
  public: U8X8_ST7565_KS0713_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_ks0713, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7565_KS0713_8080 : public U8X8 {
  public: U8X8_ST7565_KS0713_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_ks0713, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7565_LX12864_4W_SW_SPI : public U8X8 {
  public: U8X8_ST7565_LX12864_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_lx12864, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST7565_LX12864_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_LX12864_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_lx12864, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7565_LX12864_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_LX12864_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_lx12864, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7565_LX12864_3W_SW_SPI : public U8X8 {
  public: U8X8_ST7565_LX12864_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_lx12864, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST7565_LX12864_3W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_LX12864_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_lx12864, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7565_LX12864_6800 : public U8X8 {
  public: U8X8_ST7565_LX12864_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_lx12864, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7565_LX12864_8080 : public U8X8 {
  public: U8X8_ST7565_LX12864_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_lx12864, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7565_ERC12864_4W_SW_SPI : public U8X8 {
  public: U8X8_ST7565_ERC12864_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_erc12864, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST7565_ERC12864_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_ERC12864_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_erc12864, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7565_ERC12864_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_ERC12864_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_erc12864, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7565_ERC12864_3W_SW_SPI : public U8X8 {
  public: U8X8_ST7565_ERC12864_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_erc12864, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST7565_ERC12864_3W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_ERC12864_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_erc12864, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7565_ERC12864_6800 : public U8X8 {
  public: U8X8_ST7565_ERC12864_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_erc12864, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7565_ERC12864_8080 : public U8X8 {
  public: U8X8_ST7565_ERC12864_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_erc12864, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7565_ERC12864_ALT_4W_SW_SPI : public U8X8 {
  public: U8X8_ST7565_ERC12864_ALT_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_erc12864_alt, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST7565_ERC12864_ALT_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_ERC12864_ALT_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_erc12864_alt, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7565_ERC12864_ALT_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_ERC12864_ALT_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_erc12864_alt, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7565_ERC12864_ALT_3W_SW_SPI : public U8X8 {
  public: U8X8_ST7565_ERC12864_ALT_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_erc12864_alt, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST7565_ERC12864_ALT_3W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_ERC12864_ALT_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_erc12864_alt, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7565_ERC12864_ALT_6800 : public U8X8 {
  public: U8X8_ST7565_ERC12864_ALT_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_erc12864_alt, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7565_ERC12864_ALT_8080 : public U8X8 {
  public: U8X8_ST7565_ERC12864_ALT_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_erc12864_alt, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7565_NHD_C12864_4W_SW_SPI : public U8X8 {
  public: U8X8_ST7565_NHD_C12864_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_nhd_c12864, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST7565_NHD_C12864_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_NHD_C12864_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_nhd_c12864, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7565_NHD_C12864_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_NHD_C12864_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_nhd_c12864, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7565_NHD_C12864_3W_SW_SPI : public U8X8 {
  public: U8X8_ST7565_NHD_C12864_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_nhd_c12864, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST7565_NHD_C12864_3W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_NHD_C12864_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_nhd_c12864, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7565_NHD_C12864_6800 : public U8X8 {
  public: U8X8_ST7565_NHD_C12864_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_nhd_c12864, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7565_NHD_C12864_8080 : public U8X8 {
  public: U8X8_ST7565_NHD_C12864_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_nhd_c12864, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7565_JLX12864_4W_SW_SPI : public U8X8 {
  public: U8X8_ST7565_JLX12864_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_jlx12864, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST7565_JLX12864_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_JLX12864_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_jlx12864, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7565_JLX12864_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_JLX12864_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_jlx12864, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7565_JLX12864_3W_SW_SPI : public U8X8 {
  public: U8X8_ST7565_JLX12864_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_jlx12864, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST7565_JLX12864_3W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_JLX12864_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_jlx12864, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7565_JLX12864_6800 : public U8X8 {
  public: U8X8_ST7565_JLX12864_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_jlx12864, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7565_JLX12864_8080 : public U8X8 {
  public: U8X8_ST7565_JLX12864_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_jlx12864, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7565_NHD_C12832_4W_SW_SPI : public U8X8 {
  public: U8X8_ST7565_NHD_C12832_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_nhd_c12832, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST7565_NHD_C12832_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_NHD_C12832_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_nhd_c12832, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7565_NHD_C12832_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_NHD_C12832_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_nhd_c12832, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7565_NHD_C12832_3W_SW_SPI : public U8X8 {
  public: U8X8_ST7565_NHD_C12832_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_nhd_c12832, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST7565_NHD_C12832_3W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_NHD_C12832_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_nhd_c12832, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7565_NHD_C12832_6800 : public U8X8 {
  public: U8X8_ST7565_NHD_C12832_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_nhd_c12832, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7565_NHD_C12832_8080 : public U8X8 {
  public: U8X8_ST7565_NHD_C12832_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_nhd_c12832, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7539_192X64_4W_SW_SPI : public U8X8 {
  public: U8X8_ST7539_192X64_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7539_192x64, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST7539_192X64_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7539_192X64_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7539_192x64, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7539_192X64_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7539_192X64_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7539_192x64, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7539_192X64_3W_SW_SPI : public U8X8 {
  public: U8X8_ST7539_192X64_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7539_192x64, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST7539_192X64_3W_HW_SPI : public U8X8 {
  public: U8X8_ST7539_192X64_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7539_192x64, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7539_192X64_6800 : public U8X8 {
  public: U8X8_ST7539_192X64_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7539_192x64, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7539_192X64_8080 : public U8X8 {
  public: U8X8_ST7539_192X64_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7539_192x64, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7539_192X64_SW_I2C : public U8X8 {
  public: U8X8_ST7539_192X64_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7539_192x64, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_ST7539_192X64_HW_I2C : public U8X8 {
  public: U8X8_ST7539_192X64_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7539_192x64, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_ST7539_192X64_2ND_HW_I2C : public U8X8 {
  public: U8X8_ST7539_192X64_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7539_192x64, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_UC1601_128X32_4W_SW_SPI : public U8X8 {
  public: U8X8_UC1601_128X32_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1601_128x32, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_UC1601_128X32_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1601_128X32_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1601_128x32, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1601_128X32_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1601_128X32_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1601_128x32, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1601_128X32_3W_SW_SPI : public U8X8 {
  public: U8X8_UC1601_128X32_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1601_128x32, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_UC1601_128X32_3W_HW_SPI : public U8X8 {
  public: U8X8_UC1601_128X32_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1601_128x32, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_UC1601_128X32_6800 : public U8X8 {
  public: U8X8_UC1601_128X32_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1601_128x32, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1601_128X32_8080 : public U8X8 {
  public: U8X8_UC1601_128X32_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1601_128x32, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1601_128X32_SW_I2C : public U8X8 {
  public: U8X8_UC1601_128X32_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1601_128x32, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_UC1601_128X32_HW_I2C : public U8X8 {
  public: U8X8_UC1601_128X32_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1601_128x32, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_UC1601_128X32_2ND_HW_I2C : public U8X8 {
  public: U8X8_UC1601_128X32_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1601_128x32, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_UC1601_128X64_4W_SW_SPI : public U8X8 {
  public: U8X8_UC1601_128X64_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1601_128x64, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_UC1601_128X64_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1601_128X64_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1601_128x64, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1601_128X64_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_UC1601_128X64_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1601_128x64, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_UC1601_128X64_3W_SW_SPI : public U8X8 {
  public: U8X8_UC1601_128X64_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1601_128x64, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_UC1601_128X64_3W_HW_SPI : public U8X8 {
  public: U8X8_UC1601_128X64_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1601_128x64, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_UC1601_128X64_6800 : public U8X8 {
  public: U8X8_UC1601_128X64_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1601_128x64, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1601_128X64_8080 : public U8X8 {
  public: U8X8_UC1601_128X64_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1601_128x64, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_UC1601_128X64_SW_I2C : public U8X8 {
  public: U8X8_UC1601_128X64_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1601_128x64, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_UC1601_128X64_HW_I2C : public U8X8 {
  public: U8X8_UC1601_128X64_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1601_128x64, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_UC1601_128X64_2ND_HW_I2C : public U8X8 {
  public: U8X8_UC1601_128X64_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_uc1601_128x64, u8x8_cad_uc16xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_ST7565_EA_DOGM132_4W_SW_SPI : public U8X8 {
  public: U8X8_ST7565_EA_DOGM132_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_ea_dogm132, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST7565_EA_DOGM132_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_EA_DOGM132_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_ea_dogm132, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7565_EA_DOGM132_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_EA_DOGM132_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_ea_dogm132, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7565_EA_DOGM132_3W_SW_SPI : public U8X8 {
  public: U8X8_ST7565_EA_DOGM132_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_ea_dogm132, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST7565_EA_DOGM132_3W_HW_SPI : public U8X8 {
  public: U8X8_ST7565_EA_DOGM132_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_ea_dogm132, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7565_EA_DOGM132_6800 : public U8X8 {
  public: U8X8_ST7565_EA_DOGM132_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_ea_dogm132, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7565_EA_DOGM132_8080 : public U8X8 {
  public: U8X8_ST7565_EA_DOGM132_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7565_ea_dogm132, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7567_PI_132X64_4W_SW_SPI : public U8X8 {
  public: U8X8_ST7567_PI_132X64_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_pi_132x64, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST7567_PI_132X64_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7567_PI_132X64_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_pi_132x64, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7567_PI_132X64_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7567_PI_132X64_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_pi_132x64, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7567_PI_132X64_3W_SW_SPI : public U8X8 {
  public: U8X8_ST7567_PI_132X64_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_pi_132x64, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST7567_PI_132X64_3W_HW_SPI : public U8X8 {
  public: U8X8_ST7567_PI_132X64_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_pi_132x64, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7567_PI_132X64_6800 : public U8X8 {
  public: U8X8_ST7567_PI_132X64_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_pi_132x64, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7567_PI_132X64_8080 : public U8X8 {
  public: U8X8_ST7567_PI_132X64_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_pi_132x64, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7567_PI_132X64_SW_I2C : public U8X8 {
  public: U8X8_ST7567_PI_132X64_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_pi_132x64, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_ST7567_PI_132X64_HW_I2C : public U8X8 {
  public: U8X8_ST7567_PI_132X64_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_pi_132x64, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_ST7567_PI_132X64_2ND_HW_I2C : public U8X8 {
  public: U8X8_ST7567_PI_132X64_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_pi_132x64, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_ST7567_JLX12864_4W_SW_SPI : public U8X8 {
  public: U8X8_ST7567_JLX12864_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_jlx12864, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST7567_JLX12864_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7567_JLX12864_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_jlx12864, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7567_JLX12864_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7567_JLX12864_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_jlx12864, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7567_JLX12864_3W_SW_SPI : public U8X8 {
  public: U8X8_ST7567_JLX12864_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_jlx12864, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST7567_JLX12864_3W_HW_SPI : public U8X8 {
  public: U8X8_ST7567_JLX12864_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_jlx12864, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7567_JLX12864_6800 : public U8X8 {
  public: U8X8_ST7567_JLX12864_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_jlx12864, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7567_JLX12864_8080 : public U8X8 {
  public: U8X8_ST7567_JLX12864_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_jlx12864, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7567_ENH_DG128064_4W_SW_SPI : public U8X8 {
  public: U8X8_ST7567_ENH_DG128064_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_enh_dg128064, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST7567_ENH_DG128064_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7567_ENH_DG128064_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_enh_dg128064, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7567_ENH_DG128064_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7567_ENH_DG128064_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_enh_dg128064, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7567_ENH_DG128064_3W_SW_SPI : public U8X8 {
  public: U8X8_ST7567_ENH_DG128064_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_enh_dg128064, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST7567_ENH_DG128064_3W_HW_SPI : public U8X8 {
  public: U8X8_ST7567_ENH_DG128064_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_enh_dg128064, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7567_ENH_DG128064_6800 : public U8X8 {
  public: U8X8_ST7567_ENH_DG128064_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_enh_dg128064, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7567_ENH_DG128064_8080 : public U8X8 {
  public: U8X8_ST7567_ENH_DG128064_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_enh_dg128064, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7567_ENH_DG128064I_4W_SW_SPI : public U8X8 {
  public: U8X8_ST7567_ENH_DG128064I_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_enh_dg128064i, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST7567_ENH_DG128064I_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7567_ENH_DG128064I_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_enh_dg128064i, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7567_ENH_DG128064I_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7567_ENH_DG128064I_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_enh_dg128064i, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7567_ENH_DG128064I_3W_SW_SPI : public U8X8 {
  public: U8X8_ST7567_ENH_DG128064I_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_enh_dg128064i, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST7567_ENH_DG128064I_3W_HW_SPI : public U8X8 {
  public: U8X8_ST7567_ENH_DG128064I_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_enh_dg128064i, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7567_ENH_DG128064I_6800 : public U8X8 {
  public: U8X8_ST7567_ENH_DG128064I_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_enh_dg128064i, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7567_ENH_DG128064I_8080 : public U8X8 {
  public: U8X8_ST7567_ENH_DG128064I_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_enh_dg128064i, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7567_OS12864_4W_SW_SPI : public U8X8 {
  public: U8X8_ST7567_OS12864_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_os12864, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST7567_OS12864_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7567_OS12864_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_os12864, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7567_OS12864_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7567_OS12864_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_os12864, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7567_OS12864_3W_SW_SPI : public U8X8 {
  public: U8X8_ST7567_OS12864_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_os12864, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST7567_OS12864_3W_HW_SPI : public U8X8 {
  public: U8X8_ST7567_OS12864_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_os12864, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7567_OS12864_6800 : public U8X8 {
  public: U8X8_ST7567_OS12864_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_os12864, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7567_OS12864_8080 : public U8X8 {
  public: U8X8_ST7567_OS12864_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_os12864, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7567_JLX12864_SW_I2C : public U8X8 {
  public: U8X8_ST7567_JLX12864_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_jlx12864, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_ST7567_JLX12864_HW_I2C : public U8X8 {
  public: U8X8_ST7567_JLX12864_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_jlx12864, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_ST7567_JLX12864_2ND_HW_I2C : public U8X8 {
  public: U8X8_ST7567_JLX12864_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_jlx12864, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_ST7567_ENH_DG128064_SW_I2C : public U8X8 {
  public: U8X8_ST7567_ENH_DG128064_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_enh_dg128064, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_ST7567_ENH_DG128064_HW_I2C : public U8X8 {
  public: U8X8_ST7567_ENH_DG128064_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_enh_dg128064, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_ST7567_ENH_DG128064_2ND_HW_I2C : public U8X8 {
  public: U8X8_ST7567_ENH_DG128064_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_enh_dg128064, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_ST7567_ENH_DG128064I_SW_I2C : public U8X8 {
  public: U8X8_ST7567_ENH_DG128064I_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_enh_dg128064i, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_ST7567_ENH_DG128064I_HW_I2C : public U8X8 {
  public: U8X8_ST7567_ENH_DG128064I_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_enh_dg128064i, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_ST7567_ENH_DG128064I_2ND_HW_I2C : public U8X8 {
  public: U8X8_ST7567_ENH_DG128064I_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_enh_dg128064i, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_ST7567_OS12864_SW_I2C : public U8X8 {
  public: U8X8_ST7567_OS12864_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_os12864, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_ST7567_OS12864_HW_I2C : public U8X8 {
  public: U8X8_ST7567_OS12864_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_os12864, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_ST7567_OS12864_2ND_HW_I2C : public U8X8 {
  public: U8X8_ST7567_OS12864_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_os12864, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_ST7567_ERC13232_4W_SW_SPI : public U8X8 {
  public: U8X8_ST7567_ERC13232_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_erc13232, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST7567_ERC13232_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7567_ERC13232_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_erc13232, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7567_ERC13232_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7567_ERC13232_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_erc13232, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7567_ERC13232_3W_SW_SPI : public U8X8 {
  public: U8X8_ST7567_ERC13232_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_erc13232, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST7567_ERC13232_3W_HW_SPI : public U8X8 {
  public: U8X8_ST7567_ERC13232_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_erc13232, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7567_ERC13232_6800 : public U8X8 {
  public: U8X8_ST7567_ERC13232_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_erc13232, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7567_ERC13232_8080 : public U8X8 {
  public: U8X8_ST7567_ERC13232_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_erc13232, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7567_ERC13232_SW_I2C : public U8X8 {
  public: U8X8_ST7567_ERC13232_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_erc13232, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_ST7567_ERC13232_HW_I2C : public U8X8 {
  public: U8X8_ST7567_ERC13232_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_erc13232, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_ST7567_ERC13232_2ND_HW_I2C : public U8X8 {
  public: U8X8_ST7567_ERC13232_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_erc13232, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_ST7567_96X65_4W_SW_SPI : public U8X8 {
  public: U8X8_ST7567_96X65_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_96x65, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST7567_96X65_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7567_96X65_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_96x65, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7567_96X65_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7567_96X65_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_96x65, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7567_96X65_3W_SW_SPI : public U8X8 {
  public: U8X8_ST7567_96X65_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_96x65, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST7567_96X65_3W_HW_SPI : public U8X8 {
  public: U8X8_ST7567_96X65_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_96x65, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7567_96X65_6800 : public U8X8 {
  public: U8X8_ST7567_96X65_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_96x65, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7567_96X65_8080 : public U8X8 {
  public: U8X8_ST7567_96X65_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_96x65, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7567_96X65_SW_I2C : public U8X8 {
  public: U8X8_ST7567_96X65_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_96x65, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_ST7567_96X65_HW_I2C : public U8X8 {
  public: U8X8_ST7567_96X65_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_96x65, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_ST7567_96X65_2ND_HW_I2C : public U8X8 {
  public: U8X8_ST7567_96X65_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_96x65, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_ST7567_122X32_4W_SW_SPI : public U8X8 {
  public: U8X8_ST7567_122X32_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_122x32, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST7567_122X32_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7567_122X32_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_122x32, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7567_122X32_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7567_122X32_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_122x32, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7567_122X32_3W_SW_SPI : public U8X8 {
  public: U8X8_ST7567_122X32_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_122x32, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST7567_122X32_3W_HW_SPI : public U8X8 {
  public: U8X8_ST7567_122X32_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_122x32, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7567_122X32_6800 : public U8X8 {
  public: U8X8_ST7567_122X32_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_122x32, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7567_122X32_8080 : public U8X8 {
  public: U8X8_ST7567_122X32_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_122x32, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7567_122X32_SW_I2C : public U8X8 {
  public: U8X8_ST7567_122X32_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_122x32, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_ST7567_122X32_HW_I2C : public U8X8 {
  public: U8X8_ST7567_122X32_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_122x32, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_ST7567_122X32_2ND_HW_I2C : public U8X8 {
  public: U8X8_ST7567_122X32_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_122x32, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_ST7567_64X32_4W_SW_SPI : public U8X8 {
  public: U8X8_ST7567_64X32_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_64x32, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST7567_64X32_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7567_64X32_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_64x32, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7567_64X32_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7567_64X32_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_64x32, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7567_64X32_3W_SW_SPI : public U8X8 {
  public: U8X8_ST7567_64X32_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_64x32, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST7567_64X32_3W_HW_SPI : public U8X8 {
  public: U8X8_ST7567_64X32_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_64x32, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7567_64X32_6800 : public U8X8 {
  public: U8X8_ST7567_64X32_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_64x32, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7567_64X32_8080 : public U8X8 {
  public: U8X8_ST7567_64X32_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_64x32, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7567_HEM6432_4W_SW_SPI : public U8X8 {
  public: U8X8_ST7567_HEM6432_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_hem6432, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST7567_HEM6432_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7567_HEM6432_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_hem6432, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7567_HEM6432_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7567_HEM6432_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_hem6432, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7567_HEM6432_3W_SW_SPI : public U8X8 {
  public: U8X8_ST7567_HEM6432_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_hem6432, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST7567_HEM6432_3W_HW_SPI : public U8X8 {
  public: U8X8_ST7567_HEM6432_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_hem6432, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7567_HEM6432_6800 : public U8X8 {
  public: U8X8_ST7567_HEM6432_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_hem6432, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7567_HEM6432_8080 : public U8X8 {
  public: U8X8_ST7567_HEM6432_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_hem6432, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7567_64X32_SW_I2C : public U8X8 {
  public: U8X8_ST7567_64X32_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_64x32, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_ST7567_64X32_HW_I2C : public U8X8 {
  public: U8X8_ST7567_64X32_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_64x32, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_ST7567_64X32_2ND_HW_I2C : public U8X8 {
  public: U8X8_ST7567_64X32_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_64x32, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_ST7567_HEM6432_SW_I2C : public U8X8 {
  public: U8X8_ST7567_HEM6432_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_hem6432, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_ST7567_HEM6432_HW_I2C : public U8X8 {
  public: U8X8_ST7567_HEM6432_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_hem6432, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_ST7567_HEM6432_2ND_HW_I2C : public U8X8 {
  public: U8X8_ST7567_HEM6432_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_hem6432, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_ST7567_LW12832_4W_SW_SPI : public U8X8 {
  public: U8X8_ST7567_LW12832_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_lw12832, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST7567_LW12832_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7567_LW12832_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_lw12832, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7567_LW12832_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7567_LW12832_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_lw12832, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7567_LW12832_3W_SW_SPI : public U8X8 {
  public: U8X8_ST7567_LW12832_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_lw12832, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST7567_LW12832_3W_HW_SPI : public U8X8 {
  public: U8X8_ST7567_LW12832_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_lw12832, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7567_LW12832_6800 : public U8X8 {
  public: U8X8_ST7567_LW12832_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_lw12832, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7567_LW12832_8080 : public U8X8 {
  public: U8X8_ST7567_LW12832_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_lw12832, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7567_LW12832_SW_I2C : public U8X8 {
  public: U8X8_ST7567_LW12832_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_lw12832, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_ST7567_LW12832_HW_I2C : public U8X8 {
  public: U8X8_ST7567_LW12832_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_lw12832, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_ST7567_LW12832_2ND_HW_I2C : public U8X8 {
  public: U8X8_ST7567_LW12832_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7567_lw12832, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_ST7571_128X128_4W_SW_SPI : public U8X8 {
  public: U8X8_ST7571_128X128_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7571_128x128, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST7571_128X128_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7571_128X128_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7571_128x128, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7571_128X128_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7571_128X128_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7571_128x128, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7571_128X128_6800 : public U8X8 {
  public: U8X8_ST7571_128X128_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7571_128x128, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7571_128X128_8080 : public U8X8 {
  public: U8X8_ST7571_128X128_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7571_128x128, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7571_128X128_SW_I2C : public U8X8 {
  public: U8X8_ST7571_128X128_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7571_128x128, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_ST7571_128X128_HW_I2C : public U8X8 {
  public: U8X8_ST7571_128X128_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7571_128x128, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_ST7571_128X128_2ND_HW_I2C : public U8X8 {
  public: U8X8_ST7571_128X128_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7571_128x128, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_ST7571_128X96_4W_SW_SPI : public U8X8 {
  public: U8X8_ST7571_128X96_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7571_128x96, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST7571_128X96_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7571_128X96_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7571_128x96, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7571_128X96_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7571_128X96_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7571_128x96, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7571_128X96_6800 : public U8X8 {
  public: U8X8_ST7571_128X96_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7571_128x96, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7571_128X96_8080 : public U8X8 {
  public: U8X8_ST7571_128X96_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7571_128x96, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7571_128X96_SW_I2C : public U8X8 {
  public: U8X8_ST7571_128X96_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7571_128x96, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_ST7571_128X96_HW_I2C : public U8X8 {
  public: U8X8_ST7571_128X96_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7571_128x96, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_ST7571_128X96_2ND_HW_I2C : public U8X8 {
  public: U8X8_ST7571_128X96_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7571_128x96, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_ST7586S_S028HN118A_4W_SW_SPI : public U8X8 {
  public: U8X8_ST7586S_S028HN118A_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7586s_s028hn118a, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST7586S_S028HN118A_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7586S_S028HN118A_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7586s_s028hn118a, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7586S_S028HN118A_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7586S_S028HN118A_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7586s_s028hn118a, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7586S_JLX384160_4W_SW_SPI : public U8X8 {
  public: U8X8_ST7586S_JLX384160_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7586s_jlx384160, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST7586S_JLX384160_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7586S_JLX384160_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7586s_jlx384160, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7586S_JLX384160_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7586S_JLX384160_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7586s_jlx384160, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7586S_ERC240160_4W_SW_SPI : public U8X8 {
  public: U8X8_ST7586S_ERC240160_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7586s_erc240160, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST7586S_ERC240160_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7586S_ERC240160_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7586s_erc240160, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7586S_ERC240160_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7586S_ERC240160_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7586s_erc240160, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7586S_ERC240160_3W_SW_SPI : public U8X8 {
  public: U8X8_ST7586S_ERC240160_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7586s_erc240160, u8x8_cad_011, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST7586S_ERC240160_3W_HW_SPI : public U8X8 {
  public: U8X8_ST7586S_ERC240160_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7586s_erc240160, u8x8_cad_011, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7586S_ERC240160_6800 : public U8X8 {
  public: U8X8_ST7586S_ERC240160_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7586s_erc240160, u8x8_cad_011, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7586S_ERC240160_8080 : public U8X8 {
  public: U8X8_ST7586S_ERC240160_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7586s_erc240160, u8x8_cad_011, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7586S_YMC240160_4W_SW_SPI : public U8X8 {
  public: U8X8_ST7586S_YMC240160_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7586s_ymc240160, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST7586S_YMC240160_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7586S_YMC240160_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7586s_ymc240160, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7586S_YMC240160_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7586S_YMC240160_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7586s_ymc240160, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7586S_YMC240160_3W_SW_SPI : public U8X8 {
  public: U8X8_ST7586S_YMC240160_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7586s_ymc240160, u8x8_cad_011, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST7586S_YMC240160_3W_HW_SPI : public U8X8 {
  public: U8X8_ST7586S_YMC240160_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7586s_ymc240160, u8x8_cad_011, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7586S_YMC240160_6800 : public U8X8 {
  public: U8X8_ST7586S_YMC240160_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7586s_ymc240160, u8x8_cad_011, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7586S_YMC240160_8080 : public U8X8 {
  public: U8X8_ST7586S_YMC240160_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7586s_ymc240160, u8x8_cad_011, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7586S_JLX320160_4W_SW_SPI : public U8X8 {
  public: U8X8_ST7586S_JLX320160_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7586s_jlx320160, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST7586S_JLX320160_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7586S_JLX320160_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7586s_jlx320160, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7586S_JLX320160_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7586S_JLX320160_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7586s_jlx320160, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7586S_JLX320160_3W_SW_SPI : public U8X8 {
  public: U8X8_ST7586S_JLX320160_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7586s_jlx320160, u8x8_cad_011, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST7586S_JLX320160_3W_HW_SPI : public U8X8 {
  public: U8X8_ST7586S_JLX320160_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7586s_jlx320160, u8x8_cad_011, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7586S_JLX320160_6800 : public U8X8 {
  public: U8X8_ST7586S_JLX320160_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7586s_jlx320160, u8x8_cad_011, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7586S_JLX320160_8080 : public U8X8 {
  public: U8X8_ST7586S_JLX320160_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7586s_jlx320160, u8x8_cad_011, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7588_JLX12864_4W_SW_SPI : public U8X8 {
  public: U8X8_ST7588_JLX12864_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7588_jlx12864, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST7588_JLX12864_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7588_JLX12864_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7588_jlx12864, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7588_JLX12864_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST7588_JLX12864_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7588_jlx12864, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST7588_JLX12864_3W_SW_SPI : public U8X8 {
  public: U8X8_ST7588_JLX12864_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7588_jlx12864, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST7588_JLX12864_3W_HW_SPI : public U8X8 {
  public: U8X8_ST7588_JLX12864_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7588_jlx12864, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST7588_JLX12864_6800 : public U8X8 {
  public: U8X8_ST7588_JLX12864_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7588_jlx12864, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7588_JLX12864_8080 : public U8X8 {
  public: U8X8_ST7588_JLX12864_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7588_jlx12864, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST7588_JLX12864_SW_I2C : public U8X8 {
  public: U8X8_ST7588_JLX12864_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7588_jlx12864, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_ST7588_JLX12864_HW_I2C : public U8X8 {
  public: U8X8_ST7588_JLX12864_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7588_jlx12864, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_ST7588_JLX12864_2ND_HW_I2C : public U8X8 {
  public: U8X8_ST7588_JLX12864_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st7588_jlx12864, u8x8_cad_ssd13xx_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_ST75160_JM16096_4W_SW_SPI : public U8X8 {
  public: U8X8_ST75160_JM16096_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75160_jm16096, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST75160_JM16096_4W_HW_SPI : public U8X8 {
  public: U8X8_ST75160_JM16096_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75160_jm16096, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST75160_JM16096_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST75160_JM16096_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75160_jm16096, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST75160_JM16096_3W_SW_SPI : public U8X8 {
  public: U8X8_ST75160_JM16096_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75160_jm16096, u8x8_cad_011, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST75160_JM16096_3W_HW_SPI : public U8X8 {
  public: U8X8_ST75160_JM16096_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75160_jm16096, u8x8_cad_011, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST75160_JM16096_6800 : public U8X8 {
  public: U8X8_ST75160_JM16096_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75160_jm16096, u8x8_cad_011, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST75160_JM16096_8080 : public U8X8 {
  public: U8X8_ST75160_JM16096_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75160_jm16096, u8x8_cad_011, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST75160_JM16096_SW_I2C : public U8X8 {
  public: U8X8_ST75160_JM16096_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75160_jm16096, u8x8_cad_st75256_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_ST75160_JM16096_HW_I2C : public U8X8 {
  public: U8X8_ST75160_JM16096_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75160_jm16096, u8x8_cad_st75256_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_ST75160_JM16096_2ND_HW_I2C : public U8X8 {
  public: U8X8_ST75160_JM16096_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75160_jm16096, u8x8_cad_st75256_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_ST75256_JLX256128_4W_SW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX256128_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256128, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST75256_JLX256128_4W_HW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX256128_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256128, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST75256_JLX256128_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX256128_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256128, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST75256_JLX256128_3W_SW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX256128_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256128, u8x8_cad_011, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST75256_JLX256128_3W_HW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX256128_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256128, u8x8_cad_011, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST75256_JLX256128_6800 : public U8X8 {
  public: U8X8_ST75256_JLX256128_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256128, u8x8_cad_011, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST75256_JLX256128_8080 : public U8X8 {
  public: U8X8_ST75256_JLX256128_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256128, u8x8_cad_011, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST75256_WO256X128_4W_SW_SPI : public U8X8 {
  public: U8X8_ST75256_WO256X128_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_wo256x128, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST75256_WO256X128_4W_HW_SPI : public U8X8 {
  public: U8X8_ST75256_WO256X128_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_wo256x128, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST75256_WO256X128_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST75256_WO256X128_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_wo256x128, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST75256_WO256X128_3W_SW_SPI : public U8X8 {
  public: U8X8_ST75256_WO256X128_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_wo256x128, u8x8_cad_011, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST75256_WO256X128_3W_HW_SPI : public U8X8 {
  public: U8X8_ST75256_WO256X128_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_wo256x128, u8x8_cad_011, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST75256_WO256X128_6800 : public U8X8 {
  public: U8X8_ST75256_WO256X128_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_wo256x128, u8x8_cad_011, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST75256_WO256X128_8080 : public U8X8 {
  public: U8X8_ST75256_WO256X128_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_wo256x128, u8x8_cad_011, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST75256_JLX256128_SW_I2C : public U8X8 {
  public: U8X8_ST75256_JLX256128_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256128, u8x8_cad_st75256_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_ST75256_JLX256128_HW_I2C : public U8X8 {
  public: U8X8_ST75256_JLX256128_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256128, u8x8_cad_st75256_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_ST75256_JLX256128_2ND_HW_I2C : public U8X8 {
  public: U8X8_ST75256_JLX256128_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256128, u8x8_cad_st75256_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_ST75256_WO256X128_SW_I2C : public U8X8 {
  public: U8X8_ST75256_WO256X128_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_wo256x128, u8x8_cad_st75256_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_ST75256_WO256X128_HW_I2C : public U8X8 {
  public: U8X8_ST75256_WO256X128_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_wo256x128, u8x8_cad_st75256_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_ST75256_WO256X128_2ND_HW_I2C : public U8X8 {
  public: U8X8_ST75256_WO256X128_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_wo256x128, u8x8_cad_st75256_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_ST75256_JLX256160_4W_SW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX256160_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256160, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST75256_JLX256160_4W_HW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX256160_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256160, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST75256_JLX256160_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX256160_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256160, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST75256_JLX256160_3W_SW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX256160_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256160, u8x8_cad_011, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST75256_JLX256160_3W_HW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX256160_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256160, u8x8_cad_011, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST75256_JLX256160_6800 : public U8X8 {
  public: U8X8_ST75256_JLX256160_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256160, u8x8_cad_011, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST75256_JLX256160_8080 : public U8X8 {
  public: U8X8_ST75256_JLX256160_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256160, u8x8_cad_011, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST75256_JLX256160M_4W_SW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX256160M_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256160m, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST75256_JLX256160M_4W_HW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX256160M_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256160m, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST75256_JLX256160M_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX256160M_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256160m, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST75256_JLX256160M_3W_SW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX256160M_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256160m, u8x8_cad_011, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST75256_JLX256160M_3W_HW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX256160M_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256160m, u8x8_cad_011, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST75256_JLX256160M_6800 : public U8X8 {
  public: U8X8_ST75256_JLX256160M_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256160m, u8x8_cad_011, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST75256_JLX256160M_8080 : public U8X8 {
  public: U8X8_ST75256_JLX256160M_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256160m, u8x8_cad_011, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST75256_JLX256160_ALT_4W_SW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX256160_ALT_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256160_alt, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST75256_JLX256160_ALT_4W_HW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX256160_ALT_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256160_alt, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST75256_JLX256160_ALT_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX256160_ALT_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256160_alt, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST75256_JLX256160_ALT_3W_SW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX256160_ALT_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256160_alt, u8x8_cad_011, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST75256_JLX256160_ALT_3W_HW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX256160_ALT_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256160_alt, u8x8_cad_011, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST75256_JLX256160_ALT_6800 : public U8X8 {
  public: U8X8_ST75256_JLX256160_ALT_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256160_alt, u8x8_cad_011, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST75256_JLX256160_ALT_8080 : public U8X8 {
  public: U8X8_ST75256_JLX256160_ALT_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256160_alt, u8x8_cad_011, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST75256_JLX256160_SW_I2C : public U8X8 {
  public: U8X8_ST75256_JLX256160_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256160, u8x8_cad_st75256_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_ST75256_JLX256160_HW_I2C : public U8X8 {
  public: U8X8_ST75256_JLX256160_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256160, u8x8_cad_st75256_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_ST75256_JLX256160_2ND_HW_I2C : public U8X8 {
  public: U8X8_ST75256_JLX256160_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256160, u8x8_cad_st75256_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_ST75256_JLX256160M_SW_I2C : public U8X8 {
  public: U8X8_ST75256_JLX256160M_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256160m, u8x8_cad_st75256_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_ST75256_JLX256160M_HW_I2C : public U8X8 {
  public: U8X8_ST75256_JLX256160M_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256160m, u8x8_cad_st75256_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_ST75256_JLX256160M_2ND_HW_I2C : public U8X8 {
  public: U8X8_ST75256_JLX256160M_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256160m, u8x8_cad_st75256_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_ST75256_JLX256160_ALT_SW_I2C : public U8X8 {
  public: U8X8_ST75256_JLX256160_ALT_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256160_alt, u8x8_cad_st75256_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_ST75256_JLX256160_ALT_HW_I2C : public U8X8 {
  public: U8X8_ST75256_JLX256160_ALT_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256160_alt, u8x8_cad_st75256_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_ST75256_JLX256160_ALT_2ND_HW_I2C : public U8X8 {
  public: U8X8_ST75256_JLX256160_ALT_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx256160_alt, u8x8_cad_st75256_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_ST75256_JLX240160_4W_SW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX240160_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx240160, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST75256_JLX240160_4W_HW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX240160_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx240160, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST75256_JLX240160_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX240160_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx240160, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST75256_JLX240160_3W_SW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX240160_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx240160, u8x8_cad_011, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST75256_JLX240160_3W_HW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX240160_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx240160, u8x8_cad_011, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST75256_JLX240160_6800 : public U8X8 {
  public: U8X8_ST75256_JLX240160_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx240160, u8x8_cad_011, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST75256_JLX240160_8080 : public U8X8 {
  public: U8X8_ST75256_JLX240160_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx240160, u8x8_cad_011, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST75256_JLX240160_SW_I2C : public U8X8 {
  public: U8X8_ST75256_JLX240160_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx240160, u8x8_cad_st75256_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_ST75256_JLX240160_HW_I2C : public U8X8 {
  public: U8X8_ST75256_JLX240160_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx240160, u8x8_cad_st75256_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_ST75256_JLX240160_2ND_HW_I2C : public U8X8 {
  public: U8X8_ST75256_JLX240160_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx240160, u8x8_cad_st75256_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_ST75256_JLX25664_4W_SW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX25664_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx25664, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST75256_JLX25664_4W_HW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX25664_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx25664, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST75256_JLX25664_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX25664_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx25664, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST75256_JLX25664_3W_SW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX25664_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx25664, u8x8_cad_011, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST75256_JLX25664_3W_HW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX25664_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx25664, u8x8_cad_011, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST75256_JLX25664_6800 : public U8X8 {
  public: U8X8_ST75256_JLX25664_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx25664, u8x8_cad_011, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST75256_JLX25664_8080 : public U8X8 {
  public: U8X8_ST75256_JLX25664_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx25664, u8x8_cad_011, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST75256_JLX25664_SW_I2C : public U8X8 {
  public: U8X8_ST75256_JLX25664_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx25664, u8x8_cad_st75256_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_ST75256_JLX25664_HW_I2C : public U8X8 {
  public: U8X8_ST75256_JLX25664_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx25664, u8x8_cad_st75256_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_ST75256_JLX25664_2ND_HW_I2C : public U8X8 {
  public: U8X8_ST75256_JLX25664_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx25664, u8x8_cad_st75256_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_ST75256_JLX172104_4W_SW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX172104_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx172104, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST75256_JLX172104_4W_HW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX172104_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx172104, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST75256_JLX172104_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX172104_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx172104, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST75256_JLX172104_3W_SW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX172104_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx172104, u8x8_cad_011, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST75256_JLX172104_3W_HW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX172104_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx172104, u8x8_cad_011, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST75256_JLX172104_6800 : public U8X8 {
  public: U8X8_ST75256_JLX172104_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx172104, u8x8_cad_011, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST75256_JLX172104_8080 : public U8X8 {
  public: U8X8_ST75256_JLX172104_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx172104, u8x8_cad_011, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST75256_JLX172104_SW_I2C : public U8X8 {
  public: U8X8_ST75256_JLX172104_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx172104, u8x8_cad_st75256_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_ST75256_JLX172104_HW_I2C : public U8X8 {
  public: U8X8_ST75256_JLX172104_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx172104, u8x8_cad_st75256_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_ST75256_JLX172104_2ND_HW_I2C : public U8X8 {
  public: U8X8_ST75256_JLX172104_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx172104, u8x8_cad_st75256_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_ST75256_JLX19296_4W_SW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX19296_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx19296, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST75256_JLX19296_4W_HW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX19296_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx19296, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST75256_JLX19296_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX19296_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx19296, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST75256_JLX19296_3W_SW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX19296_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx19296, u8x8_cad_011, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST75256_JLX19296_3W_HW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX19296_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx19296, u8x8_cad_011, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST75256_JLX19296_6800 : public U8X8 {
  public: U8X8_ST75256_JLX19296_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx19296, u8x8_cad_011, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST75256_JLX19296_8080 : public U8X8 {
  public: U8X8_ST75256_JLX19296_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx19296, u8x8_cad_011, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST75256_JLX19296_SW_I2C : public U8X8 {
  public: U8X8_ST75256_JLX19296_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx19296, u8x8_cad_st75256_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_ST75256_JLX19296_HW_I2C : public U8X8 {
  public: U8X8_ST75256_JLX19296_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx19296, u8x8_cad_st75256_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_ST75256_JLX19296_2ND_HW_I2C : public U8X8 {
  public: U8X8_ST75256_JLX19296_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx19296, u8x8_cad_st75256_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_ST75256_JLX16080_4W_SW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX16080_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx16080, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST75256_JLX16080_4W_HW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX16080_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx16080, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST75256_JLX16080_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX16080_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx16080, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST75256_JLX16080_3W_SW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX16080_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx16080, u8x8_cad_011, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST75256_JLX16080_3W_HW_SPI : public U8X8 {
  public: U8X8_ST75256_JLX16080_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx16080, u8x8_cad_011, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST75256_JLX16080_6800 : public U8X8 {
  public: U8X8_ST75256_JLX16080_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx16080, u8x8_cad_011, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST75256_JLX16080_8080 : public U8X8 {
  public: U8X8_ST75256_JLX16080_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx16080, u8x8_cad_011, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST75256_JLX16080_SW_I2C : public U8X8 {
  public: U8X8_ST75256_JLX16080_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx16080, u8x8_cad_st75256_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_ST75256_JLX16080_HW_I2C : public U8X8 {
  public: U8X8_ST75256_JLX16080_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx16080, u8x8_cad_st75256_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_ST75256_JLX16080_2ND_HW_I2C : public U8X8 {
  public: U8X8_ST75256_JLX16080_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75256_jlx16080, u8x8_cad_st75256_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_ST75320_JLX320240_4W_SW_SPI : public U8X8 {
  public: U8X8_ST75320_JLX320240_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75320_jlx320240, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_ST75320_JLX320240_4W_HW_SPI : public U8X8 {
  public: U8X8_ST75320_JLX320240_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75320_jlx320240, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST75320_JLX320240_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_ST75320_JLX320240_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75320_jlx320240, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_ST75320_JLX320240_3W_SW_SPI : public U8X8 {
  public: U8X8_ST75320_JLX320240_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75320_jlx320240, u8x8_cad_011, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_ST75320_JLX320240_3W_HW_SPI : public U8X8 {
  public: U8X8_ST75320_JLX320240_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75320_jlx320240, u8x8_cad_011, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_ST75320_JLX320240_6800 : public U8X8 {
  public: U8X8_ST75320_JLX320240_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75320_jlx320240, u8x8_cad_011, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST75320_JLX320240_8080 : public U8X8 {
  public: U8X8_ST75320_JLX320240_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75320_jlx320240, u8x8_cad_011, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_ST75320_JLX320240_SW_I2C : public U8X8 {
  public: U8X8_ST75320_JLX320240_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75320_jlx320240, u8x8_cad_st75256_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_ST75320_JLX320240_HW_I2C : public U8X8 {
  public: U8X8_ST75320_JLX320240_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75320_jlx320240, u8x8_cad_st75256_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_ST75320_JLX320240_2ND_HW_I2C : public U8X8 {
  public: U8X8_ST75320_JLX320240_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_st75320_jlx320240, u8x8_cad_st75256_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_NT7534_TG12864R_4W_SW_SPI : public U8X8 {
  public: U8X8_NT7534_TG12864R_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_nt7534_tg12864r, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_NT7534_TG12864R_4W_HW_SPI : public U8X8 {
  public: U8X8_NT7534_TG12864R_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_nt7534_tg12864r, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_NT7534_TG12864R_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_NT7534_TG12864R_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_nt7534_tg12864r, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_NT7534_TG12864R_6800 : public U8X8 {
  public: U8X8_NT7534_TG12864R_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_nt7534_tg12864r, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_NT7534_TG12864R_8080 : public U8X8 {
  public: U8X8_NT7534_TG12864R_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_nt7534_tg12864r, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_IST3020_ERC19264_4W_SW_SPI : public U8X8 {
  public: U8X8_IST3020_ERC19264_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ist3020_erc19264, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_IST3020_ERC19264_4W_HW_SPI : public U8X8 {
  public: U8X8_IST3020_ERC19264_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ist3020_erc19264, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_IST3020_ERC19264_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_IST3020_ERC19264_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ist3020_erc19264, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_IST3020_ERC19264_6800 : public U8X8 {
  public: U8X8_IST3020_ERC19264_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ist3020_erc19264, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_IST3020_ERC19264_8080 : public U8X8 {
  public: U8X8_IST3020_ERC19264_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ist3020_erc19264, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_IST3088_320X240_4W_SW_SPI : public U8X8 {
  public: U8X8_IST3088_320X240_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ist3088_320x240, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_IST3088_320X240_4W_HW_SPI : public U8X8 {
  public: U8X8_IST3088_320X240_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ist3088_320x240, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_IST3088_320X240_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_IST3088_320X240_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ist3088_320x240, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_IST3088_320X240_6800 : public U8X8 {
  public: U8X8_IST3088_320X240_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ist3088_320x240, u8x8_cad_011, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_IST3088_320X240_8080 : public U8X8 {
  public: U8X8_IST3088_320X240_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ist3088_320x240, u8x8_cad_011, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_IST7920_128X128_4W_SW_SPI : public U8X8 {
  public: U8X8_IST7920_128X128_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ist7920_128x128, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_IST7920_128X128_4W_HW_SPI : public U8X8 {
  public: U8X8_IST7920_128X128_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ist7920_128x128, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_IST7920_128X128_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_IST7920_128X128_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ist7920_128x128, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_IST7920_128X128_6800 : public U8X8 {
  public: U8X8_IST7920_128X128_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ist7920_128x128, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_IST7920_128X128_8080 : public U8X8 {
  public: U8X8_IST7920_128X128_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ist7920_128x128, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SBN1661_122X32 : public U8X8 {
  public: U8X8_SBN1661_122X32(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t dc, uint8_t e1, uint8_t e2, uint8_t reset) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sbn1661_122x32, u8x8_cad_001, u8x8_byte_sed1520, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SED1520(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, dc, e1, e2, reset);
  }
};
class U8X8_SED1520_122X32 : public U8X8 {
  public: U8X8_SED1520_122X32(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t dc, uint8_t e1, uint8_t e2, uint8_t reset) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sed1520_122x32, u8x8_cad_001, u8x8_byte_sed1520, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SED1520(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, dc, e1, e2, reset);
  }
};
class U8X8_KS0108_128X64 : public U8X8 {
  public: U8X8_KS0108_128X64(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t dc, uint8_t cs0, uint8_t cs1, uint8_t cs2, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ks0108_128x64, u8x8_cad_001, u8x8_byte_arduino_ks0108, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_KS0108(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, dc, cs0, cs1, cs2, reset);
  }
};
class U8X8_KS0108_ERM19264 : public U8X8 {
  public: U8X8_KS0108_ERM19264(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t dc, uint8_t cs0, uint8_t cs1, uint8_t cs2, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ks0108_erm19264, u8x8_cad_001, u8x8_byte_arduino_ks0108, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_KS0108(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, dc, cs0, cs1, cs2, reset);
  }
};
class U8X8_T7932_150X32 : public U8X8 {
  public: U8X8_T7932_150X32(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t dc, uint8_t cs0, uint8_t cs1, uint8_t cs2, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_t7932_150x32, u8x8_cad_001, u8x8_byte_arduino_ks0108, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_KS0108(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, dc, cs0, cs1, cs2, reset);
  }
};
class U8X8_HD44102_100X64 : public U8X8 {
  public: U8X8_HD44102_100X64(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t dc, uint8_t cs0, uint8_t cs1, uint8_t cs2, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_hd44102_100x64, u8x8_cad_001, u8x8_byte_arduino_ks0108, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_KS0108(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, dc, cs0, cs1, cs2, reset);
  }
};
class U8X8_LC7981_160X80_6800 : public U8X8 {
  public: U8X8_LC7981_160X80_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_lc7981_160x80, u8x8_cad_100, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_LC7981_160X160_6800 : public U8X8 {
  public: U8X8_LC7981_160X160_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_lc7981_160x160, u8x8_cad_100, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_LC7981_240X128_6800 : public U8X8 {
  public: U8X8_LC7981_240X128_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_lc7981_240x128, u8x8_cad_100, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_LC7981_240X64_6800 : public U8X8 {
  public: U8X8_LC7981_240X64_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_lc7981_240x64, u8x8_cad_100, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_LC7981_128X128_6800 : public U8X8 {
  public: U8X8_LC7981_128X128_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_lc7981_128x128, u8x8_cad_100, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_T6963_240X128_8080 : public U8X8 {
  public: U8X8_T6963_240X128_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_t6963_240x128, u8x8_cad_100, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_T6963_240X64_8080 : public U8X8 {
  public: U8X8_T6963_240X64_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_t6963_240x64, u8x8_cad_100, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_T6963_256X64_8080 : public U8X8 {
  public: U8X8_T6963_256X64_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_t6963_256x64, u8x8_cad_100, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_T6963_128X64_8080 : public U8X8 {
  public: U8X8_T6963_128X64_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_t6963_128x64, u8x8_cad_100, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_T6963_128X64_ALT_8080 : public U8X8 {
  public: U8X8_T6963_128X64_ALT_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_t6963_128x64_alt, u8x8_cad_100, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_T6963_160X80_8080 : public U8X8 {
  public: U8X8_T6963_160X80_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_t6963_160x80, u8x8_cad_100, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_T6963_128X128_8080 : public U8X8 {
  public: U8X8_T6963_128X128_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_t6963_128x128, u8x8_cad_100, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1320_160X32_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1320_160X32_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1320_160x32, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1320_160X32_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1320_160X32_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1320_160x32, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1320_160X32_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1320_160X32_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1320_160x32, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1320_160X32_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1320_160X32_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1320_160x32, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1320_160X32_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1320_160X32_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1320_160x32, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1320_160X32_6800 : public U8X8 {
  public: U8X8_SSD1320_160X32_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1320_160x32, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1320_160X32_8080 : public U8X8 {
  public: U8X8_SSD1320_160X32_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1320_160x32, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1320_160X132_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1320_160X132_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1320_160x132, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1320_160X132_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1320_160X132_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1320_160x132, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1320_160X132_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1320_160X132_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1320_160x132, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1320_160X132_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1320_160X132_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1320_160x132, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1320_160X132_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1320_160X132_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1320_160x132, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1320_160X132_6800 : public U8X8 {
  public: U8X8_SSD1320_160X132_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1320_160x132, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1320_160X132_8080 : public U8X8 {
  public: U8X8_SSD1320_160X132_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1320_160x132, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1320_160X80_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1320_160X80_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1320_160x80, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1320_160X80_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1320_160X80_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1320_160x80, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1320_160X80_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1320_160X80_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1320_160x80, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1320_160X80_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1320_160X80_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1320_160x80, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1320_160X80_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1320_160X80_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1320_160x80, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1320_160X80_6800 : public U8X8 {
  public: U8X8_SSD1320_160X80_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1320_160x80, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1320_160X80_8080 : public U8X8 {
  public: U8X8_SSD1320_160X80_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1320_160x80, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1320_160X80_SW_I2C : public U8X8 {
  public: U8X8_SSD1320_160X80_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1320_160x80, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1320_160X80_HW_I2C : public U8X8 {
  public: U8X8_SSD1320_160X80_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1320_160x80, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1320_160X80_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1320_160X80_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1320_160x80, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1322_240X128_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1322_240X128_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1322_240x128, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1322_240X128_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1322_240X128_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1322_240x128, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1322_240X128_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1322_240X128_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1322_240x128, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1322_240X128_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1322_240X128_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1322_240x128, u8x8_cad_011, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1322_240X128_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1322_240X128_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1322_240x128, u8x8_cad_011, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1322_240X128_6800 : public U8X8 {
  public: U8X8_SSD1322_240X128_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1322_240x128, u8x8_cad_011, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1322_240X128_8080 : public U8X8 {
  public: U8X8_SSD1322_240X128_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1322_240x128, u8x8_cad_011, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1322_TOPWIN_240X128_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1322_TOPWIN_240X128_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1322_topwin_240x128, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1322_TOPWIN_240X128_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1322_TOPWIN_240X128_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1322_topwin_240x128, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1322_TOPWIN_240X128_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1322_TOPWIN_240X128_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1322_topwin_240x128, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1322_TOPWIN_240X128_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1322_TOPWIN_240X128_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1322_topwin_240x128, u8x8_cad_011, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1322_TOPWIN_240X128_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1322_TOPWIN_240X128_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1322_topwin_240x128, u8x8_cad_011, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1322_TOPWIN_240X128_6800 : public U8X8 {
  public: U8X8_SSD1322_TOPWIN_240X128_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1322_topwin_240x128, u8x8_cad_011, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1322_TOPWIN_240X128_8080 : public U8X8 {
  public: U8X8_SSD1322_TOPWIN_240X128_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1322_topwin_240x128, u8x8_cad_011, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1322_NHD_256X64_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1322_NHD_256X64_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1322_nhd_256x64, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1322_NHD_256X64_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1322_NHD_256X64_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1322_nhd_256x64, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1322_NHD_256X64_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1322_NHD_256X64_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1322_nhd_256x64, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1322_NHD_256X64_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1322_NHD_256X64_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1322_nhd_256x64, u8x8_cad_011, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1322_NHD_256X64_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1322_NHD_256X64_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1322_nhd_256x64, u8x8_cad_011, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1322_NHD_256X64_6800 : public U8X8 {
  public: U8X8_SSD1322_NHD_256X64_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1322_nhd_256x64, u8x8_cad_011, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1322_NHD_256X64_8080 : public U8X8 {
  public: U8X8_SSD1322_NHD_256X64_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1322_nhd_256x64, u8x8_cad_011, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1322_NHD_128X64_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1322_NHD_128X64_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1322_nhd_128x64, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1322_NHD_128X64_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1322_NHD_128X64_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1322_nhd_128x64, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1322_NHD_128X64_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1322_NHD_128X64_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1322_nhd_128x64, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1322_NHD_128X64_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1322_NHD_128X64_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1322_nhd_128x64, u8x8_cad_011, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1322_NHD_128X64_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1322_NHD_128X64_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1322_nhd_128x64, u8x8_cad_011, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1322_NHD_128X64_6800 : public U8X8 {
  public: U8X8_SSD1322_NHD_128X64_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1322_nhd_128x64, u8x8_cad_011, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1322_NHD_128X64_8080 : public U8X8 {
  public: U8X8_SSD1322_NHD_128X64_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1322_nhd_128x64, u8x8_cad_011, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1362_256X64_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1362_256X64_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1362_256x64, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1362_256X64_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1362_256X64_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1362_256x64, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1362_256X64_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1362_256X64_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1362_256x64, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1362_256X64_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1362_256X64_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1362_256x64, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1362_256X64_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1362_256X64_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1362_256x64, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1362_256X64_6800 : public U8X8 {
  public: U8X8_SSD1362_256X64_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1362_256x64, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1362_256X64_8080 : public U8X8 {
  public: U8X8_SSD1362_256X64_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1362_256x64, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1362_256X64_SW_I2C : public U8X8 {
  public: U8X8_SSD1362_256X64_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1362_256x64, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1362_256X64_HW_I2C : public U8X8 {
  public: U8X8_SSD1362_256X64_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1362_256x64, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1362_256X64_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1362_256X64_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1362_256x64, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1362_206X36_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1362_206X36_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1362_206x36, u8x8_cad_001, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1362_206X36_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1362_206X36_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1362_206x36, u8x8_cad_001, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1362_206X36_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1362_206X36_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1362_206x36, u8x8_cad_001, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1362_206X36_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1362_206X36_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1362_206x36, u8x8_cad_001, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1362_206X36_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1362_206X36_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1362_206x36, u8x8_cad_001, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1362_206X36_6800 : public U8X8 {
  public: U8X8_SSD1362_206X36_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1362_206x36, u8x8_cad_001, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1362_206X36_8080 : public U8X8 {
  public: U8X8_SSD1362_206X36_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1362_206x36, u8x8_cad_001, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SSD1362_206X36_SW_I2C : public U8X8 {
  public: U8X8_SSD1362_206X36_SW_I2C(uint8_t clock, uint8_t data, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1362_206x36, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_sw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_SW_I2C(getU8x8(), clock,  data,  reset);
  }
};
class U8X8_SSD1362_206X36_HW_I2C : public U8X8 {
  public: U8X8_SSD1362_206X36_HW_I2C(uint8_t reset = U8X8_PIN_NONE, uint8_t clock = U8X8_PIN_NONE, uint8_t data = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1362_206x36, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset, clock, data);
  }
};
class U8X8_SSD1362_206X36_2ND_HW_I2C : public U8X8 {
  public: U8X8_SSD1362_206X36_2ND_HW_I2C(uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1362_206x36, u8x8_cad_ssd13xx_fast_i2c, u8x8_byte_arduino_2nd_hw_i2c, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_HW_I2C(getU8x8(), reset);
  }
};
class U8X8_SSD1606_172X72_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1606_172X72_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1606_172x72, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1606_172X72_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1606_172X72_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1606_172x72, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1606_172X72_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1606_172X72_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1606_172x72, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1606_172X72_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1606_172X72_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1606_172x72, u8x8_cad_011, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1606_172X72_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1606_172X72_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1606_172x72, u8x8_cad_011, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1607_200X200_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1607_200X200_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1607_200x200, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1607_200X200_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1607_200X200_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1607_200x200, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1607_200X200_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1607_200X200_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1607_200x200, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1607_200X200_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1607_200X200_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1607_200x200, u8x8_cad_011, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1607_200X200_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1607_200X200_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1607_200x200, u8x8_cad_011, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1607_GD_200X200_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1607_GD_200X200_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1607_gd_200x200, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1607_GD_200X200_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1607_GD_200X200_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1607_gd_200x200, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1607_GD_200X200_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1607_GD_200X200_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1607_gd_200x200, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1607_GD_200X200_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1607_GD_200X200_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1607_gd_200x200, u8x8_cad_011, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1607_GD_200X200_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1607_GD_200X200_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1607_gd_200x200, u8x8_cad_011, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SSD1607_WS_200X200_4W_SW_SPI : public U8X8 {
  public: U8X8_SSD1607_WS_200X200_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1607_ws_200x200, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_SSD1607_WS_200X200_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1607_WS_200X200_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1607_ws_200x200, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1607_WS_200X200_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_SSD1607_WS_200X200_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1607_ws_200x200, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_SSD1607_WS_200X200_3W_SW_SPI : public U8X8 {
  public: U8X8_SSD1607_WS_200X200_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1607_ws_200x200, u8x8_cad_011, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_SSD1607_WS_200X200_3W_HW_SPI : public U8X8 {
  public: U8X8_SSD1607_WS_200X200_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ssd1607_ws_200x200, u8x8_cad_011, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_IL3820_296X128_4W_SW_SPI : public U8X8 {
  public: U8X8_IL3820_296X128_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_il3820_296x128, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_IL3820_296X128_4W_HW_SPI : public U8X8 {
  public: U8X8_IL3820_296X128_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_il3820_296x128, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_IL3820_296X128_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_IL3820_296X128_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_il3820_296x128, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_IL3820_296X128_3W_SW_SPI : public U8X8 {
  public: U8X8_IL3820_296X128_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_il3820_296x128, u8x8_cad_011, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_IL3820_296X128_3W_HW_SPI : public U8X8 {
  public: U8X8_IL3820_296X128_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_il3820_296x128, u8x8_cad_011, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_IL3820_V2_296X128_4W_SW_SPI : public U8X8 {
  public: U8X8_IL3820_V2_296X128_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_il3820_v2_296x128, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_IL3820_V2_296X128_4W_HW_SPI : public U8X8 {
  public: U8X8_IL3820_V2_296X128_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_il3820_v2_296x128, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_IL3820_V2_296X128_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_IL3820_V2_296X128_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_il3820_v2_296x128, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_IL3820_V2_296X128_3W_SW_SPI : public U8X8 {
  public: U8X8_IL3820_V2_296X128_3W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_il3820_v2_296x128, u8x8_cad_011, u8x8_byte_arduino_3wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_SW_SPI(getU8x8(), clock, data, cs, reset);
  }
};
class U8X8_IL3820_V2_296X128_3W_HW_SPI : public U8X8 {
  public: U8X8_IL3820_V2_296X128_3W_HW_SPI(uint8_t cs, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_il3820_v2_296x128, u8x8_cad_011, u8x8_byte_arduino_3wire_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_3Wire_HW_SPI(getU8x8(), cs, reset);
  }
};
class U8X8_SED1330_240X128_6800 : public U8X8 {
  public: U8X8_SED1330_240X128_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sed1330_240x128, u8x8_cad_100, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SED1330_240X128_8080 : public U8X8 {
  public: U8X8_SED1330_240X128_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sed1330_240x128, u8x8_cad_100, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SED1330_256X128_6800 : public U8X8 {
  public: U8X8_SED1330_256X128_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sed1330_256x128, u8x8_cad_100, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SED1330_256X128_8080 : public U8X8 {
  public: U8X8_SED1330_256X128_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sed1330_256x128, u8x8_cad_100, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_RA8835_NHD_240X128_6800 : public U8X8 {
  public: U8X8_RA8835_NHD_240X128_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ra8835_nhd_240x128, u8x8_cad_100, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_RA8835_NHD_240X128_8080 : public U8X8 {
  public: U8X8_RA8835_NHD_240X128_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ra8835_nhd_240x128, u8x8_cad_100, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_RA8835_320X240_6800 : public U8X8 {
  public: U8X8_RA8835_320X240_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ra8835_320x240, u8x8_cad_100, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_RA8835_320X240_8080 : public U8X8 {
  public: U8X8_RA8835_320X240_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_ra8835_320x240, u8x8_cad_100, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SED1330_320X200_6800 : public U8X8 {
  public: U8X8_SED1330_320X200_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sed1330_320x200, u8x8_cad_100, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_SED1330_320X200_8080 : public U8X8 {
  public: U8X8_SED1330_320X200_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_sed1330_320x200, u8x8_cad_100, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_MAX7219_64X8_4W_SW_SPI : public U8X8 {
  public: U8X8_MAX7219_64X8_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_max7219_64x8, u8x8_cad_empty, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_MAX7219_64X8_4W_HW_SPI : public U8X8 {
  public: U8X8_MAX7219_64X8_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_max7219_64x8, u8x8_cad_empty, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_MAX7219_64X8_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_MAX7219_64X8_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_max7219_64x8, u8x8_cad_empty, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_MAX7219_32X8_4W_SW_SPI : public U8X8 {
  public: U8X8_MAX7219_32X8_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_max7219_32x8, u8x8_cad_empty, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_MAX7219_32X8_4W_HW_SPI : public U8X8 {
  public: U8X8_MAX7219_32X8_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_max7219_32x8, u8x8_cad_empty, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_MAX7219_32X8_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_MAX7219_32X8_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_max7219_32x8, u8x8_cad_empty, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_MAX7219_8X8_4W_SW_SPI : public U8X8 {
  public: U8X8_MAX7219_8X8_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_max7219_8x8, u8x8_cad_empty, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_MAX7219_8X8_4W_HW_SPI : public U8X8 {
  public: U8X8_MAX7219_8X8_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_max7219_8x8, u8x8_cad_empty, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_MAX7219_8X8_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_MAX7219_8X8_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_max7219_8x8, u8x8_cad_empty, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_S1D15300_LM6023_4W_SW_SPI : public U8X8 {
  public: U8X8_S1D15300_LM6023_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_s1d15300_lm6023, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_S1D15300_LM6023_4W_HW_SPI : public U8X8 {
  public: U8X8_S1D15300_LM6023_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_s1d15300_lm6023, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_S1D15300_LM6023_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_S1D15300_LM6023_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_s1d15300_lm6023, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_S1D15300_LM6023_6800 : public U8X8 {
  public: U8X8_S1D15300_LM6023_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_s1d15300_lm6023, u8x8_cad_011, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_S1D15300_LM6023_8080 : public U8X8 {
  public: U8X8_S1D15300_LM6023_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_s1d15300_lm6023, u8x8_cad_011, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_S1D15300_97X32_4W_SW_SPI : public U8X8 {
  public: U8X8_S1D15300_97X32_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_s1d15300_97x32, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_S1D15300_97X32_4W_HW_SPI : public U8X8 {
  public: U8X8_S1D15300_97X32_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_s1d15300_97x32, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_S1D15300_97X32_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_S1D15300_97X32_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_s1d15300_97x32, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_S1D15300_97X32_6800 : public U8X8 {
  public: U8X8_S1D15300_97X32_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_s1d15300_97x32, u8x8_cad_011, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_S1D15300_97X32_8080 : public U8X8 {
  public: U8X8_S1D15300_97X32_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_s1d15300_97x32, u8x8_cad_011, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_S1D15300_100X32_4W_SW_SPI : public U8X8 {
  public: U8X8_S1D15300_100X32_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_s1d15300_100x32, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_S1D15300_100X32_4W_HW_SPI : public U8X8 {
  public: U8X8_S1D15300_100X32_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_s1d15300_100x32, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_S1D15300_100X32_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_S1D15300_100X32_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_s1d15300_100x32, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_S1D15300_100X32_6800 : public U8X8 {
  public: U8X8_S1D15300_100X32_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_s1d15300_100x32, u8x8_cad_011, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_S1D15300_100X32_8080 : public U8X8 {
  public: U8X8_S1D15300_100X32_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_s1d15300_100x32, u8x8_cad_011, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_S1D15300_100X32I_4W_SW_SPI : public U8X8 {
  public: U8X8_S1D15300_100X32I_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_s1d15300_100x32i, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_S1D15300_100X32I_4W_HW_SPI : public U8X8 {
  public: U8X8_S1D15300_100X32I_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_s1d15300_100x32i, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_S1D15300_100X32I_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_S1D15300_100X32I_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_s1d15300_100x32i, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_S1D15300_100X32I_6800 : public U8X8 {
  public: U8X8_S1D15300_100X32I_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_s1d15300_100x32i, u8x8_cad_011, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_S1D15300_100X32I_8080 : public U8X8 {
  public: U8X8_S1D15300_100X32I_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_s1d15300_100x32i, u8x8_cad_011, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_S1D15E06_160100_4W_SW_SPI : public U8X8 {
  public: U8X8_S1D15E06_160100_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_s1d15e06_160100, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_S1D15E06_160100_4W_HW_SPI : public U8X8 {
  public: U8X8_S1D15E06_160100_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_s1d15e06_160100, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_S1D15E06_160100_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_S1D15E06_160100_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_s1d15e06_160100, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_S1D15E06_160100_6800 : public U8X8 {
  public: U8X8_S1D15E06_160100_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_s1d15e06_160100, u8x8_cad_011, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_S1D15E06_160100_8080 : public U8X8 {
  public: U8X8_S1D15E06_160100_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_s1d15e06_160100, u8x8_cad_011, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_S1D15721_240X64_4W_SW_SPI : public U8X8 {
  public: U8X8_S1D15721_240X64_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_s1d15721_240x64, u8x8_cad_011, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_S1D15721_240X64_4W_HW_SPI : public U8X8 {
  public: U8X8_S1D15721_240X64_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_s1d15721_240x64, u8x8_cad_011, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_S1D15721_240X64_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_S1D15721_240X64_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_s1d15721_240x64, u8x8_cad_011, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_S1D15721_240X64_6800 : public U8X8 {
  public: U8X8_S1D15721_240X64_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_s1d15721_240x64, u8x8_cad_011, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_S1D15721_240X64_8080 : public U8X8 {
  public: U8X8_S1D15721_240X64_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_s1d15721_240x64, u8x8_cad_011, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_GU800_128X64_4W_SW_SPI : public U8X8 {
  public: U8X8_GU800_128X64_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_gu800_128x64, u8x8_gu800_cad_110, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_GU800_128X64_4W_HW_SPI : public U8X8 {
  public: U8X8_GU800_128X64_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_gu800_128x64, u8x8_gu800_cad_110, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_GU800_128X64_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_GU800_128X64_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_gu800_128x64, u8x8_gu800_cad_110, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_GU800_128X64_6800 : public U8X8 {
  public: U8X8_GU800_128X64_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_gu800_128x64, u8x8_gu800_cad_110, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_GU800_128X64_8080 : public U8X8 {
  public: U8X8_GU800_128X64_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_gu800_128x64, u8x8_gu800_cad_110, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_GU800_160X16_4W_SW_SPI : public U8X8 {
  public: U8X8_GU800_160X16_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_gu800_160x16, u8x8_gu800_cad_110, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_GU800_160X16_4W_HW_SPI : public U8X8 {
  public: U8X8_GU800_160X16_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_gu800_160x16, u8x8_gu800_cad_110, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_GU800_160X16_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_GU800_160X16_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_gu800_160x16, u8x8_gu800_cad_110, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_GU800_160X16_6800 : public U8X8 {
  public: U8X8_GU800_160X16_6800(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_gu800_160x16, u8x8_gu800_cad_110, u8x8_byte_8bit_6800mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_6800(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_GU800_160X16_8080 : public U8X8 {
  public: U8X8_GU800_160X16_8080(uint8_t d0, uint8_t d1, uint8_t d2, uint8_t d3, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7, uint8_t enable, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_gu800_160x16, u8x8_gu800_cad_110, u8x8_byte_arduino_8bit_8080mode, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_8Bit_8080(getU8x8(), d0, d1, d2, d3, d4, d5, d6, d7, enable, cs, dc, reset);
  }
};
class U8X8_GP1287AI_256X50_4W_SW_SPI : public U8X8 {
  public: U8X8_GP1287AI_256X50_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_gp1287ai_256x50, u8x8_cad_empty, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_GP1287AI_256X50_4W_HW_SPI : public U8X8 {
  public: U8X8_GP1287AI_256X50_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_gp1287ai_256x50, u8x8_cad_empty, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_GP1287AI_256X50_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_GP1287AI_256X50_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_gp1287ai_256x50, u8x8_cad_empty, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_GP1247AI_253X63_4W_SW_SPI : public U8X8 {
  public: U8X8_GP1247AI_253X63_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_gp1247ai_253x63, u8x8_cad_empty, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_GP1247AI_253X63_4W_HW_SPI : public U8X8 {
  public: U8X8_GP1247AI_253X63_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_gp1247ai_253x63, u8x8_cad_empty, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_GP1247AI_253X63_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_GP1247AI_253X63_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_gp1247ai_253x63, u8x8_cad_empty, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_GP1294AI_256X48_4W_SW_SPI : public U8X8 {
  public: U8X8_GP1294AI_256X48_4W_SW_SPI(uint8_t clock, uint8_t data, uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_gp1294ai_256x48, u8x8_cad_empty, u8x8_byte_arduino_4wire_sw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_SW_SPI(getU8x8(), clock, data, cs, dc, reset);
  }
};
class U8X8_GP1294AI_256X48_4W_HW_SPI : public U8X8 {
  public: U8X8_GP1294AI_256X48_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_gp1294ai_256x48, u8x8_cad_empty, u8x8_byte_arduino_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
class U8X8_GP1294AI_256X48_2ND_4W_HW_SPI : public U8X8 {
  public: U8X8_GP1294AI_256X48_2ND_4W_HW_SPI(uint8_t cs, uint8_t dc, uint8_t reset = U8X8_PIN_NONE) : U8X8() {
    u8x8_Setup(getU8x8(), u8x8_d_gp1294ai_256x48, u8x8_cad_empty, u8x8_byte_arduino_2nd_hw_spi, u8x8_gpio_and_delay_arduino);
    u8x8_SetPin_4Wire_HW_SPI(getU8x8(), cs, dc, reset);
  }
};
