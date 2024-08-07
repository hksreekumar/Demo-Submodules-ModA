#include <iostream>

class function
{
private:
    /* data */
public:
    //! Constructor
    function(/* args */);

    //! Destructor
    ~function();

    //! Sample print member
    void print() {
        std::cout<<">> printed from submodule A!\n";
    }
};

function::function(/* args */)
{
}

function::~function()
{
}
