#include "function.h"
#include <iostream>

#include "core/corefunction/corefunction.h"


function::function(/* args */)
{
}

function::~function()
{
}

void function::print()
{
    corefunction a;
    a.add(4,5);
    std::cout<<">> printed from submodule A!\n";
}