#include <iostream>
using namespace std;
int main(){
    string name ;
    cout <<"=======================" << endl ;
    cout <<"|| Whet is you name  ||"<< endl ;
    cout <<"=======================" << endl ;
    cout << "Your name : " ;
    cin >> name ;

    int age ;
    cout <<"=====================" << endl ;
    cout <<"|| How old are you ||" << endl ;
    cout <<"=====================" << endl ;
    cout << "Your age : " ;
    cin  >> age ;

    int tall ;
    cout << "======================" << endl ;
    cout << "|| How tall are you ||" << endl ;
    cout << "======================" << endl ;
    cout << "Your are tall : " ;
    cin  >> tall ;

    int weight ;
    cout << "=======================" << endl ;
    cout << "|| How heavg are you ||" << endl ;
    cout << "=======================" << endl ;
    cout << "Your weight : " ;
    cin  >> weight ;

    string address ;
    cout << "=======================" << endl ;
    cout << "|| where do you live ||" << endl ;
    cout << "=======================" << endl ;
    cout << "Your residence : " ;
    cin  >> address ;

    cout << endl ;
    cout << "==============" << endl ;
    cout << "|| conclude ||" << endl ;
    cout << "==============" << endl ;
    cout << "============================" << endl ;
    cout << "||You name is "<< name << endl ;
    cout << "||You are old "<< age  << " years old" << endl ;
    cout << "||You are tall " << tall << " cm." << endl ;
    cout << "||You have weight " << weight << " kg."<< endl ;
    cout << "||You live at " << address << endl ;
}