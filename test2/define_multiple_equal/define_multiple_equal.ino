/**
 * "#define String"  memory usage
 * Results:
 *  Flash: 1378 bytes
 *  Static: 200 bytes
 */
#define VAR "A LARGE STRING"
#define VAR1 "A LARGE STRING"
#define VAR2 "A LARGE STRING"
#define VAR3 "A LARGE STRING"
#define VAR4 "A LARGE STRING"
#define VAR5 "A LARGE STRING"
#define VAR6 "A LARGE STRING"
void setup() {
  Serial.println(VAR);
  Serial.println(VAR1);
  Serial.println(VAR2);
  Serial.println(VAR3);
  Serial.println(VAR4);
  Serial.println(VAR5);
  Serial.println(VAR6);

}

void loop() {

}
