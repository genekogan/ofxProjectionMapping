#pragma once

#include "ofMain.h"

// A C++ program to check if a given point lies inside a given polygon
// Refer http://www.geeksforgeeks.org/check-if-two-given-line-segments-intersect/
// for explanation of functions onSegment(), orientation() and doIntersect()


// Define Infinite (Using INT_MAX caused overflow problems)
#define INF 1000000


class ofxPointInPolyline
{
public:
    bool isInside(ofPolyline poly, ofPoint p);
    
private:
    bool onSegment(ofPoint p, ofPoint q, ofPoint r);
    int orientation(ofPoint p, ofPoint q, ofPoint r);
    bool doIntersect(ofPoint p1, ofPoint q1, ofPoint p2, ofPoint q2);
};



