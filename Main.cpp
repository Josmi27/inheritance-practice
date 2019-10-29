#include <iostream>
#include <string>
using namespace std;

class Smartphone {

    private:
        string name;
        string bestFeature;
        int price;

    public:
        Smartphone()
        { cout << "Congrats on your new smartphone!" << endl; }

        Smartphone(string smartphonePreference)
        {
              name = smartphonePreference;
              bestFeature = "Best Battery Life";
              price = 850;

              cout << "Since you prefer to have an " << name << ", the best feature on your phone is " << bestFeature << ", and you only owe me $" << price << endl;
          }
};

class Pixel : public Smartphone {

    private:
        bool alwaysOnDisplayFeature;
        bool squeezeFeature;
        bool nowPlayingFeature;
        bool goodBatteryLife;    
    
    public:
        Pixel()
        { alwaysOnDisplayFeature = true;
          squeezeFeature = true;
          nowPlayingFeature = true;
          goodBatteryLife = true;

          cout << "You now have a Google Pixel Smartphone. The following is a list of Pixel features. If you see a 1, that feature is yours. Otherwise, you wish it was yours: " << endl << "Always On Display: " << alwaysOnDisplayFeature << endl << "Squeeze Feature: " << squeezeFeature << endl << "Now Playing: " << nowPlayingFeature << endl << "Good Battery Life: " << goodBatteryLife << endl;}

        Pixel(bool premiumScreenQuality) 
        {
            if( premiumScreenQuality == true ) {
                alwaysOnDisplayFeature = true;
                squeezeFeature = true;
                nowPlayingFeature = true;
                goodBatteryLife = false;
                cout << "You now have a Google Pixel Smartphone with Premium Screen Quality. The following is a list of Pixel features. If you see a 1, that feature is yours. Otherwise, you wish it was yours: " << endl << "Always On Display: " << alwaysOnDisplayFeature << endl << "Squeeze Feature: " << squeezeFeature << endl << "Now Playing: " << nowPlayingFeature << endl << "Good Battery Life: " << goodBatteryLife << endl;}    
            }
};

class NoteSeries : Smartphone {
   
   private:
    bool hasPen;

   public:
    NoteSeries() {
        hasPen = true;
        cout << "Your Note Smartphone and S Pen is fully charged, and ready to go!" << endl;
    }

    NoteSeries(int versionNumber) {
        hasPen = true;
        cout << "You have selected the Note " << versionNumber << ". Great selection! Enjoy your new smartphone, fully compatible with your provided S Pen";
    }
};

int main() {
    Smartphone mySmartphone;
    cout << endl;
    cout << endl;
    
    Smartphone myOtherSmartphone = Smartphone("Android");

    cout << endl;
    cout << endl;

    Pixel myPixel;
    cout << endl;
    Pixel mySmallerPixel = Pixel(true);

    cout << endl;
    cout << endl;
    
    NoteSeries myStandardNote;
    cout << endl;
    NoteSeries myPersonalizedNote = NoteSeries(10);

    return 0;
}
