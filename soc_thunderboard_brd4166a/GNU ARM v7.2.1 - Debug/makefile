################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include gecko_sdk_3.0.0/util/third_party/printf/src/subdir.mk
-include gecko_sdk_3.0.0/util/third_party/printf/subdir.mk
-include gecko_sdk_3.0.0/util/third_party/mbedtls/sl_crypto/src/subdir.mk
-include gecko_sdk_3.0.0/util/third_party/mbedtls/library/subdir.mk
-include gecko_sdk_3.0.0/util/silicon_labs/silabs_core/memory_manager/subdir.mk
-include gecko_sdk_3.0.0/protocol/bluetooth/src/subdir.mk
-include gecko_sdk_3.0.0/protocol/bluetooth/lib/EFR32MG12P/GCC/subdir.mk
-include gecko_sdk_3.0.0/platform/service/udelay/src/subdir.mk
-include gecko_sdk_3.0.0/platform/service/system/src/subdir.mk
-include gecko_sdk_3.0.0/platform/service/sleeptimer/src/subdir.mk
-include gecko_sdk_3.0.0/platform/service/power_manager/src/subdir.mk
-include gecko_sdk_3.0.0/platform/service/mpu/src/subdir.mk
-include gecko_sdk_3.0.0/platform/service/iostream/src/subdir.mk
-include gecko_sdk_3.0.0/platform/service/device_init/src/subdir.mk
-include gecko_sdk_3.0.0/platform/radio/rail_lib/plugin/rail_util_pti/subdir.mk
-include gecko_sdk_3.0.0/platform/radio/rail_lib/plugin/pa-conversions/subdir.mk
-include gecko_sdk_3.0.0/platform/emlib/src/subdir.mk
-include gecko_sdk_3.0.0/platform/emdrv/gpiointerrupt/src/subdir.mk
-include gecko_sdk_3.0.0/platform/emdrv/dmadrv/src/subdir.mk
-include gecko_sdk_3.0.0/platform/driver/pwm/src/subdir.mk
-include gecko_sdk_3.0.0/platform/driver/leddrv/src/subdir.mk
-include gecko_sdk_3.0.0/platform/driver/i2cspm/src/subdir.mk
-include gecko_sdk_3.0.0/platform/driver/button/src/subdir.mk
-include gecko_sdk_3.0.0/platform/common/toolchain/src/subdir.mk
-include gecko_sdk_3.0.0/platform/common/src/subdir.mk
-include gecko_sdk_3.0.0/platform/bootloader/api/subdir.mk
-include gecko_sdk_3.0.0/platform/Device/SiliconLabs/EFR32MG12P/Source/GCC/subdir.mk
-include gecko_sdk_3.0.0/platform/Device/SiliconLabs/EFR32MG12P/Source/subdir.mk
-include gecko_sdk_3.0.0/hardware/driver/si7210/src/subdir.mk
-include gecko_sdk_3.0.0/hardware/driver/si70xx/src/subdir.mk
-include gecko_sdk_3.0.0/hardware/driver/si1133/src/subdir.mk
-include gecko_sdk_3.0.0/hardware/driver/mx25_flash_shutdown/src/subdir.mk
-include gecko_sdk_3.0.0/hardware/driver/mic/src/subdir.mk
-include gecko_sdk_3.0.0/hardware/driver/imu/src/subdir.mk
-include gecko_sdk_3.0.0/hardware/driver/icm20648/src/subdir.mk
-include gecko_sdk_3.0.0/hardware/driver/ccs811/src/subdir.mk
-include gecko_sdk_3.0.0/hardware/driver/bmp280/src/subdir.mk
-include gecko_sdk_3.0.0/hardware/driver/bmp280/bosch/BMP280_driver/subdir.mk
-include gecko_sdk_3.0.0/hardware/board/src/subdir.mk
-include gecko_sdk_3.0.0/app/bluetooth/common/simple_timer/subdir.mk
-include gecko_sdk_3.0.0/app/bluetooth/common/sensor_sound/subdir.mk
-include gecko_sdk_3.0.0/app/bluetooth/common/sensor_select/subdir.mk
-include gecko_sdk_3.0.0/app/bluetooth/common/sensor_rht/subdir.mk
-include gecko_sdk_3.0.0/app/bluetooth/common/sensor_pressure/subdir.mk
-include gecko_sdk_3.0.0/app/bluetooth/common/sensor_light/subdir.mk
-include gecko_sdk_3.0.0/app/bluetooth/common/sensor_imu/subdir.mk
-include gecko_sdk_3.0.0/app/bluetooth/common/sensor_hall/subdir.mk
-include gecko_sdk_3.0.0/app/bluetooth/common/sensor_gas/subdir.mk
-include gecko_sdk_3.0.0/app/bluetooth/common/power_supply/subdir.mk
-include gecko_sdk_3.0.0/app/bluetooth/common/ota_dfu/subdir.mk
-include gecko_sdk_3.0.0/app/bluetooth/common/gatt_service_sound/subdir.mk
-include gecko_sdk_3.0.0/app/bluetooth/common/gatt_service_rht/subdir.mk
-include gecko_sdk_3.0.0/app/bluetooth/common/gatt_service_rgb/subdir.mk
-include gecko_sdk_3.0.0/app/bluetooth/common/gatt_service_pressure/subdir.mk
-include gecko_sdk_3.0.0/app/bluetooth/common/gatt_service_light/subdir.mk
-include gecko_sdk_3.0.0/app/bluetooth/common/gatt_service_imu/subdir.mk
-include gecko_sdk_3.0.0/app/bluetooth/common/gatt_service_hall/subdir.mk
-include gecko_sdk_3.0.0/app/bluetooth/common/gatt_service_gas/subdir.mk
-include gecko_sdk_3.0.0/app/bluetooth/common/gatt_service_battery/subdir.mk
-include gecko_sdk_3.0.0/app/bluetooth/common/gatt_service_aio/subdir.mk
-include brd4166a/subdir.mk
-include autogen/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: soc_thunderboard_brd4166a.axf

