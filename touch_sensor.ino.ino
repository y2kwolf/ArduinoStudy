int touchS = 7;
int pinR = 9;
int pinG = 10;
int pinB = 11;
int color = 0;
int color1, color2, color3 = 0;
int chk = 0;

void setup() {
  pinMode(touchS, INPUT);   
  //pinMode(LED_BUILTIN, OUTPUT);
  pinMode(pinR, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(pinB, OUTPUT);
  Serial.begin(9600);
  //digitalWrite(LED_BUILTIN, LOW);
}

void loop() {
  /* 
   * 아두이노 내장 램프 끄고 켜기
  if(digitalRead(7) == HIGH){ 
    //Serial.println("Touch ON");
    digitalWrite(LED_BUILTIN, HIGH);
  } else {
    //Serial.println("Touch OFF");
    digitalWrite(LED_BUILTIN, LOW);
  }
  delay(100);
  */
  
  /* 
   *  터치시마다 빨강에서 초록으로 점점 색상 바뀜
  int val = digitalRead(touchS);
  Serial.println(val);
  
  if (val == HIGH && chk == 0) {
    chk = 1;
    analogWrite(pinR, 255-color);
    analogWrite(pinG, color);

    color = color + 1;
    Serial.println(color);
    if (color > 255) {
      color = 0;
    } 
  } else if (val == LOW) {
      chk = 0;      
  }
  */
  
  // 터치시 랜덤하게 색상 램프 켜기
  int val = digitalRead(touchS);
  Serial.println(val);
  
  if (val == HIGH && chk == 0) {
    chk = 1;
    color1 = random(0, 255);
    color2 = random(0, 255);
    color3 = random(0, 255);    
    analogWrite(pinR, color1);
    analogWrite(pinG, color2);
    analogWrite(pinB, color2);
  } else if (val == LOW) {
    chk = 0;      
  }  
}
