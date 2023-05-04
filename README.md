
# QMK Firmwares for SplittedSpace keyboards

This is the repository where you can download pre-built QMK firmware for your keyboard. More details about QMK as well as the instructions for a modification you can read at the [official repository](https://github.com/qmk/qmk_firmware)

## Prerequisites

For flashing the firmware we recommend using [QMK Toolbox](https://github.com/qmk/qmk_toolbox)

## How to flash firmware

1. Go to a folder for your keyboard
2. Choose the appropriate file; all files are prefixed with the exact keyboard model, also the readme describes the firmware details
3. Download the file to your computer
4. Open QMK Toolbox and choose in "Local file" the previously downloaded firmware
5. Connect your keyboard to USB
6. Find the Reset button on your keyboard and press it.  May need one or two pressing
7. Press the "Flash" button and wait until the firmware be flashed
8. Happy)

## Modification

Since there may be some changes in keyboard layouts and also to simplify firmware modifications we provide QMK configuration files we are using for firmware. They are located inside the appropriate keyboard folders. You can use them in your own firmware development.