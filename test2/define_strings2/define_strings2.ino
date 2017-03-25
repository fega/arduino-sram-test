/**
 * "#define String"  memory usage
 * Results:
 *  Flash: 1334 bytes
 *  Static: 200 bytes
 */
#define VAR "A LARGE STRING"
void setup() {
  Serial.println(VAR);
}

void loop() {

}
