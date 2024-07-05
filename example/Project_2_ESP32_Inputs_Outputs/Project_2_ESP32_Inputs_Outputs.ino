// GPIO 핀 번호를 설정한다.
const int buttonPin = 4;    // 푸쉬버튼 GPIO 핀 번호 설정
const int ledPin = 5;       // LED GPIO 핀 번호 설정

// 푸쉬 버튼의 상태를 저장해 놓은 변수 설정
int buttonState = 0;

void setup() {

    Serial.begin(115200);       
    pinMode(buttonPin, INPUT);  // 푸쉬버튼 핀을 INPUT 으로 설정
    pinMode(ledPin, OUTPUT);    // LED 핀을 OUTPUT으로 설정 
} 

void loop() {
    
    // 푸쉬버튼에 대한 상태값을 읽어온다.
    buttonState = digitalRead(buttonPin);
    Serial.println(buttonState);    // 버튼 상태 시리얼 출력
    // 푸쉬버튼이 눌러졌는지 체크한다.
    // 만약 푸쉬버튼이 눌려졌다면 buttonState 값이 HIGH로 들어온다.
    if (buttonState == HIGH) {
        // LED를 켠다
        digitalWrite(ledPin, HIGH);
    } else {
        // LED를 끈다.
        digitalWrite(ledPin, LOW);
    }
    
}
