#include "pch.h" 

void CLa::ma1(void) 
{ 
 	cout << "Je travaille pour CLa" << endl; 
 	this->b1.mb(); 

    //ma1 utilise un objet qui fait partie intégrante de la classe A.
    //Si l’objet de type A est détruit, l’objet de type B sera détruit aussi.
} 
void CLa::ma2(void) 
{ 
 	cout << "Je travaille pour CLa" << endl; 
 	this->p1 = new CLb(); 
 	this->p1->mb(); 

    //ma2 utilise un pointeur qu’elle alloue. 
    //L’objet du type A peut détruire l’objet de type B si besoin.
    //L’objet de type B ne fait pas partie du type A, juste son pointeur. 
    //Si l’objet de type A est détruit sans que l’objet de type B soit détruit par le type A, la référence sera perdue ; 
    //il y aura une fuite de mémoire.  
} 
void CLa::ma3(CLb ov) 
{ 
 	cout << "Je travaille pour CLa" << endl; 
 	ov.mb(); 

    //m3 utilise une copie locale d’un objet de type B. Les deux objets sont indépendants.
    //M3 ne peut pas modifier l’objet de type B créé par le main.  
}
void CLa::ma4(CLb& oa)
{
    cout << "Je travaille pour CLa" << endl;
    oa.mb();
    //m4 utilise l’adresse mémoire d’un objet de type B pour le manipuler.
    //M4 à la possibilité de modifier directement l’objet d’origine. 
    //L’objet de type B n’est pas une copie locale utilisée par m4. 
}
void CLa::ma5(CLb* op)
{
    cout << "Je travaille pour CLa" << endl;
    op->mb();
    //m5 utilise un pointeur de type B.
    //Elle ne manipule pas directement l’objet de type B mais son pointeur
}
