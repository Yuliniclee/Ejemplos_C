#include "inventario.h"

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

void agregarProducto(Producto inventario[], int& cantidadActual) {
	if (cantidadActual >= MAX_PRODUCTOS) {
		cout << "\nInventario lleno. No se pueden agregar más productos.\n";
		return;
	}

	Producto& nuevoProducto = inventario[cantidadActual];

	cout << "\n--- Agregar Producto ---\n";
	cout << "ID: ";
	cin >> nuevoProducto.id;

	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "Nombre del producto: ";
	getline(cin, nuevoProducto.nombre);

	cout << "Precio: ";
	cin >> nuevoProducto.precio;

	cout << "Stock: ";
	cin >> nuevoProducto.stock;

	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << "Nombre de la empresa proveedora: ";
	getline(cin, nuevoProducto.datosProveedor.nombreEmpresa);

	cout << "Teléfono del proveedor: ";
	getline(cin, nuevoProducto.datosProveedor.telefono);

	cantidadActual++;
	cout << "Producto agregado correctamente.\n";
}

void mostrarInventario(const Producto inventario[], int cantidadActual) {
	cout << "\n--- Inventario Actual ---\n";

	if (cantidadActual == 0) {
		cout << "No hay productos registrados.\n";
		return;
	}

	cout << fixed << setprecision(2);

	for (int i = 0; i < cantidadActual; i++) {
		cout << inventario[i].id << " | "
			 << inventario[i].nombre << " | $"
			 << inventario[i].precio << " | "
			 << inventario[i].stock << " | Proveedor: "
			 << inventario[i].datosProveedor.nombreEmpresa << " ("
			 << inventario[i].datosProveedor.telefono << ")\n";
	}
}

void venderProducto(Producto inventario[], int& cantidadActual) {
	if (cantidadActual == 0) {
		cout << "\nNo hay productos en inventario para vender.\n";
		return;
	}

	int idBuscado;
	int cantidadVenta;
	bool encontrado = false;

	cout << "\n--- Vender Producto ---\n";
	cout << "Ingrese ID del producto: ";
	cin >> idBuscado;

	cout << "Ingrese cantidad a comprar: ";
	cin >> cantidadVenta;

	if (cantidadVenta <= 0) {
		cout << "La cantidad a comprar debe ser mayor a 0.\n";
		return;
	}

	for (int i = 0; i < cantidadActual; i++) {
		if (inventario[i].id == idBuscado) {
			encontrado = true;

			if (inventario[i].stock >= cantidadVenta) {
				float subtotal = inventario[i].precio * cantidadVenta;
				float descuento = 0.0f;

				if (subtotal > 500.0f) {
					descuento = subtotal * 0.10f;
				}

				float totalPagar = subtotal - descuento;
				inventario[i].stock -= cantidadVenta;

				cout << fixed << setprecision(2);
				cout << "Venta realizada con éxito.\n";
				cout << "Subtotal: $" << subtotal << "\n";
				cout << "Descuento: $" << descuento << "\n";
				cout << "Total a pagar: $" << totalPagar << "\n";
				cout << "Stock restante: " << inventario[i].stock << "\n";
			} else {
				cout << "Error: Stock insuficiente. Disponible: "
					 << inventario[i].stock << "\n";
			}

			break;
		}
	}

	if (!encontrado) {
		cout << "No existe un producto con ese ID.\n";
	}
}