# Tool invocations
soc_thunderboard_brd4166a.axf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GNU ARM C Linker'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m4 -mthumb -T "/Users/zahidhaq/SimplicityStudio/v5_workspace/soc_thunderboard_brd4166a/autogen/linkerfile.ld" -Xlinker --gc-sections -Xlinker -Map="soc_thunderboard_brd4166a.map" -mfpu=fpv4-sp-d16 -mfloat-abi=softfp --specs=nano.specs -o soc_thunderboard_brd4166a.axf -Wl,--start-group "./advertise.o" "./app.o" "./app_properties.o" "./main.o" "./autogen/gatt_db.o" "./autogen/sl_bluetooth.o" "./autogen/sl_board_default_init.o" "./autogen/sl_device_init_clocks.o" "./autogen/sl_event_handler.o" "./autogen/sl_i2cspm_init.o" "./autogen/sl_iostream_handles.o" "./autogen/sl_iostream_init_usart_instances.o" "./autogen/sl_power_manager_handler.o" "./autogen/sl_pwm_init.o" "./autogen/sl_simple_button_instances.o" "./autogen/sl_simple_led_instances.o" "./autogen/sl_simple_rgbw_pwm_led_instances.o" "./brd4166a/rgbled.o" "./gecko_sdk_3.0.0/app/bluetooth/common/gatt_service_aio/sl_gatt_service_aio.o" "./gecko_sdk_3.0.0/app/bluetooth/common/gatt_service_battery/sl_gatt_service_battery.o" "./gecko_sdk_3.0.0/app/bluetooth/common/gatt_service_gas/sl_gatt_service_gas.o" "./gecko_sdk_3.0.0/app/bluetooth/common/gatt_service_hall/sl_gatt_service_hall.o" "./gecko_sdk_3.0.0/app/bluetooth/common/gatt_service_imu/sl_gatt_service_imu.o" "./gecko_sdk_3.0.0/app/bluetooth/common/gatt_service_light/sl_gatt_service_light.o" "./gecko_sdk_3.0.0/app/bluetooth/common/gatt_service_pressure/sl_gatt_service_pressure.o" "./gecko_sdk_3.0.0/app/bluetooth/common/gatt_service_rgb/sl_gatt_service_rgb.o" "./gecko_sdk_3.0.0/app/bluetooth/common/gatt_service_rht/sl_gatt_service_rht.o" "./gecko_sdk_3.0.0/app/bluetooth/common/gatt_service_sound/sl_gatt_service_sound.o" "./gecko_sdk_3.0.0/app/bluetooth/common/ota_dfu/sl_ota_dfu.o" "./gecko_sdk_3.0.0/app/bluetooth/common/power_supply/sl_power_supply.o" "./gecko_sdk_3.0.0/app/bluetooth/common/sensor_gas/sl_sensor_gas.o" "./gecko_sdk_3.0.0/app/bluetooth/common/sensor_hall/sl_sensor_hall.o" "./gecko_sdk_3.0.0/app/bluetooth/common/sensor_imu/sl_sensor_imu.o" "./gecko_sdk_3.0.0/app/bluetooth/common/sensor_light/sl_sensor_light.o" "./gecko_sdk_3.0.0/app/bluetooth/common/sensor_pressure/sl_sensor_pressure.o" "./gecko_sdk_3.0.0/app/bluetooth/common/sensor_rht/sl_sensor_rht.o" "./gecko_sdk_3.0.0/app/bluetooth/common/sensor_select/sl_sensor_select.o" "./gecko_sdk_3.0.0/app/bluetooth/common/sensor_sound/sl_sensor_sound.o" "./gecko_sdk_3.0.0/app/bluetooth/common/simple_timer/sl_simple_timer.o" "./gecko_sdk_3.0.0/hardware/board/src/brd4166a_support.o" "./gecko_sdk_3.0.0/hardware/board/src/sl_board_control_gpio.o" "./gecko_sdk_3.0.0/hardware/board/src/sl_board_init.o" "./gecko_sdk_3.0.0/hardware/driver/bmp280/bosch/BMP280_driver/bmp280.o" "./gecko_sdk_3.0.0/hardware/driver/bmp280/src/sl_bmp280.o" "./gecko_sdk_3.0.0/hardware/driver/ccs811/src/sl_ccs811.o" "./gecko_sdk_3.0.0/hardware/driver/icm20648/src/sl_icm20648.o" "./gecko_sdk_3.0.0/hardware/driver/imu/src/sl_imu.o" "./gecko_sdk_3.0.0/hardware/driver/imu/src/sl_imu_dcm.o" "./gecko_sdk_3.0.0/hardware/driver/imu/src/sl_imu_fuse.o" "./gecko_sdk_3.0.0/hardware/driver/imu/src/sl_imu_math.o" "./gecko_sdk_3.0.0/hardware/driver/mic/src/sl_mic_i2s.o" "./gecko_sdk_3.0.0/hardware/driver/mx25_flash_shutdown/src/sl_mx25_flash_shutdown.o" "./gecko_sdk_3.0.0/hardware/driver/si1133/src/sl_si1133.o" "./gecko_sdk_3.0.0/hardware/driver/si70xx/src/sl_si70xx.o" "./gecko_sdk_3.0.0/hardware/driver/si7210/src/sl_si7210.o" "./gecko_sdk_3.0.0/platform/Device/SiliconLabs/EFR32MG12P/Source/GCC/startup_efr32mg12p.o" "./gecko_sdk_3.0.0/platform/Device/SiliconLabs/EFR32MG12P/Source/system_efr32mg12p.o" "./gecko_sdk_3.0.0/platform/bootloader/api/btl_interface.o" "./gecko_sdk_3.0.0/platform/bootloader/api/btl_interface_storage.o" "./gecko_sdk_3.0.0/platform/common/src/sl_slist.o" "./gecko_sdk_3.0.0/platform/common/toolchain/src/sl_memory.o" "./gecko_sdk_3.0.0/platform/driver/button/src/sl_button.o" "./gecko_sdk_3.0.0/platform/driver/button/src/sl_simple_button.o" "./gecko_sdk_3.0.0/platform/driver/i2cspm/src/sl_i2cspm.o" "./gecko_sdk_3.0.0/platform/driver/leddrv/src/sl_led.o" "./gecko_sdk_3.0.0/platform/driver/leddrv/src/sl_simple_led.o" "./gecko_sdk_3.0.0/platform/driver/leddrv/src/sl_simple_rgbw_pwm_led.o" "./gecko_sdk_3.0.0/platform/driver/pwm/src/sl_pwm.o" "./gecko_sdk_3.0.0/platform/emdrv/dmadrv/src/dmadrv.o" "./gecko_sdk_3.0.0/platform/emdrv/gpiointerrupt/src/gpiointerrupt.o" "./gecko_sdk_3.0.0/platform/emlib/src/em_adc.o" "./gecko_sdk_3.0.0/platform/emlib/src/em_assert.o" "./gecko_sdk_3.0.0/platform/emlib/src/em_cmu.o" "./gecko_sdk_3.0.0/platform/emlib/src/em_core.o" "./gecko_sdk_3.0.0/platform/emlib/src/em_crypto.o" "./gecko_sdk_3.0.0/platform/emlib/src/em_emu.o" "./gecko_sdk_3.0.0/platform/emlib/src/em_gpio.o" "./gecko_sdk_3.0.0/platform/emlib/src/em_i2c.o" "./gecko_sdk_3.0.0/platform/emlib/src/em_ldma.o" "./gecko_sdk_3.0.0/platform/emlib/src/em_msc.o" "./gecko_sdk_3.0.0/platform/emlib/src/em_rtcc.o" "./gecko_sdk_3.0.0/platform/emlib/src/em_system.o" "./gecko_sdk_3.0.0/platform/emlib/src/em_timer.o" "./gecko_sdk_3.0.0/platform/emlib/src/em_usart.o" "./gecko_sdk_3.0.0/platform/radio/rail_lib/plugin/pa-conversions/pa_conversions_efr32.o" "./gecko_sdk_3.0.0/platform/radio/rail_lib/plugin/pa-conversions/pa_curves_efr32.o" "./gecko_sdk_3.0.0/platform/radio/rail_lib/plugin/rail_util_pti/sl_rail_util_pti.o" "./gecko_sdk_3.0.0/platform/service/device_init/src/sl_device_init_dcdc_s1.o" "./gecko_sdk_3.0.0/platform/service/device_init/src/sl_device_init_emu_s1.o" "./gecko_sdk_3.0.0/platform/service/device_init/src/sl_device_init_hfxo_s1.o" "./gecko_sdk_3.0.0/platform/service/device_init/src/sl_device_init_lfxo_s1.o" "./gecko_sdk_3.0.0/platform/service/iostream/src/sl_iostream.o" "./gecko_sdk_3.0.0/platform/service/iostream/src/sl_iostream_retarget_stdio.o" "./gecko_sdk_3.0.0/platform/service/iostream/src/sl_iostream_uart.o" "./gecko_sdk_3.0.0/platform/service/iostream/src/sl_iostream_usart.o" "./gecko_sdk_3.0.0/platform/service/mpu/src/sl_mpu.o" "./gecko_sdk_3.0.0/platform/service/power_manager/src/sl_power_manager.o" "./gecko_sdk_3.0.0/platform/service/power_manager/src/sl_power_manager_debug.o" "./gecko_sdk_3.0.0/platform/service/power_manager/src/sl_power_manager_hal_s0_s1.o" "./gecko_sdk_3.0.0/platform/service/sleeptimer/src/sl_sleeptimer.o" "./gecko_sdk_3.0.0/platform/service/sleeptimer/src/sl_sleeptimer_hal_rtcc.o" "./gecko_sdk_3.0.0/platform/service/system/src/sl_system_init.o" "./gecko_sdk_3.0.0/platform/service/system/src/sl_system_process_action.o" "./gecko_sdk_3.0.0/platform/service/udelay/src/sl_udelay.o" "./gecko_sdk_3.0.0/platform/service/udelay/src/sl_udelay_armv6m_gcc.o" "./gecko_sdk_3.0.0/protocol/bluetooth/src/sl_bt_mbedtls_context.o" "./gecko_sdk_3.0.0/util/silicon_labs/silabs_core/memory_manager/sl_malloc.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/library/aes.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/library/bignum.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/library/ccm.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/library/cipher.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/library/cipher_wrap.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/library/cmac.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/library/ctr_drbg.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/library/ecdh.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/library/ecdsa.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/library/ecp.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/library/ecp_curves.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/library/entropy.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/library/error.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/library/platform_util.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/library/sha1.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/library/sha256.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/library/sha512.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/library/threading.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/sl_crypto/src/crypto_aes.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/sl_crypto/src/crypto_ble.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/sl_crypto/src/crypto_ecp.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/sl_crypto/src/crypto_management.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/sl_crypto/src/crypto_sha.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/sl_crypto/src/entropy_adc.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/sl_crypto/src/entropy_rail.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/sl_crypto/src/shax.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/sl_crypto/src/sl_mbedtls.o" "./gecko_sdk_3.0.0/util/third_party/mbedtls/sl_crypto/src/trng.o" "./gecko_sdk_3.0.0/util/third_party/printf/printf.o" "./gecko_sdk_3.0.0/util/third_party/printf/src/iostream_printf.o" "/Applications/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v3.0//protocol/bluetooth/lib/EFR32MG12P/GCC/binapploader.o" "/Applications/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v3.0//protocol/bluetooth/lib/EFR32MG12P/GCC/libbluetooth.a" "/Applications/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v3.0//protocol/bluetooth/lib/EFR32MG12P/GCC/libpsstore.a" "/Applications/Simplicity Studio.app/Contents/Eclipse/developer/sdks/gecko_sdk_suite/v3.0//platform/radio/rail_lib/autogen/librail_release/librail_efr32xg12_gcc_release.a" -lgcc -lc -lm -lnosys -Wl,--end-group -Wl,--start-group -lgcc -lc -lnosys -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

	@echo 'Building hex file: soc_thunderboard_brd4166a.hex'
	arm-none-eabi-objcopy -O ihex "soc_thunderboard_brd4166a.axf" "soc_thunderboard_brd4166a.hex"
	@echo ' '

	@echo 'Building bin file: soc_thunderboard_brd4166a.bin'
	arm-none-eabi-objcopy -O binary "soc_thunderboard_brd4166a.axf" "soc_thunderboard_brd4166a.bin"
	@echo ' '

	@echo 'Building s37 file: soc_thunderboard_brd4166a.s37'
	arm-none-eabi-objcopy -O srec "soc_thunderboard_brd4166a.axf" "soc_thunderboard_brd4166a.s37"
	@echo ' '

	@echo 'Running size tool'
	arm-none-eabi-size "soc_thunderboard_brd4166a.axf" -A
	@echo ' '

# Other Targets
clean:
	-@$(foreach FILE, $(EXECUTABLES), $(shell $(RM) $(FILE)) )
	-@$(foreach FILE, $(OBJS), $(shell $(RM) $(FILE)) )
	-@$(foreach FILE, $(C_DEPS), $(shell $(RM) $(FILE)) )
	-$(RM) soc_thunderboard_brd4166a.axf
	-@echo ' '

.PHONY: all clean dependents

-include ../makefile.targets
