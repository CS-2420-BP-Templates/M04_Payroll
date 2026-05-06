#include <iostream>
#include <vector>
#include <iomanip>
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"

int main() {
    // 1. Crear el contenedor de punteros (Polimorfismo)
    std::vector<Employee*> planilla;

    // 2. Instanciar objetos dinámicamente
    planilla.push_back(new SalariedEmployee("Julia Perez", 101, 60000)); // 5000 al mes
    planilla.push_back(new HourlyEmployee("Brian Garcia", 102, 20, 40));   // 800 al mes

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "--- Verificando Calculos de Nomina ---" << std::endl;

    double total = 0;
    for (Employee* emp : planilla) {
        double pay = emp->calculatePay();
        std::cout << "Empleado: " << emp->getNombre() << " | Pago: $" << pay << std::endl;
        total += pay;
    }

    std::cout << "Total esperado: $5800.00 | Total obtenido: $" << total << std::endl;

    // 3. Limpieza de memoria (Prevenir Memory Leaks)
    for (Employee* emp : planilla) {
        delete emp;
    }
    planilla.clear();

    return 0;
}
