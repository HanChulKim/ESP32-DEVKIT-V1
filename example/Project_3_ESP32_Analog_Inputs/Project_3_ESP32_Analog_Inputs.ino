// 가변저항을 GPIO 4 에 연결한다. (아날로그 ADC2_CH0)
const int potPin = 4;

// 가변저항 값을 저장하기 위한 변수
int potValue = 0;

void setup() {
    Serial.begin(115200);
    delay(1000);
} 

void loop() {
    
    // 가변저항 값을 읽음
    potValue = analogRead(potPin);
    
    Serial.println(potValue);

    delay(500);
    
}
