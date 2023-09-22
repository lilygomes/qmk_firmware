# flutterpad

![flutterpad](imgur.com image replace me!)

world's most scuffed 8k macropad

* Keyboard Maintainer: [lilygomes](https://github.com/lilygomes)
* Hardware Supported: *The PCBs, controllers supported*
* Hardware Availability: *Links to where you can find this hardware*

Make example for this keyboard (after setting up your build environment):

    make flutterpad:default

Flashing example for this keyboard:

    make flutterpad:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Access the reset buttons through an access hole on the bottom of each half.
* **Keycode in layout**: Toggle on layer 1 (top-right key) and tap reset (top-left key).
