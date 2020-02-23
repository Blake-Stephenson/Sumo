/* 
 * By: Blake Stephenson
 * 
 * Logic of code, needs proper pin I/O
 * 
 * Might implement lib for ultrasonic and line sensor
 * 
 * 
 * code will all be in a function that will only run once a
 * button is pressed, then it will wait a set ammount of time
 * before starting
 */


//h bridge declaration
/*const int IN1= ;
const int IN2= ;
const int IN3= ;
const int IN4= ;
*/
//ultrasonic declaration

//ir declaration
int left_ir;
int right_ir;

//start button
const int start_b = 2;
bool play = false;
bool check_p = true;



void setup() {
  Serial.begin(9600);

  pinMode(start_b, INPUT);
}

void loop() {
  if((digitalRead(start_b)==HIGH) and (check_p == true)){
    delay(3000); // set ammount before starting
    check_p = false;
    play = true;
  }
  if(play == true){
    fight();
  }
}

void fight(){
  /*turn right (45deg) go forward 10 cm, 
   *rotate to opponent(10 deg more then when ultra returns dist) 
   *drive forward to opp, with continuous check for dist, 
   *when no dist turn left until dist and repeat
   *
   *if at any point ir notices black line, 
   *turn and move away while checking for ir on line
   */
}



int read_ultra(){
  //will implement library to get exact value
  return distance;
}

bool read_ir(int sensor, int val){
  if(sensor == 0){
    if(digitalRead(left_ir)>=val){
      return true;
    }
  }else if(sensor ==1){
    if(digitalRead(right_ir)>=val){
      return true;
    }
  }else(){
    return false;
  }
}

void drive_f(int Speed){
  analogWrite(IN1,);
  analogWrite(IN2,);
  analogWrite(IN3,);
  analogWrite(IN4,);
}

void drive_b(int Speed){
  analogWrite(IN1,);
  analogWrite(IN2,);
  analogWrite(IN3,);
  analogWrite(IN4,);
}

void turn_r(int Speed){
  analogWrite(IN1,);
  analogWrite(IN2,);
  analogWrite(IN3,);
  analogWrite(IN4,);
}

void turn_l(int Speed){
  analogWrite(IN1,);
  analogWrite(IN2,);
  analogWrite(IN3,);
  analogWrite(IN4,);
}

void stop(){
  analogWrite(IN1,0);
  analogWrite(IN2,0);
  analogWrite(IN3,0);
  analogWrite(IN4,0);
}
