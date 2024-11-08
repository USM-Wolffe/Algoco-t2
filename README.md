# Algoco-t2: Tarea 2 de Algoritmos y Complejidad

## Descripción del Proyecto
Este proyecto consiste en la implementación de algoritmos para calcular la distancia de edición entre dos cadenas de texto utilizando enfoques de fuerza bruta y programación dinámica. Además, se han implementado funciones de costo para las operaciones de inserción, eliminación, sustitución y transposición, con valores configurables a través de archivos de texto.

## Requisitos Previos
- **Compilador de C++** (por ejemplo, `g++`)
- **Make** (para ejecutar el `Makefile`)

Asegúrate de que las siguientes herramientas estén instaladas:
```bash
sudo apt-get install g++ make
```

## Estructura del Proyecto
```
Algoco-t2/
├── data/
│   ├── cost_insert.txt
│   ├── cost_delete.txt
│   ├── cost_replace.txt
│   └── cost_transpose.txt
├── costos.h
├── costos.cpp
├── main.cpp
├── Makefile
└── README.md
```

## Configuración Inicial
1. **Asegúrate de tener los archivos de costos** en la carpeta `data/`. Estos archivos deben contener los valores de los costos de las operaciones de edición.

2. **Compila el proyecto** utilizando el `Makefile`. Desde la terminal, navega al directorio del proyecto y ejecuta:
```bash
make
```

Este comando compilará los archivos `main.cpp` y `costos.cpp`, generando un ejecutable llamado `programa`.

## Ejecución del Proyecto
Para ejecutar el programa, usa el siguiente comando en la terminal:
```bash
./programa
```
El programa cargará los archivos de costos desde la carpeta `data/` y realizará las operaciones de edición según las entradas definidas en el código.

## Limpieza del Proyecto
Para eliminar el ejecutable y los archivos objeto (“.o”), ejecuta:
```bash
make clean
```

## Notas Adicionales
- **Modificación de los costos**: Si deseas cambiar los valores de los costos, edita los archivos `cost_insert.txt`, `cost_delete.txt`, `cost_replace.txt` y `cost_transpose.txt` en la carpeta `data/`.
- **Verifica que las rutas de los archivos** estén correctas en el código si decides mover los archivos de costos a otra ubicación.

## Contacto
Si tienes alguna duda o sugerencia, puedes ponerte en contacto con el equipo de desarrollo.

---
© 2024 Algoco-t2 Project
