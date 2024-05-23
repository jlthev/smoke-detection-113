// Test update
//set pins to variables
int leftPin = A0;
int midPin = A1;
int rightPin = A2;

//initialize sensor data and threshold values to 0
int left_data = 0;
int mid_data = 0;
int right_data = 0;

float left_threshold = 0;
float center_threshold = 0;
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

int sum_l = 0;
int sum_c = 0;
int sum_r = 0;
int i = 0;

int avg_l = 0;
int avg_c = 0;
int avg_r = 0;


// float average_left = 0;
// float average_mid = 0;
// float average_right = 0;


void setup() {
  Serial.begin(9600);           //  setup serial
  normalize(); // calls normalize function, which takes 50 or more readings depending on the setting
}

void normalize(){
  // Function to normalize data during the first t seconds of operation
  // Return values to check against in the later if statements
  // Pseudo code

  //New functionality: Take 50 readings across each sensor upon startup
  //Take average of readings across each sensor.
  //Each average represents the baseline gas readings of a normal room.
  //Those averages become the thresholds for each sensor, respectively.


  while(i < 50){
    sum_l += analogRead(leftPin);
    sum_c += analogRead(midPin);
    sum_r += analogRead(rightPin);
    i++;
    delay(100);
  }
  avg_l = sum_l / i;
  avg_c = sum_c / i;
  avg_r = sum_r / i;

  sum_avg_post();

  left_threshold = avg_l + 50;
  center_threshold = avg_c + 50;
  right_threshold = avg_r + 50;

  //Total sum and average/50 values printed to the serial monitor

  
}


void sum_avg_post(){
  Serial.println();
  Serial.println();
  Serial.print("Sums and Averages: ");
  Serial.println();
  Serial.print("Side:     ");
  Serial.print("Sum Total");
  Serial.print(" | ");
  Serial.print("Averages");
  Serial.print(" | ");
  Serial.println();

  Serial.print("Left:     ");
  Serial.print(sum_l);
  Serial.print(" | ");
  Serial.print("    ");
  Serial.print(avg_l);
  Serial.println();

  Serial.print("Center:   ");
  Serial.print(sum_c);
  Serial.print(" | ");
  Serial.print("    ");
  Serial.print(avg_c);
  Serial.println();

  Serial.print("Right:    ");
  Serial.print(sum_r);
  Serial.print(" | ");
  Serial.print("    ");
  Serial.print(avg_r);
  Serial.println();

  
  Serial.println();
  Serial.println();
  Serial.print("Continuously Updating Readout: ");
  Serial.println();

}

int j = 0;

void loop() {
  String current_state = "";
  delay(250);

  left_data = analogRead(leftPin);  // read the input pin
  Serial.print(left_data);          // debug value

  Serial.print(" | ");

  mid_data = analogRead(midPin);  // read the input pin
  Serial.print(mid_data);   
  
  Serial.print(" | ");
  
  right_data = analogRead(rightPin);  // read the input pin
  Serial.print(right_data);

  Serial.println();
  Serial.println();   

  //threshhold for left: 300 MODIFIED TO 250 
  //threshold for right: 250

  if(left_data > left_threshold + 100){
    current_state += "1";
  }
  if(mid_data > center_threshold + 100){
    current_state += "2";
  }
  if(right_data > right_threshold + 100){
    current_state += "3";
  }
  if(current_state == ""){
    current_state = "0";
  }
  
  //Send the current state as an integer to the serial port
  //Serial.print("Current State: ");
  Serial.println(current_state);

  j++;

  if(j >= 16){
    j = 0;
    sum_avg_post();
  }

  delay(250);

}
