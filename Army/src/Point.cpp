//
// Created by iusup on 23.03.2019.
//

#include "Point.h"

Point::Point(int x, int y) : x_(x), y_(y) {}

Point &Point::operator+=(const Point &p) {
    x_ += p.x_;
    y_ += p.y_;
    return *this;
}

Point &Point::operator-=(const Point &p) {
    x_ -= p.x_;
    y_ -= p.y_;
    return *this;
}

Point Point::operator+(const Point &p) const {
    Point cur = *this;
    cur += p;
    return cur;
}

Point Point::operator-(const Point &p) const {
    Point cur = *this;
    cur -= p;
    return cur;
}

int Point::Length() const {
    return (x_ > 0 ? x_ : -x_) + (y_ > 0 ? y_ : -y_);
}

unsigned int Point::abs(int x) {
    return x < 0 ? -x : x;
}


int Point::X() const {
    return x_;
}

int Point::Y() const {
    return y_;
}

bool Point::operator==(const Point &p) const {
    return x_ == p.x_ && y_ == p.y_;
}