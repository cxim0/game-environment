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
    template<typename T1,typename T2>
    inline T1& treat_as(T2& a){
        return *((T1*)&a);
    }
};

namespace memory_player::safe{

};


