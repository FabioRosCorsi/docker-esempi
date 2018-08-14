#include <iostream>
#include <cstring>

int main(int argc, char* argv[]) 
{
    time_t now = time(0);
    tm* localtm = localtime(&now);
    if(argc>=2){
        std::cout << "FLAGS: [" << argv[1] << "]" << std::endl ;
        std::cout << ((strcmp(argv[1], "test")==0) ? "ESECUZIONE IN MODALITÀ DI TEST" : "Esecuzione ordinaria" ) << std::endl ;
    }
    std::cout << "Sto eseguendo il binario compilato questo istante: " << asctime(localtm) << std::endl;
    return 0;
}