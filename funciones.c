#include <stdio.h>
#include <string.h>

void listarProductos(char productos[][3][40], double precio[], int indice[]) {
    printf("Número\tNombre\tCategoria\tMarca\tPrecio\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\t%s\t%s\t%s\t%.2f\n", indice[i], productos[i][0], productos[i][1], productos[i][2], precio[i]);
    }
}

void buscarXMarca(char productos[][3][40], double precio[]) {
    char marca[40];
    printf("Ingrese la marca a buscar: ");
    scanf("%s", marca);
    printf("Productos con marca %s:\n", marca);
    for (int i = 0; i < 10; i++) {
        if (strcmp(productos[i][2], marca) == 0) {
            printf("%s\t%s\t%.2f\n", productos[i][0], productos[i][1], precio[i]);
        }
    }
}

void buscarXCategoria(char productos[][3][40], double precio[]) {
    char categoria[40];
    printf("Ingrese la categoría a buscar: ");
    scanf("%s", categoria);
    printf("Productos con categoría %s:\n", categoria);
    for (int i = 0; i < 10; i++) {
        if (strcmp(productos[i][1], categoria) == 0) {
            printf("%s\t%s\t%.2f\n", productos[i][0], productos[i][2], precio[i]);
        }
    }
}

void buscarXPrecioMenor(char productos[][3][40], double precio[]) {
    double limite;
    printf("Ingrese el precio límite: ");
    scanf("%lf", &limite);
    printf("Productos con precio menor a %.2f:\n", limite);
    for (int i = 0; i < 10; i++) {
        if (precio[i] < limite) {
            printf("%s\t%s\t%.2f\n", productos[i][0], productos[i][1], precio[i]);
        }
    }
}

void editarProducto(char productos[][3][40], double precio[], int indice[]) {
    int num;
    printf("Ingrese el número del producto a editar: ");
    scanf("%d", &num);
    for (int i = 0; i < 10; i++) {
        if (indice[i] == num) {
            printf("Ingrese los nuevos datos para el producto:\n");
            printf("Nombre: ");
            scanf("%s", productos[i][0]);
            printf("Categoría: ");
            scanf("%s", productos[i][1]);
            printf("Marca: ");
            scanf("%s", productos[i][2]);
            printf("Precio: ");
            scanf("%lf", &precio[i]);
            printf("Producto editado con éxito.\n");
            return;
        }
    }
    printf("Producto no encontrado.\n");
}