# M04_Payroll
Este proyecto tiene como objetivo reforzar el uso de arreglos dinámicos (std::vector), herencia y polimorfismo en C++. Desarrollarás un sistema que gestione distintos tipos de empleados y calcule la nómina total de una empresa.

**Objetivos:**
Implementar jerarquías de clase mediante herencia.
Utilizar funciones virtuales y punteros de la clase base para lograr polimorfismo.
Gestionar colecciones de objetos dinámicos usando std::vector<Employee*>.

**Jerarquía de clases:**
Clase Base: Employee (Abstracta)
Atributos: nombre (string) e id (int).
Método virtual puro: calculatePay() que retorna un double.
Clase Derivada: SalariedEmployee
Atributo: annualSalary.
Cálculo: El pago mensual es annualSalary / 12.
Clase Derivada: HourlyEmployee
Atributos: hourlyRate y hoursWorked.
Cálculo: El pago es hourlyRate * hoursWorked.

**Archivos:**
Employee.h: Definición de la clase base abstracta y destructor virtual.
SalariedEmployee.h / .cpp: Especialización para empleados asalariados.
HourlyEmployee.h / .cpp: Especialización para empleados por hora.
main.cpp: Punto de entrada que implementa el std::vector<Employee*>.
Makefile (Opcional): Para facilitar la compilación de múltiples archivos.

**Ejemplo de Salida**
--- Reporte de Nómina Mensual ---
Empleado: Juan Pérez | Pago: $3500.00
Empleado: Ana Gómez | Pago: $1250.50
---------------------------------
Total Nómina: $4750.50


