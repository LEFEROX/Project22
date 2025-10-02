#include "AppManager.h"
#include <iostream>

using namespace std;

AppManager::AppManager() : enEjecucion(false), clienteActual(nullptr) { 
}

AppManager::~AppManager() {
    delete clienteActual;
    clienteActual = nullptr; 

    for (Producto* p : catalogoProductos) {
        delete p;
    }
}

void AppManager::iniciar() {
    enEjecucion = true;
    while (enEjecucion) {
        int opcion = MenuUI::mostrarMenuPrincipal();
        procesarOpcionMenuPrincipal(opcion);
    }
}

void AppManager::procesarOpcionMenuPrincipal(int opcion) {
}

void AppManager::procesarInicioSesion() {
    string dni = MenuUI::solicitarDNI();

    Cliente* clienteEncontrado = GestorArchivos::buscarClientePorDNI(dni);

    if (clienteEncontrado) {
        delete clienteActual;

        clienteActual = clienteEncontrado;

        MenuUI::mostrarMensaje("Bienvenido de nuevo, " + clienteActual->getNombreCompleto());

    }
    else {
        MenuUI::mostrarMensaje("Error: Cliente no encontrado.");
    }
}

