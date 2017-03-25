# arduino-sram-tests

> A series of test to understand the way of an Arduino manages their memory

## What is this?
I was working on a relatively large project in an Arduino Mega when I began to experiment problems with the lack of SRAM, I searched about it but I found a lot of controversies about it. So I decided to make my own tests.

All test was made in an Arduino UNO.

## Tests
### Test 1: Bare Minimum
A very simple test. used as a reference

### Test 2: #Define Memory Usage
Using the #Define defining Strings instruction will not repeat the data into the static variables. it means that:

```c++
# define VAR "A string"
void setup(){
  Serial.print(VAR);
  Serial.print(VAR);
  Serial.print(VAR);
}
```
Allocates VAR in the static memory only one time. the same happens when you use numbers

### Test 3: const Memory Usage

### Test 4: Repeated strings memory usage

### Test 5: if (someVar == true) Memory Usage

### Test 6: Nested function call Stack Usage.

### Test 7: defining or not byte array size
###  Test 8: local variables minimization
## Useful material
https://learn.adafruit.com/memories-of-an-arduino/arduino-memories
http://web-engineering.info/node/30
http://www.avrfreaks.net/forum/tut-c-gcc-and-progmem-attribute?name=PNphpBB2&file=viewtopic&t=38003
## License

MIT © [Fabian Enrique Gutierrez](http://fabiangutierrez.co)
