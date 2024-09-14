#include "Point.hpp"

float area(int x1, int y1, int x2, int y2, int x3, int y3){
    return (std::abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0));
}

/**
 * @brief Checks if a point is inside the triangle ABC
 * 
 * @param P = the point to check if it is inside the triangle\n
 * A = the first vertex of the triangle\n
 * B = the second vertex of the triangle\n
 * C = the third vertex of the triangle\n
 * @return Returns true if the point P is inside the triangle ABC, false otherwise.
 */
bool bsp( Point const a, Point const b, Point const c, Point const point){

    /* Calculate area of triangle ABC */
    float A = area(a.getX(), a.getY(), b.getX(), b.getY(), c.getX(), c.getY());

    /* Calculate area of triangle PBC */ 
    float A1 = area(point.getX(), point.getY(), b.getX(), b.getY(), c.getX(), c.getY());

    /* Calculate area of triangle PAC */
    float A2 = area(a.getX(), a.getY(), point.getX(), point.getY(), c.getX(), c.getY());

    /* Calculate area of triangle PAB */
    float A3 = area(a.getX(), a.getY(), b.getX(), b.getY(), point.getX(), point.getY());

    /* Check if sum of A1, A2 and A3 is same as A */
    return (A == A1 + A2 + A3);
}

