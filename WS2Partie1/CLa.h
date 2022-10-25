#pragma once
#include "pch.h" 

class CLa
{
private:
    CLb b1;  	
    CLb* p1; 
public:
    void ma1(void);  	
    void ma2(void);  	
    void ma3(CLb);  	
    void ma4(CLb&);  	
    void ma5(CLb*);
};
