#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>

using std::string;

class User {
    private: 
    string ipAddress;
    string name;
    string location;
    string state; 
    string website
    int hour;
    int minute;

    public: 
    User() {
        ipAddress = "";
        name = "";
        location = "";
        state = "";
        website = "";
        hour = 0;
        minute = 0;
    }
    User(string ip, string name, string location, string state, 
        string website, int hour, int minute) {
        ipAddress = ip;
        this->name = name;
        this->location = location;
        this->state = state;
        this->website = website;
        this->hour = hour;
        this->minute = minute;
    }

    void setIP(string id) {ipAddress = ip};
    void setName(string name) {this->name = name;}
    void setLocation(string location) {this->location = location;}
    void setState(string date) {this->state = state;}
    void setWebsite(string website) {this->website = website;}
    void setHour(int h) {hour = h;}
    void setMin(int m) {minute = m;}

    string getIP() const {return ipAddress;}
    string getName() const {return name;}
    string getLocation() const {return location;}
    string getState() const {return state;}
    string getWebsite() const {return website;}
    int getHour() const {return hour;}
    int getMinute() const {return minute;}

    bool operator > (const User &test) { return ipAddress > test.ipAddress; }
    bool operator < (const User &test) { return ipAddress < test.ipAddress; }
    bool operator == (const User &test) { return ipAddress == test.ipAddress; }

    friend void hDisplay(const User&);
    friend void iDisplay(const User&);

    int ipIntoInt(string);
};

#endif