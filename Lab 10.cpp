/*Unit conversion calculator (volume, mass, and distance in either standard or metric)
*@author Rylee Stafford
*@date 10/2/18
*/

#include<iostream>
using namespace std;

int main (void){
    //get unit from user
    cout<<"Enter type of unit: volume (v), mass (m), or distance (d): ";
    char TypeUnit;
    cin>>TypeUnit;
    //standard to metric or metric to standard
    cout<<"convert to standard (s) or metric (m): ";
    char TypeConvert;
    cin>>TypeConvert;
    bool toMetric=TypeConvert=='m';
        //convert volume from fluid oz. to liters
        if (TypeUnit == 'v'){
                if(toMetric){
                    cout<<"\tEnter amount of fluid oz.: ";
                    float volume;
                    cin>>volume;
                    volume*=0.2957;
                    cout<<"\t"<<volume<<" liters";
        }
        //convert volume from liters to fluid oz.
                else{
                    cout<<"\tEnter amount of liters: ";
                    float volume;
                    cin>>volume;
                    volume*=33.814;
                    cout<<"\t"<<volume<<" fluid oz.";
        }
}
        //convert mass from pounds to kilograms
        else if(TypeUnit == 'm'){
                if(toMetric){
                    cout<<"\tEnter amount of lbs: ";
                    float mass;
                    cin>>mass;
                    mass*=0.4535;
                    cout<<"\t"<<mass<<" kg";
        }
         //convert mass from kilograms to pounds
                else{
                    cout<<"\tEnter amount of kg: ";
                    float mass;
                    cin>>mass;
                    mass*=2.204;
                    cout<<"\t"<<mass<<" lbs";
        }
}
        //convert distance from feet to meters
        else if(TypeUnit == 'd'){
                if(toMetric){
                    cout<<"\tEnter amount of feet: ";
                    float distance;
                    cin>>distance;
                    distance*=0.3048;
                    cout<<"\t"<<distance<<" meters";
        }
        //convert distance from meters to feet
                else{
                    cout<<"\tEnter amount of meters: ";
                    float distance;
                    cin>>distance;
                    distance*=3.2808;
                    cout<<"\t"<<distance<<" feet";
        }
}
        //an invalid unit type was entered
        else{
            cout<<"Invalid unit type entered\n";
        }
        if(cin.fail()){
            cout<<"Must enter a character\n";
            return -21;
        }
}

