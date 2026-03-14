#pragma once

#include <string>

using namespace std;

const int MAX_PRODUCTOS = 10;

struct Proveedor {
	string nombreEmpresa;
	string telefono;
};

struct Producto {
	int id;
	string nombre;
	float precio;
	int stock;
	Proveedor datosProveedor;
};

void agregarProducto(Producto inventario[], int& cantidadActual);
void mostrarInventario(const Producto inventario[], int cantidadActual);
void venderProducto(Producto inventario[], int& cantidadActual);

