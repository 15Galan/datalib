<div align="center">
    <img src=".github/readme/banner-light.png#gh-light-mode-only" alt="Banner (claro)" />
    <img src=".github/readme/banner-dark.png#gh-dark-mode-only" alt="Banner (oscuro)" />
    <br>
    <br>
    <p>Pequeña librería en C para el manejo de diversas estructuras de datos</p>
    <br>
    <a href='https://profile.intra.42.fr/users/antgalan' target="_blank">
        <img alt='Insignia de 42' src='https://img.shields.io/badge/compatible-black?style=flat&logo=42&logoColor=white'/>
    </a>
    <a href="https://wakatime.com/@srgalan">
        <img src="https://wakatime.com/badge/user/a3473630-066f-4ef4-9d7a-4c59975ac61a/project/018b7168-3937-4766-8a11-3e9007922112.svg" alt="Tiempo" />
    </a>
</div>

---

# datalib

Esta librería contiene diversas estructuras de datos y funciones para su manejo.

> [!NOTE]
> Esta librería es compatible con los proyectos de **42 The Network**.  
> El código cumple la **Norma (v3.x)** y las directrices de la escuela.

## Estructuras de datos

Se muestran a continuación las estructuras de datos incluidas en la librería.

> [!IMPORTANT]
> La librería mejorará con el tiempo, añadiendo nuevas estructuras de datos y funciones.

### Listas

#### Doblemente Enlazadas

<div align="center">
    <br>
    <img src=".github/readme/diagrams/dll-dark.png#gh-dark-mode-only" alt="Doblemente Enlazada (oscuro)" />
    <img src=".github/readme/diagrams/dll-light.png#gh-light-mode-only" alt="Doblemente Enlazada (claro)" />
    <br><br>
</div>

Consiste en una **lista enlazada** en la que *cada nodo apunta al anterior y al siguiente*.

**Características**

- Recorrer la lista en ambos sentidos.
- Obtener los extremos desde cualquier nodo.
- Modificar un nodo en cualquier posición de la lista.

**Estructura**

- El primer nodo apunta a `NULL` como nodo anterior.
- El último nodo apunta a `NULL` como nodo siguiente.

#### Doblemente Enlazadas Circulares

<div align="center">
    <br>
    <img src=".github/readme/diagrams/cdll-dark.png#gh-dark-mode-only" height="250px" alt="Doblemente Enlazada (oscuro)" />
    <img src=".github/readme/diagrams/cdll-light.png#gh-light-mode-only" height="250px" alt="Doblemente Enlazada (claro)" />
    <br><br>
</div>

Consiste en una **lista doblemente enlazada** en la que *el último nodo apunta al primero y viceversa*.

**Características**

- Recorrer la lista en ambos sentidos.
- Obtener los extremos desde cualquier nodo.
- Modificar un nodo en cualquier posición de la lista.
- No hay un nodo final, tras el último nodo se encuentra el primero.
- Si la lista tiene 1 solo nodo, el nodo apunta a sí mismo.

**Estructura**

- El primer nodo apunta al último nodo.
- El último nodo apunta al primer nodo.
- Ningún nodo apunta a `NULL`.

### Colas

<div align="center">
    <br>
    <img src=".github/readme/diagrams/queue-dark.png#gh-dark-mode-only" alt="Cola (oscuro)" />
    <img src=".github/readme/diagrams/queue-light.png#gh-light-mode-only" alt="Cola (claro)" />
    <br><br>
</div>

Consiste en una **lista enlazada** en la que cada nodo apunta al siguiente, y donde *los únicos nodos relevantes son el primero y el último*

> [!IMPORTANT]
> Esta es una estructura de datos **FIFO** (*First In, First Out*).

**Características**

- Solo se pueden añadir nodos al inicio.
- Solo se pueden eliminar nodos por el final.
- Los nodos intermedios no son accesibles.
- No se pueden modificar nodos.

**Estructura**

- El último nodo apunta a `NULL` como nodo siguiente.

### Pilas

<div align="center">
    <br>
    <img src=".github/readme/diagrams/stack-dark.png#gh-dark-mode-only" height="250px" alt="Pila (oscuro)" />
    <img src=".github/readme/diagrams/stack-light.png#gh-light-mode-only" height="250px" alt="Pila (claro)" />
    <br><br>
</div>

Consiste en una **lista enlazada** en la que cada nodo apunta al siguiente, y donde *el único nodo relevante es el tope de la pila (primero)*.

> [!IMPORTANT]
> Esta es una estructura de datos **LIFO** (*Last In, First Out*).

**Características**

- Solo se pueden añadir nodos sobre del tope.
- Solo se puede eliminar el tope de la pila.
- Los nodos intermedios y final no son accesibles.
- No se pueden modificar nodos.

**Estructura**

- El último nodo apunta a `NULL` como nodo siguiente.

### Conjuntos

<div align="center">
    <br>
    <img src=".github/readme/diagrams/set-dark.png#gh-dark-mode-only" alt="Conjunto (oscuro)" />
    <img src=".github/readme/diagrams/set-light.png#gh-light-mode-only" alt="Conjunto (claro)" />
    <br><br>
</div>

Consiste en una **lista enlazada** en la que cada nodo apunta al siguiente, y donde *no se admiten nodos repetidos*.

**Características**

- No se pueden añadir nodos repetidos.
- Se pueden aplicar operaciones de [teoría de conjuntos](https://es.wikipedia.org/wiki/Conjunto).

**Estructura**

- El último nodo apunta a `NULL` como nodo siguiente.
