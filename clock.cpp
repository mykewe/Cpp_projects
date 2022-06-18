#include <iostream>
#include <unistd.h>

using namespace std;
//Create a clock
int main(){
    //Declare hour, mins, and seconds
    int h, m, s;
    //Declare constants
    int a, err;
    err=a=0;

    while(err==0){
        //Enter valid hour, minutes and seconds
        cout << "enter hour : " << endl;
        cin >> h;
        cout << "enter minutes : "<< endl;
        cin >> m;
        cout << "enter seconds : " << endl;
        cin >> s;
        if (h<24 && m < 60 && s < 60){
            err++;
        }
        else{
            system("clear");
        }

    }

    while (a==0){
        //Update time
        system("clear");
        cout <<h <<":"<<m <<":"<<s <<endl;
        usleep(1000000);
        s++;
        if(s>59){
            s=0;
            m++;
        }
        if (m>59){
            m =0;
            h++;
        }
        if (h>24){
            h=0;
        }
    }
    return 0;
}