# 정보

간단하게 파란 LED를 깜빡이는 예제이다.

원래 코드는 아두이노에 내장되어 있는 샘플 코드로 ESP32 Devkit v1 에 맞게 아래와 같이 한줄 추가했다. 

```c
#define LED_BUILTIN 2
```

ESP32 DevKit v1 에서 LED 는 GPIO2에 연결되어 있다.