#ifndef MODEL_HPP
#define MODEL_HPP

#include <string>

class model 
{
    public:
        std::string path;

        model();
        model( const std::string& modelPath );
};

#endif 
