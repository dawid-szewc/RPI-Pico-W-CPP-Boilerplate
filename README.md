# Set Up the Raspberry Pi Pico for Development on macOS
1. Install the Toolchain
```sh
brew install cmake
brew tap ArmMbed/homebrew-formulae
brew install arm-none-eabi-gcc
```
2. Prepare Pico SDK
```sh
git clone -b master https://github.com/raspberrypi/pico-sdk.git 
cd pico-sdk
git submodule update --init
```
3. Add folowing line to your ~/.zshrc 
```sh
export PICO_SDK_PATH="$HOME/< location >/pico-sdk"
```
4. Clone this repository and build project
```sh
git clone https://github.com/dawid-szewc/RPI-Pico-W-CPP-Boilerplate
cd RPI-Pico-W-CPP-Boilerplate
sh deploy.sh
```
5. Check the result
```sh
screen /dev/cu.< usb device name >
```
