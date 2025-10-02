#pragma once
#ifndef APPMANAGER_H
#define APPMANAGER_H
#include "Cliente.h"
#include "MenuUI.h"
#include "GestorArchivos.h"
#include <vector>

using namespace std;

class Producto;
class Pedido;
template<typename T> class Cola;

class AppManager {
private:
    bool enEjecucion;

    Cliente* clienteActual;

    vector<Producto*> catalogoProductos;

    void procesarOpcionMenuPrincipal(int opcion);
    void procesarInicioSesion();
    void procesarRegistro();
    void procesarVerMenuConsulta();
    void procesarSalida();

public:
    AppManager();
    ~AppManager(); 

    void iniciar();
};

#endif