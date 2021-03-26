# MCU name
MCU = STM32F401

# Address of the bootloader in system memory
STM32_BOOTLOADER_ADDRESS = 0x1FFF0000

# Bootloader selection. Choose from 'atmel-dfu', 'bootloadHID', 'caterina', 'halfkay', 'kiibohd', 'lufa-dfu', 'lufa-ms', 'micronucleus', 'qmk-dfu', 'stm32-dfu', 'stm32duino', 'unknown', 'USBasp'
# BOOTLOADER = stm32-dfu

# Build Options
# change yes to no to disable
#
BOOTMAGIC_ENABLE = yes       # Virtual DIP switch configuration
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = yes           # USB Nkey Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = yes        # Enable keyboard RGB underglow
BLUETOOTH_ENABLE = no       # Enable Bluetooth
AUDIO_ENABLE = no           # Audio output
DIP_SWITCH_ENABLE = no
ENCODER_ENABLE = yes
TAP_DANCE_ENABLE = no
COMBO_ENABLE = no

LAYOUTS = ortho_2x4
