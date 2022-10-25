#include "pch.h" 


int main(void)
{
    int pause;  	
    
    CLa oa;
    CLb ob;
    CLb* pb;

    pb = &ob;  	

    oa.ma1();  	
    oa.ma2();  	
    oa.ma3(ob);  	
    oa.ma4(*pb);
    oa.ma5(pb);

    cin >> pause;
    return(0);
}
