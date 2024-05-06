//set pins to variables
int leftPin = A0;
int midPin = A1;
int rightPin = A2;

//initialize data of sensors to 0
int left_data = 0;
int mid_data = 0;
int right_data = 0;

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
}

void loop() {
  String current_state = "";
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

  if(left_data >= 250){
    current_state += "1";
  }
  if(mid_data >= 250){
    current_state += "2";
  }
  if(right_data >= 250){
    current_state += "3";
  }
  if(current_state == ""){
    current_state = "0";
  }
  
  //Send the current state as an integer to the serial port
  // Serial.println(current_state);

  delay(50);

}
