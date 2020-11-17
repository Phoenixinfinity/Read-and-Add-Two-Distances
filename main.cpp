#include <iostream>

using namespace std;
class Distance
{
private:
    int feet;
    int inch;
public:
    Distance ();
    void getDist();
    void showDist();
    Distance addDist(Distance d1);
    Distance subDist(Distance d2);
};
Distance::Distance()
{
    feet = 0;
    inch = 0;
}
void Distance::getDist()
{
    cout<<"Enter Value of Feet: ";
    cin>>feet;
    cout<<"Enter Value of Inches: ";
    cin>>inch;
    inch = (inch>=12) ? 12 : inch;
}
void Distance::showDist()
{
    cout<<"\nFeet: "<<feet;
    cout<<"\nInches: "<<inch;
}
Distance Distance::addDist(Distance d2)
{
    Distance temp;
    temp.feet = feet + d2.feet;
    temp.inch = inch + d2.inch;
    if(temp.inch>=12)
    {
        temp.feet++;
        temp.inch = 12;
    }
    return temp;
}
Distance Distance::subDist(Distance d2)
{
    Distance temp;
    temp.feet = feet - d2.feet;
    temp.inch = inch - d2.inch;
    if(temp.inch<0)
    {
        temp.feet--;
        temp.inch = 12 + temp.inch;
    }
    return temp;
}

int main()
{
    Distance d1;
    Distance d2;
    Distance d3;
    Distance d4;
    cout<<"Enter Distance 1: ";
    d1.getDist();
    cout<<"Enter distance 2: ";
    d2.getDist();
    d3 = d1.addDist(d2);
    d4 = d1.subDist(d2);
    cout<<"\n\nDistance 1:- ";
    d1.showDist();
    cout<<"\n\nDistance 2:- ";
    d2.showDist();
    cout<<"\n\nDistance 3:- ";
    d3.showDist();
    cout<<"\n\nDistance 4:- ";
    d4.showDist();

    return 0;
}
