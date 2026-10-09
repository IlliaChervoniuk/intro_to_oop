#pragma once
#include <string>


class vector2 {
private:
    double x;
    double y;
    char* name;
public:
    vector2();
    vector2(double x, double y, char* name);
    vector2(const vector2& other);

    ~vector2();

    double getX() const;
    double getY() const;
    char* getName();

    void setX(double x);
    void setY(double y);
    void setName(const char* name);
    std::string to_string();

};