#!/usr/bin/env bash
# Run this to compile the keymap and copy the files to the Downloads folder
# After running this, open QMK Toolbox and flash the keyboard using the copied files.
qmk compile -kb keychron/k4_pro/ansi/rgb -km default &&
cp -iv .build/keychron_k4_pro_ansi_rgb_default.{bin,hex} ~/Downloads/
