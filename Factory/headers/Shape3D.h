#pragma once

class Shape3D
{
public:
double volume();
double surfaceArea();

private:
    double mVolume;
    double mSurfaceArea;
};