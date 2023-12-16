# Repository is deprecated!
## All firmwares are now available in the Releases section of the new repository which also contains full source code: [https://github.com/SplittedSpace/qmk-keyboards](https://github.com/SplittedSpace/qmk-keyboards)


# QMK Firmwares for SplittedSpace keyboards

This is the repository where you can download pre-built QMK firmware for your keyboard. More details about QMK as well as the instructions for a modification you can read at the [official repository](https://github.com/qmk/qmk_firmware)

## Prerequisites

For flashing the firmware we recommend using [QMK Toolbox](https://github.com/qmk/qmk_toolbox)

## How to flash firmware

Note: each half should be flashed separately so all steps 1-7 need to be done twice (8 as you wish).

1. Go to a folder for your keyboard
2. Choose the appropriate .hex (or .bin) file; all files are prefixed with the exact keyboard model, also the readme describes the firmware details
3. Download the file to your computer
4. Open QMK Toolbox and choose in "Local file" the previously downloaded firmware
5. Connect your keyboard to USB
6. Find the Reset button on your keyboard and press it.  May need one or two pressing
7. Press the "Flash" button and wait until the firmware be flashed
8. Enjoy)

## Modification

For building your own firmware you can use one of the following firmware repositories:

* [QMK](https://github.com/qmk/qmk_firmware)
* [VIAL](https://github.com/vial-kb/vial-qmk)

Using VIAL allows getting the more powerful way of configuration but needs much more internal memory so not all features can be present at a time.

Since there may be some changes in keyboard layouts and also to simplify firmware modifications we provide QMK configuration files we are using for firmware. They are located inside the appropriate keyboard folders. You can use them in your own firmware development.

### Arduino

Arduino installed on the boards has ```Atmega32u4``` controller with ```Caterina``` bootloader

### Leds

All the boards have WS2812/SK6812 diodes for RGB lighting. Optionally if your board has only the bottom lighting RGBW setting should be used in QMK configuration.
