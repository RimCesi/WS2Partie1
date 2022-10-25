#include "pch.h" 

void CLa::ma1(void) 
{ 
 	cout << "Je travaille pour CLa" << endl; 
 	this->b1.mb(); 

    //ma1 utilise un objet qui fait partie int�grante de la classe A.
    //Si l�objet de type A est d�truit, l�objet de type B sera d�truit aussi.
} 
void CLa::ma2(void) 
{ 
 	cout << "Je travaille pour CLa" << endl; 
 	this->p1 = new CLb(); 
 	this->p1->mb(); 

    //ma2 utilise un pointeur qu�elle alloue. 
    //L�objet du type A peut d�truire l�objet de type B si besoin.
    //L�objet de type B ne fait pas partie du type A, juste son pointeur. 
    //Si l�objet de type A est d�truit sans que l�objet de type B soit d�truit par le type A, la r�f�rence sera perdue ; 
    //il y aura une fuite de m�moire.  
} 
void CLa::ma3(CLb ov) 
{ 
 	cout << "Je travaille pour CLa" << endl; 
 	ov.mb(); 

    //m3 utilise une copie locale d�un objet de type B. Les deux objets sont ind�pendants.
    //M3 ne peut pas modifier l�objet de type B cr�� par le main.  
}
void CLa::ma4(CLb& oa)
{
    cout << "Je travaille pour CLa" << endl;
    oa.mb();
    //m4 utilise l�adresse m�moire d�un objet de type B pour le manipuler.
    //M4 � la possibilit� de modifier directement l�objet d�origine. 
    //L�objet de type B n�est pas une copie locale utilis�e par m4. 
}
void CLa::ma5(CLb* op)
{
    cout << "Je travaille pour CLa" << endl;
    op->mb();
    //m5 utilise un pointeur de type B.
    //Elle ne manipule pas directement l�objet de type B mais son pointeur
}
