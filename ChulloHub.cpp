#include <iostream>
#include <cstdlib> // Necesario para system()
#include <string>
#include <iomanip>
#include <windows.h>

// system("start https://osu.ppy.sh"); ejemplo de comando para los links

int main() {

    SetConsoleOutputCP(65001);

    char operacion1;
    char verificacion = '0'; // Inicializado por seguridad
    char operacion2;
    char eleccion;
    char select1;
    char select2;
    char select3; char select4; char select5; char select6; char select7;
    std::string usuario;

    do { // MENU PRINCIPAL
        system("cls");
        std::cout<<"|########################################################################################|\n";
        std::cout<<"|########################################################################################|\n";
        std::cout<<"|########################################################################################|\n";
        std::cout<<"|####### ██████╗██╗  ██╗██╗   ██╗██║     ██║     ██████╗ ██╗  ██╗██╗   ██╗██████╗ #######|\n";
        std::cout<<"|###### ██╔════╝██║  ██║██║   ██║██║     ██║    ██╔═══██╗██║  ██║██║   ██║██╔══██╗ ######|\n";
        std::cout<<"|###### ██║     ███████║██║   ██║██║     ██║    ██║   ██║███████║██║   ██║██████╔╝ ######|\n";
        std::cout<<"|###### ██║     ██╔══██║██║   ██║██║     ██║    ██║   ██║██╔══██║██║   ██║██╔══██╗ ######|\n";
        std::cout<<"|###### ╚██████╗██║  ██║╚██████╔╝███████╗███████╗╚██████╝██║  ██║╚██████╔╝██████╔╝ ######|\n";
        std::cout<<"|####### ╚═════╝╚═╝  ╚═╝ ╚═════╝ ╚══════╝╚══════╝ ╚════╝ ╚═╝  ╚═╝ ╚═════╝ ╚═════╝ #######|\n";
        std::cout<<"|#################################################################################(R)####|\n";
        std::cout<<"|#######################|**********|#############|**********|############################|\n";
        std::cout<<"|#######################|(1)Entrar |#############| (2)Salir |############################|\n";
        std::cout<<"|#######################|__________|#############|__________|############################|\n";
        std::cout<<"|########################################################################################|\n";
        std::cout<<"|########################################################################################|\n";
        std::cout<<"|########################################################################################|\n";

        std::cout<<"> Ingresar: "; 
        std::cin>> operacion1;

        if (operacion1 == '1'){   
            do { 
                system("cls");   // Verificacion de edad
                std::cout<<"_______________________________________\n";
                std::cout<<"|   Antes de ingresar a CHULLOHUB!    |\n";
                std::cout<<"|            Tienes 18+?              |\n";
                std::cout<<"|    > Si (1)         > No (2)        |\n";
                std::cout<<"|_____________________________________|\n";
                std::cout<<"> Ingresar: "; 
                std::cin>> verificacion;

                if (verificacion == '1'){   // Verificacion EXITOSA
                    
                    // Limpiamos el Enter sobrante del cin ANTES de empezar el ciclo del nombre
                    std::cin.ignore(10000, '\n');

                    do {
                        system("cls");
                        std::cout<<"_______________________________________\n";
                        std::cout<<"|       Bienvenido a CHULLOHUB!       |\n";
                        std::cout<<"|    Por favor, ingrese su nombre     |\n";
                        std::cout<<"|_____________________________________|\n";
                        std::cout<<"> Ingresar: "; 
                        std::getline(std::cin, usuario);

                        if (usuario.empty()){   // Error de ingreso de usuario
                            system("cls");
                            std::cout<<"______________________________________\n";
                            std::cout<<"| Error: Debe ingresar un nombre!    |\n";
                            std::cout<<"|    Presione Enter para reintentar  |\n";
                            std::cout<<"|____________________________________|\n";
                            std::cin.get(); // Pausa simple para leer el mensaje

                        }
                        else {                  // Bienvenida al usuario
                            system("cls");
                            
                            std::cout<<"____________________________________________________\n";
                            std::cout<<"       Bienvenido "<<usuario<< "!\n";
                            std::cout<<"       Presiona Enter para ingresar al catalogo     \n";
                            std::cout<<"____________________________________________________\n"; 
                            std::cin.get();

                            do {
                                int anchointerior = 63;
                                std::string saludo = "> Hola " + usuario + " <";
                                system("cls"); 
                                std::cout << "╔═══════════════════════════════════════════════════════════════╗\n";
                                std::cout << "║                     > CHULLOHUB.COM (R) <                     ║\n";
                                std::cout << "║                                                               ║\n";
                                std::cout << "║" << std::setw(anchointerior) << std::left << ("                     " + saludo) << "║\n";
                                std::cout << "╠═══════════════════════════════════════════════════════════════╣\n";
                                std::cout << "║                                                               ║\n";
                                std::cout << "║   [1] Categorias                                              ║\n";
                                std::cout << "║                                                               ║\n";
                                std::cout << "║   [2] Sugiere contenido                                       ║\n";
                                std::cout << "║                                                               ║\n";
                                std::cout << "║   [3] Sobre Chullohub                                         ║\n";
                                std::cout << "║                                                               ║\n";
                                std::cout << "║   [4] Salir                                                   ║\n";
                                std::cout << "║                                                               ║\n";
                                std::cout << "╚═══════════════════════════════════════════════════════════════╝\n";
                                std::cout<<"> Ingresar: "; std::cin>>operacion2;
                                
                                switch (operacion2)
                                {
                                case '1':  //////////////////////// SECCION CATEGORIAS
                                    
                                    do {
                                    system("cls");
                                    std::cout<<"______________________________________________________\n";
                                    std::cout<<"|                                                    |\n";
                                    std::cout<<"|  > Categorias CHULLOHUB:                           |\n";
                                    std::cout<<"|                                                    |\n";
                                    std::cout<<"|    (1) En construccion                             |\n";
                                    std::cout<<"|    (2) En construccion                             |\n";
                                    std::cout<<"|    (3) En construccion                             |\n";
                                    std::cout<<"|    (4) En construccion                             |\n";
                                    std::cout<<"|    (5) En construccion                             |\n";
                                    std::cout<<"|    (6) En construccion                             |\n";
                                    std::cout<<"|    (7) En construccion                             |\n";
                                    std::cout<<"|                                                    |\n";
                                    std::cout<<"|    (0) Regresar                                    |\n";
                                    std::cout<<"|____________________________________________________|\n";
                                    std::cout<<"> Ingresar: "; std::cin>>eleccion;

                                        switch (eleccion)
                                        {
                                        case '1': char categ1elec;
                                            do {     
                                            system("cls");
                                            std::cout<<"_____________________________________________________________________\n";
                                            std::cout<<"|                                                                   |\n";
                                            std::cout<<"|  > Categoria 1:                                                   |\n";
                                            std::cout<<"|                                                                   |\n";
                                            std::cout<<"|    (1) Titulo 1 WIP                                               |\n";
                                            std::cout<<"|    (2) Titulo 2 WIP                                               |\n";
                                            std::cout<<"|    (3) Titulo 3 WIP                                               |\n";
                                            std::cout<<"|    (4) Titulo 4 WIP                                               |\n";
                                            std::cout<<"|    (5) Titulo 5 WIP                                               |\n";
                                            std::cout<<"|    (6) Titulo 6 WIP                                               |\n";
                                            std::cout<<"|    (7) Titulo 7 WIP                                               |\n";
                                            std::cout<<"|                                                                   |\n";
                                            std::cout<<"|    (0) Regresar                                                   |\n";
                                            std::cout<<"|___________________________________________________________________|\n";
                                              std::cin>>categ1elec;
                                              switch (categ1elec)
                                              {
                                              case '1':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '2':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '3':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '4':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '5':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '6':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '7':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '0': 
                                                break; // Previene el error al volver
                                              default:
                                                system("cls");
                                                std::cout<<"______________________________________\n";
                                                std::cout<<"| Error: Elija una operacion valida! |\n";
                                                std::cout<<"|    Presione Enter para volver      |\n";
                                                std::cout<<"|____________________________________|\n";
                                                std::cin.ignore(10000, '\n'); 
                                                std::cin.get();
                                                break;
                                              }

                                            } while (categ1elec!= '0');
                                            break;
                                        case '2': char categ2elec;
                                            do {     
                                            system("cls");
                                            std::cout<<"_____________________________________________________________________\n";
                                            std::cout<<"|                                                                   |\n";
                                            std::cout<<"|  > Categoria 2:                                                   |\n";
                                            std::cout<<"|                                                                   |\n";
                                            std::cout<<"|    (1) Titulo 1 WIP                                               |\n";
                                            std::cout<<"|    (2) Titulo 2 WIP                                               |\n";
                                            std::cout<<"|    (3) Titulo 3 WIP                                               |\n";
                                            std::cout<<"|    (4) Titulo 4 WIP                                               |\n";
                                            std::cout<<"|    (5) Titulo 5 WIP                                               |\n";
                                            std::cout<<"|    (6) Titulo 6 WIP                                               |\n";
                                            std::cout<<"|    (7) Titulo 7 WIP                                               |\n";
                                            std::cout<<"|                                                                   |\n";
                                            std::cout<<"|    (0) Regresar                                                   |\n";
                                            std::cout<<"|___________________________________________________________________|\n";
                                              std::cin>>categ2elec;
                                              switch (categ2elec)
                                              {
                                              case '1':
                                               system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '2':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '3':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '4':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '5':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '6':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '7':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '0':
                                                break;
                                              default:
                                                system("cls");
                                                std::cout<<"______________________________________\n";
                                                std::cout<<"| Error: Elija una operacion valida! |\n";
                                                std::cout<<"|    Presione Enter para volver      |\n";
                                                std::cout<<"|____________________________________|\n";
                                                std::cin.ignore(10000, '\n');
                                                std::cin.get();
                                                break;
                                              }

                                            } while (categ2elec!= '0');
                                            
                                            break;
                                        case '3': char categ3elec;
                                            do {     
                                            system("cls");
                                            std::cout<<"_____________________________________________________________________\n";
                                            std::cout<<"|                                                                   |\n";
                                            std::cout<<"|  > Categoria 3:                                                   |\n";
                                            std::cout<<"|                                                                   |\n";
                                            std::cout<<"|    (1) Titulo 1 WIP                                               |\n";
                                            std::cout<<"|    (2) Titulo 2 WIP                                               |\n";
                                            std::cout<<"|    (3) Titulo 3 WIP                                               |\n";
                                            std::cout<<"|    (4) Titulo 4 WIP                                               |\n";
                                            std::cout<<"|    (5) Titulo 5 WIP                                               |\n";
                                            std::cout<<"|    (6) Titulo 6 WIP                                               |\n";
                                            std::cout<<"|    (7) Titulo 7 WIP                                               |\n";
                                            std::cout<<"|                                                                   |\n";
                                            std::cout<<"|    (0) Regresar                                                   |\n";
                                            std::cout<<"|___________________________________________________________________|\n";
                                              std::cin>>categ3elec;
                                              switch (categ3elec)
                                              {
                                              case '1':
                                               system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '2':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '3':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '4':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '5':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '6':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '7':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '0':
                                                break;
                                              default:
                                                system("cls");
                                                std::cout<<"______________________________________\n";
                                                std::cout<<"| Error: Elija una operacion valida! |\n";
                                                std::cout<<"|    Presione Enter para volver      |\n";
                                                std::cout<<"|____________________________________|\n";
                                                std::cin.ignore(10000, '\n');
                                                std::cin.get();
                                                break;
                                              }

                                            } while (categ3elec!= '0');
                                            
                                            break;
                                        case '4': char categ4elec;
                                            do {     
                                            system("cls");
                                            std::cout<<"_____________________________________________________________________\n";
                                            std::cout<<"|                                                                   |\n";
                                            std::cout<<"|  > Categoria 4:                                                   |\n";
                                            std::cout<<"|                                                                   |\n";
                                            std::cout<<"|    (1) Titulo 1 WIP                                               |\n";
                                            std::cout<<"|    (2) Titulo 2 WIP                                               |\n";
                                            std::cout<<"|    (3) Titulo 3 WIP                                               |\n";
                                            std::cout<<"|    (4) Titulo 4 WIP                                               |\n";
                                            std::cout<<"|    (5) Titulo 5 WIP                                               |\n";
                                            std::cout<<"|    (6) Titulo 6 WIP                                               |\n";
                                            std::cout<<"|    (7) Titulo 7 WIP                                               |\n";
                                            std::cout<<"|                                                                   |\n";
                                            std::cout<<"|    (0) Regresar                                                   |\n";
                                            std::cout<<"|___________________________________________________________________|\n";
                                              std::cin>>categ4elec;
                                              switch (categ4elec)
                                              {
                                              case '1':
                                               system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '2':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '3':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '4':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '5':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '6':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '7':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '0':
                                                break;
                                              default:
                                                system("cls");
                                                std::cout<<"______________________________________\n";
                                                std::cout<<"| Error: Elija una operacion valida! |\n";
                                                std::cout<<"|    Presione Enter para volver      |\n";
                                                std::cout<<"|____________________________________|\n";
                                                std::cin.ignore(10000, '\n');
                                                std::cin.get();
                                                break;
                                              }

                                            } while (categ4elec!= '0');
                                            
                                            break;
                                        case '5': char categ5elec;
                                            do {     
                                            system("cls");
                                            std::cout<<"_____________________________________________________________________\n";
                                            std::cout<<"|                                                                   |\n";
                                            std::cout<<"|  > Categoria 5:                                                   |\n";
                                            std::cout<<"|                                                                   |\n";
                                            std::cout<<"|    (1) Titulo 1 WIP                                               |\n";
                                            std::cout<<"|    (2) Titulo 2 WIP                                               |\n";
                                            std::cout<<"|    (3) Titulo 3 WIP                                               |\n";
                                            std::cout<<"|    (4) Titulo 4 WIP                                               |\n";
                                            std::cout<<"|    (5) Titulo 5 WIP                                               |\n";
                                            std::cout<<"|    (6) Titulo 6 WIP                                               |\n";
                                            std::cout<<"|    (7) Titulo 7 WIP                                               |\n";
                                            std::cout<<"|                                                                   |\n";
                                            std::cout<<"|    (0) Regresar                                                   |\n";
                                            std::cout<<"|___________________________________________________________________|\n";
                                              std::cin>>categ5elec;
                                              switch (categ5elec)
                                              {
                                              case '1':
                                               system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '2':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '3':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '4':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '5':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '6':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '7':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '0':
                                                break;
                                              default:
                                                system("cls");
                                                std::cout<<"______________________________________\n";
                                                std::cout<<"| Error: Elija una operacion valida! |\n";
                                                std::cout<<"|    Presione Enter para volver      |\n";
                                                std::cout<<"|____________________________________|\n";
                                                std::cin.ignore(10000, '\n');
                                                std::cin.get();
                                                break;
                                              }

                                            } while (categ5elec!= '0');
                                            
                                            break;
                                        case '6': char categ6elec;
                                            do {     
                                            system("cls");
                                            std::cout<<"_____________________________________________________________________\n";
                                            std::cout<<"|                                                                   |\n";
                                            std::cout<<"|  > Categoria 6:                                                   |\n";
                                            std::cout<<"|                                                                   |\n";
                                            std::cout<<"|    (1) Titulo 1 WIP                                               |\n";
                                            std::cout<<"|    (2) Titulo 2 WIP                                               |\n";
                                            std::cout<<"|    (3) Titulo 3 WIP                                               |\n";
                                            std::cout<<"|    (4) Titulo 4 WIP                                               |\n";
                                            std::cout<<"|    (5) Titulo 5 WIP                                               |\n";
                                            std::cout<<"|    (6) Titulo 6 WIP                                               |\n";
                                            std::cout<<"|    (7) Titulo 7 WIP                                               |\n";
                                            std::cout<<"|                                                                   |\n";
                                            std::cout<<"|    (0) Regresar                                                   |\n";
                                            std::cout<<"|___________________________________________________________________|\n";
                                              std::cin>>categ6elec;
                                              switch (categ6elec)
                                              {
                                              case '1':
                                               system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '2':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '3':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '4':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '5':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '6':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '7':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '0':
                                                break;
                                              default:
                                                system("cls");
                                                std::cout<<"______________________________________\n";
                                                std::cout<<"| Error: Elija una operacion valida! |\n";
                                                std::cout<<"|    Presione Enter para volver      |\n";
                                                std::cout<<"|____________________________________|\n";
                                                std::cin.ignore(10000, '\n');
                                                std::cin.get();
                                                break;
                                              }

                                            } while (categ6elec!= '0');
                                            
                                            break;
                                        case '7': char categ7elec;
                                            do {     
                                            system("cls");
                                            std::cout<<"_____________________________________________________________________\n";
                                            std::cout<<"|                                                                   |\n";
                                            std::cout<<"|  > Categoria 7:                                                   |\n";
                                            std::cout<<"|                                                                   |\n";
                                            std::cout<<"|    (1) Titulo 1 WIP                                               |\n";
                                            std::cout<<"|    (2) Titulo 2 WIP                                               |\n";
                                            std::cout<<"|    (3) Titulo 3 WIP                                               |\n";
                                            std::cout<<"|    (4) Titulo 4 WIP                                               |\n";
                                            std::cout<<"|    (5) Titulo 5 WIP                                               |\n";
                                            std::cout<<"|    (6) Titulo 6 WIP                                               |\n";
                                            std::cout<<"|    (7) Titulo 7 WIP                                               |\n";
                                            std::cout<<"|                                                                   |\n";
                                            std::cout<<"|    (0) Regresar                                                   |\n";
                                            std::cout<<"|___________________________________________________________________|\n";
                                              std::cin>>categ7elec;
                                              switch (categ7elec)
                                              {
                                              case '1':
                                               system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '2':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '3':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '4':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '5':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '6':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '7':
                                                system("start https://www.instagram.com/direct/inbox/");
                                                break;
                                              case '0':
                                                break;
                                              default:
                                                system("cls");
                                                std::cout<<"______________________________________\n";
                                                std::cout<<"| Error: Elija una operacion valida! |\n";
                                                std::cout<<"|    Presione Enter para volver      |\n";
                                                std::cout<<"|____________________________________|\n";
                                                std::cin.ignore(10000, '\n');
                                                std::cin.get();
                                                break;
                                              }

                                            } while (categ7elec!= '0');
                                            
                                            break;
                                        
                                        case '0':
                                            break;
                                        default:
                                            system("cls");
                                            std::cout<<"______________________________________\n";
                                            std::cout<<"| Error: Elija una operacion valida! |\n";
                                            std::cout<<"|    Presione Enter para volver      |\n";
                                            std::cout<<"|____________________________________|\n";
                                            std::cin.ignore(10000, '\n');
                                            std::cin.get();
                                            break;
                                        }

                                    }while (eleccion!= '0');
                                    
                                    break;

                                case '2': {    //////////////////////// SECCION SUGERENCIAS
                                    system("cls");
                                    std::cout<<"_____________________________________________________________________\n";
                                    std::cout<<"|                                                                   |\n";
                                    std::cout<<"|  CHULLOHUB(R) agradece tu colaboracion!                           |\n";
                                    std::cout<<"|                                                                   |\n";
                                    std::cout<<"|  Al escribir (1) y presionar Enter seras redireccionado hacia el  |\n";
                                    std::cout<<"|  formulario de sugerencias y contenido.                           |\n";
                                    std::cout<<"|                                                                   |\n";
                                    std::cout<<"|  > Ir, (1) + Enter                                                |\n";
                                    std::cout<<"|  > Regresar, solo Enter                                           |\n";
                                    std::cout<<"|___________________________________________________________________|\n";
                                    std::cout<<"> Ingresar: "; 
                                    
                                    std::cin.ignore(10000, '\n');

                                    std::string aporte;
                                    std::getline(std::cin, aporte);

                                    if (aporte.empty()) {

                                        break;
                                    }
                                    else if (aporte == "1") {
                                        system("start https://docs.google.com/forms/d/e/1FAIpQLSc6LDQUsVhITkd0u3LB68ryMBiy0-LwkQn0Jeccc5djxhwagQ/viewform?usp=publish-editor");  
                                    }
                                    else {
                                        system("cls");
                                        std::cout<<"______________________________________\n";
                                        std::cout<<"| Error: Elija una operacion valida! |\n";
                                        std::cout<<"|    Presione Enter para volver      |\n";
                                        std::cout<<"|____________________________________|\n";
                                        std::cin.get();
                                    }
                                    break;
                                }

                                case '3':         //////////////////////// SECCION ABOUT
                                    system("cls");
                                    std::cout<<"_____________________________________________________\n";
                                    std::cout<<"|                                                   |\n";
                                    std::cout<<"|  version 1.0                                      |\n";
                                    std::cout<<"|                                                   |\n";
                                    std::cout<<"|  CHULLOHUB(R) es una sociedad anonima creada      |\n";
                                    std::cout<<"|  con el fin de que miembros del elenco de         |\n";
                                    std::cout<<"|  Chulloverso(c) puedan disfrutar de ella!         |\n";
                                    std::cout<<"|                                                   |\n";
                                    std::cout<<"|  > CREDITOS:                                      |\n";
                                    std::cout<<"|  - J (programador)                                |\n";
                                    std::cout<<"|                                                   |\n";
                                    std::cout<<"|  > Regresar, Enter                                |\n";
                                    std::cout<<"|___________________________________________________|\n";
                                    std::cin.ignore(10000, '\n'); // Limpia el buffer
                                    std::cin.get();
                                    break;
                                
                                case '4':
                                    system("cls");
                                    std::cout<<"_____________________________________________________\n";
                                    std::cout<<"|  > Volviendo al menu principal...                 |\n";
                                    std::cout<<"|  > Presione enter:                                |\n";
                                    std::cout<<"|___________________________________________________|\n";
                                    std::cin.ignore(10000, '\n'); // Limpia el buffer
                                    std::cin.get();
                                    break; // Agregado el break que faltaba aquí

                                default:
                                    system("cls");
                                    std::cout<<"______________________________________\n";
                                    std::cout<<"| Error: Elija una operacion valida! |\n";
                                    std::cout<<"|    Presione Enter para volver      |\n";
                                    std::cout<<"|____________________________________|\n";
                                    std::cin.ignore(10000, '\n'); // Limpia el buffer
                                    std::cin.get();
                                    break;
                                }
                            } while (operacion2 != '4');
                            
                        }
                    } while (usuario.empty());

                }
                else if (verificacion == '2'){  // Verificacion FALLIDA
                    system("cls");
                    std::cout<<"_______________________________________\n";
                    std::cout<<"|  No puedes entrar a CHULLOHUB.COM!  |\n";
                    std::cout<<"|     Presione Enter para salir       |\n";
                    std::cout<<"|_____________________________________|\n";
                    std::cin.ignore(10000, '\n'); // Limpia el buffer
                    std::cin.get();
                    operacion1 = '2'; // Fuerza la salida del programa
                }
                else {     // Error en la verificacion
                    system("cls");
                    std::cout<<"______________________________________\n";
                    std::cout<<"| Error: Elija una operacion valida! |\n";
                    std::cout<<"|    Presione Enter para volver      |\n";
                    std::cout<<"|____________________________________|\n";
                    std::cin.ignore(10000, '\n'); // Limpia el buffer
                    std::cin.get();
                }
            } while (verificacion != '1' && verificacion != '2'); 
   
        }
        else if (operacion1 == '2'){ // SALIDA
            system("cls");
            std::cout<<"_______________________________________\n";
            std::cout<<"| Gracias por utilizar CHULLOHUB.COM! |\n";
            std::cout<<"|   Hasta la proxima! Presione Enter  |\n";
            std::cout<<"|_____________________________________|\n";
            std::cin.ignore(10000, '\n'); // Limpia el buffer
            std::cin.get();
        }
        else { // ERROR OP1
            system("cls");
            std::cout<<"______________________________________\n";
            std::cout<<"| Error: Elija una operacion valida! |\n";
            std::cout<<"|    Presione Enter para volver      |\n";
            std::cout<<"|____________________________________|\n";
            std::cin.ignore(10000, '\n'); // Limpia el buffer
            std::cin.get();
        }

    } while (operacion1 != '2');

    return 0;
}