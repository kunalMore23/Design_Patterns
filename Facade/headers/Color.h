#pragma once

class Color
{
    friend class Customizer;
    
    public:
        Color(float, float, float);
    private:
        float mR;
        float mG;
        float mB;
};