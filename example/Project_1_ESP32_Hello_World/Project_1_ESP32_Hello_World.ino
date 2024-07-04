char val; // “val” 변수 정의 

void setup() {
     Serial.begin(115200); // 115200 로 시리얼 속도 설정 
} 

void loop() { 
   if (Serial.available() > 0) {
      val=Serial.read(); //“val” 에 시리얼로 부터 읽은 값 저장
     if (val == 'L') { //읽은 값이 "L" 인지 확인함. 
          Serial.println("Hello World!"); // L 이 맞다면 “Hello World!” 출력
     }
   }
}
