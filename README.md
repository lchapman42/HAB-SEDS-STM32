# SEDS HAB STM32 Code

The "test" directory contains the old HAB code used for Arduino/Teensy

The "src" directory is for adding the STM32 equivalent of the Arduino/Teensy code to

Current configuration is for the Nucleo-G474RE board, though .ini file does contain environment variables and flags for use with the more powerful Nucleo-H723ZG board for possible upgrades later on

## To run

``` pio run
```

Compiles the pio project

``` pio run --target upload
```

Uploads the compiled project to the nucleo board
