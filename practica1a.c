/*
         Universidad Autonoma de Baja California
        Facultad de Ciencias Quimicas e Ingenieria
              Cesar Leonardo Zurita Merino
                     Practica: 1

Un agricultor necesita 250 kilogramos de semilla por cada hectárea
de terreno, 800 litros de agua, 200 kg de fertilizante, 275 litros de fumigante y paga 3000 pesos
por hectárea de mano de obra. Hacer un programa que pida el número de hectáreas y los
precios de los insumos, envíe los datos correspondientes a funciones que calculen y muestren
el costo por insumo y al final calcule el precio que tendrá la cosecha. 
*/


#include <stdio.h>
#include <stdlib.h>

int hectareas (int, int);
int agua (int, int);
int fertilizante (int, int);
int fumigante (int, int);

int main()
{
    int numhect, phect, pagua, pfert, pfum, totalins, totalobra, totalT, _1, _2, _3, _4;

    printf("Ingrese el numero de hectareas\n");
    scanf("%d",&numhect);
    printf("Ingrese el precio del agua\n");
    scanf("%d",&pagua);
    printf("Ingrese el precio del fertilizante\n");
    scanf("%d",&pfert);
    printf("Ingrese el precio del fumigante\n");
    scanf("%d",&pfum);

    printf(" **PRECIO POR INSUMO**  \n");
    printf("Num. de Hectareas:...%d\n",numhect);
    printf("Precio Hectaria..:...3000\n");
    printf("Precio agua:.........%d\n",pagua);
    printf("Precio Fertilizante:.%d\n",pfert);
    printf("Precio fumigante:....%d\n",pfum);

    printf(" **PRECIO TOTAL POR %d HECTAREAS**  \n",numhect);
    _1=hectareas(numhect,phect);
    printf("    Total Hectaria..:...%d\n",_1);
    _2=agua(pagua,numhect);
    printf("    Total agua:.........%d\n",_2);
    _3=fertilizante(pfert,numhect);
    printf("    Total Fertilizante:.%d\n",_3);
    _4=fumigante(pfum,numhect);
    printf("    Total fumigante:....%d\n",_4);
    
    printf(" **TOTALES POR CONCEPTO GRAL. %d HECTAREAS**  \n",numhect);
    totalins=_2+_3+_4;
    totalT=totalins+_1;
    printf("        Total insumos......%d\n",totalins);
    printf("        Total M. de Obra...%d\n",totalT);
}

int hectareas(int numhect, int phect)
{
    int precio;
    precio=numhect*3000;
    return(precio);
}

int agua(int pagua, int numhect)
{
    int precio;
    precio=pagua*800*numhect;
    return(precio);
}

int fertilizante(int pfert, int numhect)
{   
    int precio;
    precio=pfert*200*numhect;
    return(precio);
}

int fumigante(int pfum, int numhect)
{
    int precio;
    precio=pfum*275*numhect;
    return(precio);
}