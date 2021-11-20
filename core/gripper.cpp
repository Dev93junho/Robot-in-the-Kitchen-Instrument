#include <iostream>

using namespace std;

struct gripper {
private:
    float distance;
    int theta;
public:
    Dist2Obj(float d) { distance = d; };
    float gr_servo();
};

float Dist2Obj::gr_servo(){
    return theta;
}

int main(void){
    if(d < 10)
    cout<< theta << 90;
}
