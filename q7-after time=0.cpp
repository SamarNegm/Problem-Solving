#include<iostream>
#include<iomanip>

using namespace std;

class Time0
{
private:
    int numOfSeconds;
    int hour;
    int minute;
    int second;
public:
    Time0(int h=0,int m=0,int s=0)
    {
        numOfSeconds=0;
        cout<< "numOfSeconds = "<<numOfSeconds<<endl;
        setTime(h,m,s);

    }

    Time0 &setHour(int h)
    {
        hour=(h>=0 && h<24)? h :0;
        numOfSeconds=(hour*3600)+(getMinute()*60)+getSecond();
        cout<< "numOfSeconds = "<<numOfSeconds<<endl;
        return *this;
    }

    Time0 &setMinute(int m)
    {
        minute =(m>=0 && m<60)? m :0;
        numOfSeconds=(getHour()*3600)+(minute*60)+getSecond();
        cout<< "numOfSeconds = "<<numOfSeconds<<endl;
        return *this;
    }

    Time0 &setSecond(int s)
    {
        second=(s>=0 && s<60)? s :0;
        numOfSeconds=(getHour()*3600)+(getMinute()*60)+second;
        cout<< "numOfSeconds = "<<numOfSeconds<<endl;
        return *this;
    }

    Time0 &setTime(int h,int m,int s)
    {
        return setHour(h).setMinute(m).setSecond(s);
    }

    int getHour() const
    {
        return numOfSeconds/3600;
    }

    int getMinute() const
    {
        return (numOfSeconds%3600)/60;
    }

    int getSecond() const
    {
        return (numOfSeconds%3600)%60;
    }

    void printUniversal() const
    {
        cout << setfill( '0') << setw( 2) << getHour() << ":"<< setw( 2) << getMinute() << ":"<< setw( 2) << getSecond()<<endl;
    }

    void printStandard() const
    {
        cout << ( ( getHour() == 0|| getHour() == 12) ? 12: getHour() % 12)
             << ":"<< setfill( '0') << setw( 2) << getMinute()
             << ":"<< setw( 2) << getSecond() << ( getHour() < 12 ? " AM": " PM")<<endl;
    }

    // Calculates the total seconds since midnight until 12 PM
    void midnightToString()
    {
        cout<<"Total Num of Seconds : "<<((hour*3600) + (minute*60) + second);
    }
};

int main()
{
    Time0 t(13,10,10);
    // cascaded function calls
    //t.setHour(18).setMinute(30).setSecond(22);

    // output time in universal and standard formats
    cout << "Universal time: ";
    t.printUniversal();

    cout << "\nStandard time: ";
    t.printStandard();

    cout << "\n\nNew standard time: ";

    // cascaded function calls
    t.setTime( 20, 20, 20).printStandard();

    cout << endl;
}
