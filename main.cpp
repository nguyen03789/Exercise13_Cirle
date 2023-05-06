#include <stdio.h>
#include <stdint.h>
#include <math.h>
#define PI 3.141592
using namespace std;

class Cirle{
    private:
        int8_t radius;
    public:
        int8_t get_radius();
        void Set_Cirle(int8_t radius = 0);
};

void Cirle::Set_Cirle(int8_t radius){
    this->radius = radius;
}

int8_t Cirle::get_radius(){
    return this->radius;
}


class Cirle_cal{
    private:
        Cirle A;
    public:
        Cirle_cal(Cirle A);
        void Get_Perimeter(Cirle A);
        void Get_Area(Cirle A);
};

Cirle_cal::Cirle_cal(Cirle A){
    this->A = A;
}

void Cirle_cal::Get_Perimeter(Cirle A){
     double result = 2 * PI * A.get_radius();
     printf("The Perimeter of Cirle is %lf\n",result) ;
}

void Cirle_cal::Get_Area(Cirle A){
     double result = PI* pow(A.get_radius(),2);
     printf("The Area of Rectangle is %lf\n",result) ;
}

int main(int argc, char const *argv[])
{
    Cirle A;
    A.Set_Cirle(2);
    Cirle_cal Set(A);
    Set.Get_Area(A);
    Set.Get_Perimeter(A);
    return 0;
}
