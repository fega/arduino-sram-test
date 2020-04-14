# arduino-sram-tests

> A series of test to understand the way of an Arduino manages their memory

## What is this?
I was working on a relatively large project in an Arduino Mega when I began to experiment problems with the lack of SRAM, I searched about it but I found a lot of controversies about it. So I decided to make my own tests.

All test was made in an Arduino UNO.

## Tests
### Test 1: Bare Minimum
A very simple test. used as a reference

### Test 2: #define Memory Usage
Using the #define word to define Strings constants will not repeat the data into the static variables. It means that:

```c++
# define VAR "A string"
void setup(){
  Serial.print(VAR);
  Serial.print(VAR);
  Serial.print(VAR);
}
```
Allocates VAR in the static memory only one time. the same happens when you use numbers

Also, if you uses something like
```c++
# define VAR "A string"
# define VAR1 "A string"

void setup(){
  Serial.print(VAR);
  Serial.print(VAR1);
}
```
The compilator is smart enough to save "A string" only one time in the Static memory.

Another advantage is when you define something and it is never used:
```c++
# define VAR "A string"

void setup(){

}
```
In this case, "A string", never will be placed in the static memory.
### Test 3: const Memory Usage
The "const" word, have a different impact when you try to use in repeated data, for example:

```c++
# define VAR "A string"
# define VAR1 "A string"

void setup(){
  Serial.print(VAR);
}
```
Will be placing two copies of "A string" in the static memory (Notice that VAR1 is never used).

For the other side, it looks like that "const" is efficient when is manages Float or int data, in this case, the data is stored in the flash memory and only if it is used

Also, the const keyword is a lot more expensive in terms of flash memory used compared with the #define keyword

### Test 4: Repeated strings memory usage
If you have a non-declared string like:
```c++
void setup() {
  Serial.println("String");
  Serial.println("String");
  Serial.println("String");
  Serial.println("String");
}
```
The compiler only saves a copy of the `"String"` in the Static memory of the Arduino. But if you try to use the `F()` function (that is a common way to save the precious SRAM of your Arduino), it will create four copies of the string in the Flash memory, in those cases, the use of the [PROGMEM](https://www.arduino.cc/en/Reference/PROGMEM) Keyword could be wise.

## Useful material
https://learn.adafruit.com/memories-of-an-arduino/arduino-memories

http://web-engineering.info/node/30

http://www.avrfreaks.net/forum/tut-c-gcc-and-progmem-attribute?name=PNphpBB2&file=viewtopic&t=38003

## License

MIT © [Fabian Enrique Gutierrez](http://fabiangutierrez.co)
