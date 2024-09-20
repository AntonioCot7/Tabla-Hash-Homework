#include <iostream>
//#include "hash_table_chaining.h"
#include "hash_table_open_adressing.h"

void chaining(){
    HashTable<int, std::string> hashTable(5);

    hashTable.insert(1, "Uno");
    hashTable.insert(2, "Dos");
    hashTable.insert(5, "Cinco");
    hashTable.insert(7, "Siete");
    hashTable.insert(11, "Once");
    hashTable.insert(10, "Dies");
    hashTable.insert(3, "Tres");
    hashTable.insert(12, "Doce");

    std::cout << "\nBuscando elementos:" << std::endl;
    std::string* valor1 = hashTable.search(1);
    std::string* valor2 = hashTable.search(2);
    std::string* valor3 = hashTable.search(12);

    if (valor1) std::cout << "Key 1 encontrada: " << *valor1 << std::endl;
    else std::cout << "Key 1 no encontrada." << std::endl;

    if (valor2) std::cout << "Key 2 encontrada: " << *valor2 << std::endl;
    else std::cout << "Key 2 no encontrada." << std::endl;

    if (valor3) std::cout << "Key 12 encontrada: " << *valor3 << std::endl;
    else std::cout << "Key 12 no encontrada." << std::endl;

    std::string* valorNoExistente = hashTable.search(99);
    if (valorNoExistente) std::cout << "Key 99 encontrada: " << *valorNoExistente << std::endl;
    else std::cout << "Key 99 no encontrada." << std::endl;

    std::cout << "\nDelete Key 2." << std::endl;
    hashTable.remove(2);

    std::string* valorEliminado = hashTable.search(2);
    if (valorEliminado) std::cout << "Key 2 sigue en la tabla " << *valorEliminado << std::endl;
    else std::cout << "Key 2 eliminada con exito." << std::endl;

    hashTable.insert(5, "Cinco");
    hashTable.insert(6, "Seis");
    hashTable.insert(7, "Siete");

    std::string* valor6 = hashTable.search(6);
    if (valor6) std::cout << "Key 6 encontrada: " << *valor6 << std::endl;
    else std::cout << "Key 6 no encontrada." << std::endl;
}

void open_adressing(){
    HashTable<int, std::string> hashTable(5);

    hashTable.insert(1, "Uno");
    hashTable.insert(2, "Dos");
    hashTable.insert(3, "Tres");
    hashTable.insert(12, "Doce");

    std::cout << "\nBuscando elementos:" << std::endl;
    std::string* valor1 = hashTable.search(1);
    std::string* valor2 = hashTable.search(2);
    std::string* valor3 = hashTable.search(12);

    if (valor1) std::cout << "Key 1 encontrada: " << *valor1 << std::endl;
    else std::cout << "Key 1 no encontrada." << std::endl;

    if (valor2) std::cout << "Key 2 encontrada: " << *valor2 << std::endl;
    else std::cout << "Key 2 no encontrada." << std::endl;

    if (valor3) std::cout << "Key 12 encontrada: " << *valor3 << std::endl;
    else std::cout << "Key 12 no encontrada." << std::endl;

    std::string* valorNoExistente = hashTable.search(99);
    if (valorNoExistente) std::cout << "Key 99 encontrada: " << *valorNoExistente << std::endl;
    else std::cout << "Key 99 no encontrada." << std::endl;

    std::cout << "\nDelete Key 2." << std::endl;
    hashTable.remove(2);

    std::string* valorEliminado = hashTable.search(2);
    if (valorEliminado) std::cout << "Key 2 sigue en la tabla: " << *valorEliminado << std::endl;
    else std::cout << "Key 2 eliminada con exito." << std::endl;

    hashTable.insert(5, "Cinco");
    hashTable.insert(6, "Seis");
    hashTable.insert(7, "Siete");

    std::string* valor6 = hashTable.search(6);
    if (valor6) std::cout << "Key 6 encontrada: " << *valor6 << std::endl;
    else std::cout << "Key 6 no encontrada." << std::endl;
}

int main() {
    //chaining();
    open_adressing();
    return 0;
}
