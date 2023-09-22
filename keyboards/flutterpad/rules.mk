MCU = atmega32u4
F_CPU = 16000000
F_USB = $(F_CPU)

SPLIT_KEYBOARD = yes
EXTRAKEY_ENABLE = yes       # Audio control and System control
NKRO_ENABLE = yes
BACKLIGHT_ENABLE = no      # Enable keyboard backlight functionality
AUDIO_ENABLE = no           # Audio output
RGBLIGHT_ENABLE = no       # Enable WS2812 RGB underlight. 
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
SLEEP_LED_ENABLE = no
BOOTMAGIC_ENABLE = yes
