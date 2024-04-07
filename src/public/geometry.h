#pragma once

struct Point
{
    int x, y;
};

struct Line
{
    Point p1, p2;
};

double distance(Point p1, Point p2);