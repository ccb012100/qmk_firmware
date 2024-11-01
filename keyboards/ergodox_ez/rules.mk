# If you have Left LEDs (see
# https://geekhack.org/index.php?topic=22780.msg873819#msg873819 for
# details), include the following define:
# OPT_DEFS += -DLEFT_LEDS

CUSTOM_MATRIX    = lite # Custom matrix file for the ErgoDox EZ

# project specific files
SRC += matrix.c
I2C_DRIVER_REQUIRED = yes

# Disable unsupported hardware
AUDIO_SUPPORTED = no
BACKLIGHT_SUPPORTED = no

MOUSE_SHARED_EP = no

DEFAULT_FOLDER = ergodox_ez/base

# Combos <https://docs.qmk.fm/features/combo>
COMBO_ENABLE = yes
# Caps Word (<https://docs.qmk.fm/features/caps_word>)
CAPS_WORD_ENABLE = yes
# Repeat Key (<https://docs.qmk.fm/features/repeat_key>)
REPEAT_KEY_ENABLE = yes

# Copied from my Oryx ZSA config
CAPS_WORD_ENABLE = yes
COMMAND_ENABLE = no
CONSOLE_ENABLE = no
LTO_ENABLE = yes
SPACE_CADET_ENABLE = no
