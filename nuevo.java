import java.util.Scanner;

public class nuevo {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in); 
        System.out.println("Ingrese su edad");
        int edad=sc.nextInt();
        if(edad>=18){
            System.out.println("Ingreso permitido");    
        } else if(edad>=13){
                System.out.println("Necesitas un permiso de adulto");
                System.out.println("quiere registrar un permiso de adulto? (1=si 0=no)");
                int permiso=sc.nextInt();
                while(permiso!=1 && permiso!=0){
                    System.out.println("Opcion erronea");
                    permiso=sc.nextInt();
                }
                if(permiso==1){
                    System.out.println("Ingreso permitido");
                } 
                else{
                    System.out.println("Ingreso negado");
                }
            } else{
                System.out.println("Ingreso negado");
            }
        sc.close();
    }
}
