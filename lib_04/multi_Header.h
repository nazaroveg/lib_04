#pragma once

#ifndef headers_EXPORT
#define headers_API __declspec(dllexport)
#else
#define headers_API __declspec(dllimport)
#endif

#include "multi_class_Equilateral_triangle.h"
#include "multi_class_Figure.h"
#include "multi_class_Isosceles_triangle.h"
#include "multi_class_Parallelogram.h"
#include "multi_class_Quadrilateral.h"
#include "multi_class_Rectangle.h"
#include "multi_class_Rhombus.h"
#include "multi_class_Right_triangle.h"
#include "multi_class_Square.h"
#include "multi_class_triangle.h"
