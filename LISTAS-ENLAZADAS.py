from os import system
from lista_circular_doblemente_enlazada import ListaCircularDoblementeEnlazada

lista = ListaCircularDoblementeEnlazada()

lista.agregarUltimo("Contigo Peru")
lista.agregarUltimo("La flor de la canela")
lista.agregarUltimo("Cuando llora mi guitarra")
lista.agregarUltimo("Cholo soy")
lista.agregarUltimo("Y se llama Peru")
b = 0
pausa = False

while True:
  system("clear")
  print("LISTA DE CANCIONES:\n")
  #mostrar en pantalla la lista de canciones 
  lista.recorrerInicio()
  
  if b == 1:
    if pausa:
      print("\n" + str("-"*50),"\nCancion en pausa:",lista.reproducir())
      print("-"*50)
    else:
      print("\n" + str("-"*50),"\nReproduciendo:",lista.reproducir())
      print("-"*50)

  print("\nMENU DE REPRODUCCION:\n\nElija una de las siguientes opciones:\n1. Retroceder\n2. Empezar a reproducir\n3. Adelantar\n4. Pausar/Reproducir\n5. Agregar una nueva cancion\n0. Salir")
  
  op = int(input("\nDigite una opcion: "))

  if op == 1: lista.retroceder()
  elif op == 2: 
    b = 1
    if pausa: pausa = False
  elif op == 3: lista.adelantar()
  elif op == 4: pausa = not pausa
  elif op == 5:
    cancion = input("Ingrese el tema de la nueva cancion: ")
    lista.agregarUltimo(cancion)
  elif op == 0: break

print("\nEl Reproductor Musical se ha Cerrado")