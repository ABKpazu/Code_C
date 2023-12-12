#include <math.h>
#include "graph.h"

float getRectGirth(const Rect_st* pRect)
{
    float ret;
    ret = 2 * (pRect -> width + pRect -> height);
    return ret;
}

float getRectArea(const Rect_st* pRect)
{
    float ret;
    ret = pRect -> width * pRect -> height;
    return ret;
}

float getTriangleGirth(const Triangle_st* pTriangle)
{
    float temp;
    float ret;
    temp = sqrt(pow(pTriangle -> bottom / 2, 2) + pow(pTriangle -> height, 2));
    ret = pTriangle -> bottom + 2 * temp;
    return ret;
}

float getTriangleArea(const Triangle_st* pTriangle)
{
    float ret;
    ret = 0.5 * pTriangle -> bottom * pTriangle -> height;
    return ret;
}

float getCircleGirth(const Circle_st* pCircle)
{
    float ret;
    ret = 2 * 3.14 * pCircle -> radius;
    return ret;
}

float getCircleArea(const Circle_st* pCircle)
{
    float ret;
    ret = 3.14 * pow(pCircle -> radius, 2);
    return ret;
}
