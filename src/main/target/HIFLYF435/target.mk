AT32F43xxGT7_TARGETS += $(TARGET) #FOR 1024KB

CUSTOM_DEFAULTS_EXTENDED = yes
FEATURES       +=  VCP ONBOARDFLASH

TARGET_SRC = \
            drivers/accgyro/accgyro_spi_mpu6500.c \
            drivers/accgyro/accgyro_mpu6500.c \
            drivers/accgyro/accgyro_spi_mpu6000.c \
            drivers/barometer/barometer_bmp085.c \
            drivers/barometer/barometer_bmp280.c \
            drivers/compass/compass_hmc5883l.c \
            drivers/compass/compass_qmc5883l.c \
            drivers/compass/compass_lis3mdl.c \
            drivers/max7456.c
