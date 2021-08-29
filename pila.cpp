
#include<iostream>
#define x 10
  using namespace std;

 
class Pila
{

private:
int mat[x];
  
int top;

public:
Pila ()
  {
    
top = -1;
  
} 
void push ()
  {
    
if (top == x - 1)
      {
	
cout << "pila llena";
      
}
    else
      {
	
top++;
	
cout << "Insertar : ";
	
cin >> mat[top];
      
}
  
 
}
  
void pop ()
  {
    
if (top == -1)
      {
	
cout << "Vacio";
      
}
    else
      {
	
top--;
      
 
}
  
}
  
void mostrar ()
  {
    
int t = top;
    
while (t >= 0)
      {
	
cout << mat[t] << endl;
	
t--;
      
}
  
}

};


 
 
int
main ()
{
  
 
Pila p1;
  
int n;
  
 
  do
    {
      
cout << "Opciones: ";
      
cout << "Opcion 1:Insertar" << endl;
      
cout << "Opcion 2:Control+z" << endl;
      
cin >> n;
      
 
switch (n)
	{
	
 
case 1:
	  p1.push ();
	  break;
	
case 2:
	  
p1.pop ();
	  
cout << "---Pila Actualizada---" << endl;
	  
p1.mostrar ();
	  break;
	
 
 
}
    
}
  while (n != 2);

 
 
}



