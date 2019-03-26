//
// Created by iusup on 23.03.2019.
//

#ifndef TP_POINT_H
#define TP_POINT_H


class Point final {
public:
    Point(int x, int y);
    Point(const Point&) = default;
    Point& operator +=(const Point&);
    Point& operator -=(const Point&);
    int X() const;
    int Y() const;
    Point operator +(const Point&) const;
    Point operator -(const Point&) const;
    int Length() const;
    bool operator==(const Point&) const;

private:
    int x_, y_;
    unsigned int abs(int x);
};



#endif //TP_POINT_H
