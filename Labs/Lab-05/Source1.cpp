//#include <iostream>
//
//using namespace std;
//
//class Time {
//public:
//    Time(int hr = 0, int min = 0, int sec = 0);
//    void setTime(int hr, int min, int sec);
//    void setHour(int hr);
//    void setMinute(int min);
//    void setSecond(int sec);
//    int getHour() const;
//    int getMinute() const;
//    int getSecond() const;
//    void printUniversal() const;
//private:
//    int hour;
//    int minute;
//    int second;
//};
//
//Time::Time(int hr, int min, int sec) {
//    setTime(hr, min, sec);
//}
//
//void Time::setTime(int hr, int min, int sec) {
//    setHour(hr);
//    setMinute(min);
//    setSecond(sec);
//}
//
//void Time::setHour(int hr) {
//    hour = hr;
//}
//
//void Time::setMinute(int min) {
//    minute = min;
//   
//}
//
//void Time::setSecond(int sec) {
//     
//        second = sec;
//    
//   
//}
//
//int Time::getHour() const {
//    return hour;
//}
//
//int Time::getMinute() const {
//    return minute;
//}
//
//int Time::getSecond() const {
//    return second;
//}
//
//void Time::printUniversal() const {
//    
//    cout << hour << ":";
//    
//    cout << minute << ":";
//    
//   
//    cout << second << endl;
//}
//
//int main() {
//    Time t;
//    cout << " The time is : ";
//    t.setTime(12, 34, 56);
//    t.printUniversal();
//    return 0;
//}
