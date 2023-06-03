#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>

class User {
    private: 
    string ipAddress;
    string name;
    string location;
    string date; 

    public: 
    User() {
        ipAddress = "";
        name = "";
        location = "";
        date = "";
    }
    User(string ip, string name, string location, string date) {
        ipAddress = ip;
        this->name = name;
        this->location = location;
        this->date = date;
    }

    void setIP(string id) {ipAddress = ip};
    void setName(string name) {this->name = name;}
    void setLocation(string location) {this->location = location;}
    void setDate(string date) {this->date = date;}

    string getIP() const {return ipAddress;}
    string getName() const {return name;}
    string getLocation() const {return location;}
    string getDate() const {return date;}

    bool operator > (const User &test) { return ipAddress > test.ipAddress; }
    bool operator < (const User &test) { return ipAddress < test.ipAddress; }
    bool operator == (const User &test) { return ipAddress == test.ipAddress; }
};

#endif