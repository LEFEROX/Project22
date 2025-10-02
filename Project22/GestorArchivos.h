#pragma once
#include "Cliente.h"
#include <string>
#include <vector>
#include <optional>
#ifndef GESTORARCHIVOS_H
#define GESTORARCHIVOS_H

using namespace std;

class GestorArchivos {
public:
    static optional<Cliente> buscarClientePorDNI(const string& dni);

    static bool guardarNuevoCliente(const Cliente& nuevoCliente);
};

#endif