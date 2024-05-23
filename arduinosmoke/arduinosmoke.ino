



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

  int sum_l = 0;
  int sum_c = 0;
  int sum_r = 0;
  int i = 0;

  while(i < 50){
    sum_l += analogRead(leftPin);
    sum_c += analogRead(midPin);
    sum_r += analogRead(rightPin);
    i++;
    delay(200);
  }
  

  //Total sum and average/50 values printed to the serial monitor
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

  int avg_l = sum_l / i;
  int avg_c = sum_c / i;
  int avg_r = sum_r / i;


  left_threshold = avg_l + 50;
  center_threshold = avg_c + 50;
  right_threshold = avg_r + 50;


  //Sum readouts in serial monitor
  // Serial.print("Sum Left:  ");
  // Serial.println(sum_l);
  // Serial.println();
  // Serial.print("Sum Center:  ");
  // Serial.println(sum_c);
  // Serial.println();
  // Serial.print("Sum Right:  ");
  // Serial.println(sum_r);
  // Serial.println();
  // Serial.println();
  
  //Average of sum/50 readouts in serial monitor
  // Serial.print("Average Left:  ");
  // Serial.println(avg_l);
  // Serial.println();
  // Serial.print("Average Center:  ");
  // Serial.println(avg_c);
  // Serial.println();
  // Serial.print("Average Right:  ");
  // Serial.println(avg_r);
  // Serial.println();


  // float sum_left50 = 0;
  // float sum_right50 = 0;
  // long sum_mid50 = 0L;

  // for (int i = 0; i < 50; i++){ // take fifty readings
  //     analogRead(leftPin);
  //     sum_left50 += leftPin;
  // }
  // average_left = sum_left50 / 50;

  
  // for (int i = 0; i < 50; i++){ // take fifty readings
  //     analogRead(rightPin);
  //     sum_right50 += rightPin;
      
  // }
  // average_right = sum_right50 *1 / 50;

  // for (byte i = 0; i < 50; i++){ // take fifty readings
  //     analogRead(midPin);
  //     Serial.print(midPin);
  //     Serial.println();
  //     sum_mid50 += midPin;
  //     Serial.print(sum_mid50);
  //     Serial.print("    ");
  //     delay(100);
  // }

  // average_mid = sum_mid50 / 50;

  // left_threshold = average_left;
  // right_threshold = average_right;
  // mid_threshold = average_mid;

  
  // Serial.print("sum_left/mid/right");
  // Serial.println();
  // Serial.print("Left: ");
  // Serial.print(sum_left50);
  // Serial.print("    ");
  // Serial.print("Mid: ");
  // Serial.print(sum_mid50);
  // Serial.print("    ");
  // Serial.print("Left: ");
  // Serial.print(sum_right50);
  // Serial.println();
  // Serial.print("Averages:");
  // Serial.println();
  // Serial.print(average_left);
  // Serial.print("    ");
  // Serial.print(average_mid);
  // Serial.print("    ");
  // Serial.print(average_right);
  // Serial.print("    ");
  // Serial.println();
  // Serial.print("End");
  // Serial.println();
  // Serial.println();

  
}


void loop() {
  String current_state = "";
  //delay(10000);
  //Serial.print("Left:");
  //Serial.print(left_threshold);
  //Serial.print("  ");
  //Serial.print("Mid:");
  //Serial.print(mid_threshold);
  //Serial.print("  ");
  //Serial.print("Right:");
  //Serial.print(right_threshold);
  //Serial.println();  

  delay(5000);

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
  Serial.print("Current State: ");
  Serial.println(current_state);

  delay(1000);

}
