// Test update
//set pins to variables
int leftPin = A0;
int midPin = A1;
int rightPin = A2;

//initialize data of sensors to 0
int left_data = 0;
int mid_data = 0;
int right_data = 0;

float left_threshold = 0;
float mid_threshold = 0;
float right_threshold = 0;

//#include <string>

//state0 = 0 //nothing
//state1 = 1 //left only
//state2 = 2 //middle only
//state3 = 3 //right only
//state12 = 12 //left + middle
//state13 = 13 //left + right
//state23 = 23 //middle + right
//state123 = 123 //all

void setup() {
  Serial.begin(9600);           //  setup serial
}

void normalize(){
  // Function to normalize data during the first t seconds of operation
  // Return values to check against in the later if statements
  // Pseudo code

  //New functionality: Wait five-to-ten seconds upon startup.
  //Take average of readings across each sensor for five seconds.
  //Each average represents the baseline gas readings of a normal room.
  //Those averages become the thresholds for each sensor, respectively.

  delay(500);

  float sum_left50 = 0;
  for (int i = 0; i < 50; i++){ // take fifty readings
      analogRead(leftPin);
      sum_left50 += leftPin;
  }
  float average_left = sum_left50 / 50;

  float sum_right50 = 0;
  for (int i = 0; i < 50; i++){ // take fifty readings
      analogRead(rightPin);
      sum_right50 += rightPin;
  }
  float average_right = sum_right50 / 50;


  float sum_mid50 = 0;
  for (int i = 0; i < 50; i++){ // take fifty readings
      analogRead(midPin);
      sum_mid50 += midPin;
  }
  float average_mid = sum_mid50 / 50;


  left_threshold = average_left;
  right_threshold = average_right;
  mid_threshold = average_mid;

  //return (left_threshold,);
  //return (right_threshold);
  //return (mid_threshold);

}

void loop() {
  String current_state = "";
  
  normalize(); // calls normalize function, which takes 5-10 seconds depending on the setting
  
  left_data = analogRead(leftPin);  // read the input pin
  Serial.print(left_data);          // debug value

  Serial.print(" | ");

  mid_data = analogRead(midPin);  // read the input pin
  Serial.print(mid_data);   
  
  Serial.print(" | ");
  
  right_data = analogRead(rightPin);  // read the input pin
  Serial.print(right_data);

  Serial.println();   

  //threshhold for left: 300 MODIFIED TO 250 
  //threshold for right: 250

  if(left_data >= left_threshold){
    current_state += "1";
  }
  if(mid_data >= mid_threshold){
    current_state += "2";
  }
  if(right_data >= right_threshold){
    current_state += "3";
  }
  if(current_state == ""){
    current_state = "0";
  }
  
  //Send the current state as an integer to the serial port
  // Serial.println(current_state);

  delay(50);

}
