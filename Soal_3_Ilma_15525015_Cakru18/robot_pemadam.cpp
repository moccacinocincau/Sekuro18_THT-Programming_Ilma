#include <iostream>
#include <string>

using namespace std;

class RobotPemadam {
private:
    int jarak;   
    string status;

public:
    void inputSensor(int nj) {
        jarak = nj;
    }

    void prosesLogika() {
        if (jarak > 20) {
            status = "Maju Mencari Api";
        }
        else if (jarak <= 20 && jarak > 5) {
            status = "UDAH DEKET NIH BRAY";
        }
        else if (jarak <= 5) {
            status = "Posisi Tepat! gas semprot kali ya!";
        }
    }

    void cetakStatus() {
        cout << "[Sensor: " << jarak << " cm] -> Action: " 
             << status << endl;
    }
};

int main() {
    RobotPemadam robot;
    int input;

    while (true) {
        cout << "Masukkan jarak(cm) (67 untuk keluar): ";
        cin >> input;

        if (input == 67) {
            cout << "Program berhenti." << endl;
            break;
        }

        robot.inputSensor(input);
        robot.prosesLogika();
        robot.cetakStatus();
    }

    return 0;
}