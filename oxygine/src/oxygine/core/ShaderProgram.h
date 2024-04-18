#pragma once
#include "../oxygine-include.h"
#include "Object.h"

namespace oxygine
{
    class ShaderProgram: public Object
    {
    public:
        virtual unsigned int getID() const = 0;
    };
}
