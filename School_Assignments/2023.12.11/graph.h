#ifndef __StructDEF__
#define __StructDEF__

typedef struct
{
    float width;
    float height;
}Rect_st;

typedef struct
{
    float bottom;
    float height;
}Triangle_st;

typedef struct
{
    float radius;
}Circle_st;

#endif


#ifndef __GraphCalculateFUN__
#define __GraphCalculateFUN__

float getRectGirth(const Rect_st* pRect);
float getRectArea(const Rect_st* pRect);
float getTriangleGirth(const Triangle_st* pTriangle);
float getTriangleArea(const Triangle_st* pRect);
float getCircleGirth(const Circle_st* pCircle);
float getCircleArea(const Circle_st* pCircle);

#endif
