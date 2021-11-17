/*
Inverse Kinematics model initialize
Created by Junho Shin in Nov. 2021
*/

#include <iostream>
#include <Eigen/Dense>
#include <vector>
using namespace std;

struct kinematics
{
    /* MANIPULATOR LINK LENGTH */
    int LINK1=1;
    int LINK2=2;
    int LINK3=3;
};


// need to define goal coordinate from external system
void pointArray(float x, float y, float z){
    cout << (x, y, z);
}

// output data using theta array for joint rotate
void thetaArray(){

}

int main(void){

    // read the goal data in control system

    // return the data
}

