/*

                            --     Project     --


        #######   ######## ##       ########  ######  ######## ########
        ##       ##       ##       ##       ##    ##    ##    ##
        ##        ##       ##       ##       ##          ##    ##
        ##        ######   ##       ######    ######     ##    ######
        ##        ##       ##       ##             ##    ##    ##
        ##       ##       ##       ##       ##    ##    ##    ##
        #######  ######## ######## ########  ######     ##    ########


-----------------------------  Main Controller  -------------------------------


*/

/* ===========================  Declarations  ============================== */

#include <Arduino.h>
#include <XBee.h>
#include <PID_v1.h>

int position_estimate[]={3,3,3}; // meters?

int motor_N_pin;
int motor_E_pin;
int motor_S_pin;
int motor_W_pin;
int ballast_pin;

int sensor_slave_pin;

bool on_voyage = false;
int state = 0; // 0 = off; 1 = voyage; 2 = motor test; 3 = sensor test; 4 = data

/* ==============================  Setup  ================================ = */


void setup()
{
  Serial.begin(9600);
}

/* ============================  Main Loop  ================================ */


void loop()
{


}



/* ================================ Modes ================================== */

void voyage(){

}

void test_motors_and_ballast(){

}

void test_sensor_system(){

}

void data_retrieval(){

}


/* ======================== Control Architectures ========================== */

void navigate_to_position(int position_estimate[]){

  //something like a PID estimate -> motor commands

}


/* ======================  Motor Control Functions   ======================= */


void motor_N(int level){

  //something like analogWrite(pinNum,level)

}

void motor_W(int level){

  //something like analogWrite(pinNum,level)

}

void motor_S(int level){

  //something like analogWrite(pinNum,level)

}

void motor_E(int level){

  //something like analogWrite(pinNum,level)

}

void ballast_control(int level){

  //something like analogWrite(pinNum,level)

}

/* ====================   Sensor Interface Functions   ===================== */


 void update_position_estimate(int position_estimate[]){

  // get position estimate from slave Teensy
  // maybe also have sampling rate as parameters?

}


/* =====================  Radio Interface Functions   =====================  */



/* =========================== THIS IS THE END ============================= */
