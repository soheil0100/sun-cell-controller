const int IN1 = 13;
const int IN2 = 12;
const int ENA = 11;
float a=0.0;
float b=0.0;
float c=0.0;
float d=0.0;
float e=0.0;
float f=0.0;
float g=0.0;
float h=0.0;
int k=0;
int i=0;


void setup() {

  pinMode (IN1, OUTPUT);
  pinMode (IN2, OUTPUT);
  pinMode (ENA, OUTPUT);
  analogWrite(ENA, 0);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  pinMode (2, INPUT);
  pinMode (A0, INPUT);
  pinMode (A1, INPUT);
  pinMode (A2, INPUT);
  pinMode (A3, INPUT);
  pinMode (A4, INPUT);
  pinMode (A5, INPUT);
  pinMode (9, INPUT);
  pinMode (10, INPUT);
  

}

void loop() {

  a=analogRead(A0);
  b=analogRead(A1);
  c=analogRead(A2);
  d=analogRead(A3);
  e=analogRead(A4);
  f=analogRead(A5);
  g=analogRead(9);
  h=analogRead(10);
  if (a>b){
    if (a>c){
      if (a>d){
        if (a>e){
          if (a>f){
            if (a>g){
              if (a>h){
                k=0;
                if (k>i){
                  analogWrite(ENA, 255);
                  digitalWrite(IN1, HIGH);
                  digitalWrite(IN2, LOW);
                  if (digitalRead(0)==1){
                    analogWrite(ENA, 0);
                    digitalWrite(IN1, LOW);
                    digitalWrite(IN2, LOW);
                    i=0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
if (b>a){
    if (b>c){
      if (b>d){
        if (b>e){
          if (b>f){
            if (b>g){
              if (b>h){
                k=1;
                if (k>i){
                  analogWrite(ENA, 255);
                  digitalWrite(IN1, HIGH);
                  digitalWrite(IN2, LOW);
                  if (digitalRead(1)==1){
                    analogWrite(ENA, 0);
                    digitalWrite(IN1, LOW);
                    digitalWrite(IN2, LOW);
                    i=1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
    if(i==k){
      analogWrite(ENA, 0);
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, LOW);
    }

  if (k<i){
    analogWrite(ENA, 255);
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
  }
  

}
