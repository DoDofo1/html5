#include<iostream>
using namespace std;
int main (){
    double r,h ;
    double Area ;
    double Volume ;
    cout << "ใส่รัสมีของทรงกระบอก :";
    cin >> r ;
    Area = 1.314*r*r;
    cout << "ค่าของArea :" <<Area ;
    
    cout << "ใส่ความสูงของทรงกระบอก :";
    cin >> h ;
    Volume = Area*h;
    cout << "ค่าของVolume :"<< Volume ;

}