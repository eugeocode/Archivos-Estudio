let edad=Number(prompt("Por favor ingrese su edad"))
if(edad>=18){
    console.log("Ingreso permitido")
} else if(edad>=13){
    console.log("Necesitas permiso de adulto")
    let permiso=Number(prompt("quiere registrar un permiso de adulto? (1=si 0=no)"))
    while(permiso!=1 && permiso!=0){
        console.log("Opcion erronea")
        permiso=Number(prompt("quiere registrar un permiso de adulto? (1=si 0=no)"))
    }
    if(permiso==1){
        console.log("Ingreso permitido")
    } else{
        console.log("Ingreso negado")
    }
} else{
    console.log("Ingreso negado")
}