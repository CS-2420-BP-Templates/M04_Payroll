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


**Ejemplo de Salida:**
--- Reporte de Nomina Mensual ---
Empleado: Julia Rodriguez | Pago: $3000.00
Empleado: Marcos Gamez | Pago: $1200.50
Total Nomina: $4200.50

**Pruebas:**
No deben aparecer "destructores no virtuales".
Al ejecutar el codigo de prueba, el salario de Julia deber ser exactamente 3000 y el de Marcos 1250.
Si estas usando Linux/Mac, corre el siguiente comando para verificar que no haya fugas de memoria: valgrind ---check=full ./programa  Deberias ver el mensaje: "All heap blocks were freed -- no leaks are possible"



