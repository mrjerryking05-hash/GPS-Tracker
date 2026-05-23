#include <iostream>
using namespace std;
class GPSTracker{
private:
    string location;
    float speed;
    float distance;
public:
    void setData(){
        cout << "Enter Current Location: ";
        cin >> location;
        cout << "Enter Speed (km/h): ";
        cin >> speed;
        cout << "Enter Distance Travelled (km): ";
        cin >> distance;
    }
    void displayData(){
        cout << "\n===== GPS TRACKER =====" << endl;
        cout << "Current Location : " << location << endl;
        cout << "Vehicle Speed    : " << speed << " km/h" << endl;
        cout << "Distance Covered : " << distance << " km" << endl;
        if(speed > 100){
            cout << "Warning: Overspeeding!" << endl;
        }
		else{
            cout << "Speed is Normal." << endl;
        }
    }
};
int main(){
    GPSTracker gps;
    gps.setData();
    gps.displayData();
    return 0;
}
