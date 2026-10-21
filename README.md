# MP_Luis — Análisis de K-mers en secuencias de ADN

Repositorio de prácticas de **Metodología de la Programación (MP)**, centrado en el procesamiento y análisis de secuencias genéticas mediante *k-mers* y en el desarrollo progresivo de herramientas para trabajar con perfiles de ADN.

## Descripción del proyecto

Un **k-mer** es una subsecuencia de longitud \(k\) obtenida a partir de una secuencia biológica. En el caso del ADN, está formada por nucleótidos representados mediante los caracteres `A`, `C`, `G` y `T`.

Por ejemplo, para la secuencia `ACGTAC` y un valor de \(k=3\), los k-mers consecutivos son:

```text
ACG
CGT
GTA
TAC
```

El análisis de estas subsecuencias permite estudiar la composición de una secuencia genética, calcular frecuencias, construir perfiles y comparar secuencias de ADN.

Este repositorio contiene distintas versiones del proyecto, desde el tratamiento básico de k-mers hasta herramientas de aprendizaje y clasificación basadas en perfiles genéticos.

## Contenido del repositorio

### Kmer0 — Procesamiento básico de k-mers

Introducción al manejo de k-mers a partir de secuencias de ADN.

- Extracción de subsecuencias de longitud \(k\).
- Normalización de los k-mers.
- Tratamiento de nucleótidos desconocidos.
- Obtención y representación de secuencias complementarias.

### Kmer1 — Frecuencias de k-mers

Gestión de pares formados por un k-mer y su frecuencia.

- Normalización de los k-mers.
- Eliminación de elementos no válidos.
- Ordenación por frecuencia.
- Resolución de empates mediante el orden de los k-mers.

### Kmer2 — Perfiles genéticos

Implementación de operaciones sobre perfiles que representan la composición de una secuencia de ADN.

- Lectura y procesamiento de perfiles desde archivos.
- Normalización de perfiles.
- Unión de varios perfiles.
- Generación de perfiles resultantes.

### Kmer3 — Comparación de perfiles

Cálculo de distancias entre perfiles genéticos.

- Lectura de perfiles desde archivos.
- Comparación de un perfil con otros.
- Búsqueda de distancias mínimas o máximas.
- Organización de los resultados obtenidos.

### Kmer4 — Ampliación del análisis de perfiles

Continuación del trabajo con perfiles y distancias, ampliando las operaciones de comparación y el tratamiento de varios archivos de entrada.

### Kmer5 — Aprendizaje y clasificación

Desarrollo de herramientas para aprender perfiles a partir de secuencias de ADN y utilizar esos perfiles para clasificar nuevas secuencias.

Incluye dos funcionalidades principales:

- **LEARN:** genera un perfil a partir de uno o varios archivos de secuencias de ADN. Permite configurar parámetros como la longitud del k-mer, el conjunto de nucleótidos y el formato de salida.
- **CLASSIFY:** compara una secuencia de ADN con uno o varios perfiles para determinar cuál ofrece la mejor correspondencia según el procedimiento implementado.

También incorpora componentes para el recuento de k-mers y la gestión de perfiles.

## Tecnologías utilizadas

- **C++** como lenguaje principal.
- Programación modular mediante clases, funciones y archivos de cabecera.
- Archivos de texto y ficheros de perfiles para almacenar y procesar información.
- Makefiles para la compilación.
- Proyectos y configuraciones de NetBeans.
- Scripts y herramientas auxiliares para apoyar el desarrollo.

## Estructura del repositorio

```text
MP_Luis/
├── Kmer0/          # Procesamiento básico de k-mers
├── Kmer1/          # Gestión de frecuencias
├── Kmer2/          # Construcción y unión de perfiles
├── Kmer3/          # Comparación y distancias entre perfiles
├── Kmer4/          # Operaciones avanzadas con perfiles
├── Kmer5/          # Aprendizaje y clasificación
├── MPTools/        # Herramientas y dependencias auxiliares
├── Scripts/        # Scripts de apoyo
├── MPGeometry/     # Proyecto adicional de programación
├── MPGeometrySep/  # Proyecto adicional de geometría
├── Debugger1/      # Pruebas y depuración
├── Debugger2/      # Pruebas y depuración
├── Debugger3/      # Pruebas y depuración
├── HelloWorld/     # Proyecto introductorio
└── README.md
```

## Compilación y ejecución

Los proyectos incluyen archivos `Makefile` y configuraciones de NetBeans. Para compilar una versión concreta desde una terminal, entra en su directorio y utiliza el Makefile correspondiente.

Por ejemplo:

```bash
cd Kmer0
make
```

Los comandos y opciones de ejecución pueden variar entre versiones. Consulta el código fuente y los archivos de ayuda de cada programa para conocer sus argumentos y formatos de entrada.

En las versiones que trabajan con archivos de ADN o perfiles, utiliza los ficheros de entrada que correspondan al formato esperado por el programa.

## Objetivos de aprendizaje

Este proyecto permite practicar conceptos fundamentales de programación y procesamiento de datos:

- Manipulación de cadenas y secuencias.
- Diseño e implementación de clases en C++.
- Gestión de arrays, frecuencias y perfiles.
- Lectura y escritura de archivos.
- Organización del código en módulos.
- Comparación de datos mediante distancias.
- Desarrollo progresivo de algoritmos de análisis genético.
- Construcción de herramientas de aprendizaje y clasificación.

## Autor

**Luis Pérez Velasco**

Repositorio académico de prácticas de Metodología de la Programación.

