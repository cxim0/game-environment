#program once

namespace memory_player{
    struct int8{
        unsigned int v:8;
        int8(int i=0){
            v=i;
        };
        
        inline operator int(){}
        
    }
};

namespace memory_player::unsafe{

};

namespace memory_player::safe{

};


