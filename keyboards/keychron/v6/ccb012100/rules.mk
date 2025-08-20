# custom matrix setup
CUSTOM_MATRIX = lite

SRC += matrix.c

# Combos <https://docs.qmk.fm/features/combo>
COMBO_ENABLE = yes
COMBO_SHOULD_TRIGGER = yes
# Repeat Key (<https://docs.qmk.fm/features/repeat_key>)
REPEAT_KEY_ENABLE = yes

# Copied from my Oryx ZSA config
CAPS_WORD_ENABLE = yes
