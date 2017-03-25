/**
 * "#define String"  memory usage
 * Results:
 *  Flash: 1366 bytes
 *  Static: 200 bytes
 */
#define VAR "A LARGE STRING"
void setup() {
  Serial.println(VAR);
  Serial.println(VAR);
  Serial.println(VAR);
  Serial.println(VAR);
}

void loop() {

}
