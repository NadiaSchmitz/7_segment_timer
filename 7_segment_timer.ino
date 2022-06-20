int pin_a = 6;
int pin_b = 7;
int pin_c = 8;
int pin_d = 9;
int pin_e = 10;
int pin_f = 11;
int pin_g = 12;
int gnd_4 = 4;
byte zahlen[10] = {0b00111111, 0b00000110, 0b01011011, 0b01001111, 0b01100110, 0b01101101, 0b01111101, 0b00000111, 0b01111111, 0b01101111};
byte number;

void setup(){
  pinMode(pin_a, OUTPUT);
  pinMode(pin_b, OUTPUT);
  pinMode(pin_c, OUTPUT);
  pinMode(pin_d, OUTPUT);
  pinMode(pin_e, OUTPUT);
  pinMode(pin_f, OUTPUT);
  pinMode(pin_g, OUTPUT);
  pinMode(gnd_4, OUTPUT);
}
 
void loop(){
  for (int j = 0; j <= 9; j++) {
    int zahl = zahlen[j];
    for (int i = 0; i < 7; ++i) {
      boolean enableSegment = bitRead(zahl, i);
      digitalWrite(i + 6, enableSegment);
    }
    delay(1000);
  }
}
