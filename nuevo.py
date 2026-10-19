edad=int(input("por favor ingrese su edad \n-"))
if(edad>=18):
    print("Ingreso permitido")
else:
    if(edad>=13):
        print("necesitas permiso de adulto")
        permiso=int(input("quiere registrar un permiso de adulto? (1=si 0=no) \n-"))
        while(permiso!=1 and permiso!=0):
            print("Opcion erronea")
            permiso=int(input("quiere registrar un permiso de adulto? (1=si 0=no) \n-"))
        if(permiso==0):
                        print("Ingreso negado")
        else:                
                    print("Ingreso permitido")         
    else:
        print("Ingreso negado")                  