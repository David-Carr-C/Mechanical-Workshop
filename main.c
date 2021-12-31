#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TOT_CHR 50 /*
 * Total de Caracteres
 */

void inversoString(char *cadenaCaracteres) {
    unsigned a = strlen(cadenaCaracteres);
    for (int i = 0; i < a; ++i) {
        if (cadenaCaracteres[i]=='_') {
            cadenaCaracteres[i] = ' ';
        }
    }
}

void manejoString(char *cadenaCaracteres) {
    unsigned a = strlen(cadenaCaracteres);
    for (int i = 0; i < a; ++i) {
        if (cadenaCaracteres[i]==' ') {
            cadenaCaracteres[i] = '_';
        }
    }
}

void creacionID(int *ID, char *nombre) {
    int X = (int) nombre[0];//D
    unsigned Y = strlen(nombre); //d
    int Z = (int) nombre[Y-1];//0 <- ultimaletra del nombre
    *ID = X+Z;
}

void quitarEnter(char *cadenaCaracteres) {
    cadenaCaracteres[ (strlen(cadenaCaracteres)-1) ] = 0;//\n -> \000
}

void recibo(int A, int B, int C, int D, int E, int F, int G, int H, double cost, int ID, int entrega) {
    FILE *f = fopen("Eleccion.txt","a+");//w r a
    fprintf(f,"%d %d %d %d %d %d %d %d %d %d %lf\n",ID,A,B,C,D,E,F,G,H,entrega,cost);
    printf("-Resumen-\nUsted ha elegido:\n\n");
    if (A==1) {
        printf("Reparacion de motor\n");
    }
    if (B==1) {
        printf("Reparacion de caja de cambios\n");
    }
    if (C==1) {
        printf("Reparacion de inyectores de combustible\n");
    }
    if (D==1) {
        printf("Reparacion de aire acondicionado\n");
    }
    if (E==1) {
        printf("Mantenimiento de bateria\n");
    }
    if (F==1) {
        printf("Mantenimiento del embrague\n");
    }
    if (G==1) {
        printf("Mantenimiento de pastillas de freno\n");
    }
    if (H==1) {
        printf("Mantenimiento de Filtros de aire, gasolina y aceite\n");
    }
    printf("\nCosto total a pagar: $%.2lf\n",cost);
    printf("Fecha de entrega: Enero %d\n",entrega);
    printf("Necesitamos una contrasenia para garantizarle seguridad:\n");
    getchar();
    char pass[TOT_CHR];
    fgets(pass,TOT_CHR,stdin);
    quitarEnter(pass);
    manejoString(pass);
    FILE *contr = fopen("Lock.bin","ab+");
    fprintf(contr,"%s\n",pass);
    fclose(contr);
    fclose(f);
}

void resumen(int A, int B, int C, int D, int E, int F, int G, int H, double cost) {
    printf("-Resumen-\nUsted ha elegido:\n\n");
    if (A==1) {
        printf("Reparacion de motor\n");
    }
    if (B==1) {
        printf("Reparacion de caja de cambios\n");
    }
    if (C==1) {
        printf("Reparacion de inyectores de combustible\n");
    }
    if (D==1) {
        printf("Reparacion de aire acondicionado\n");
    }
    if (E==1) {
        printf("Mantenimiento de bateria\n");
    }
    if (F==1) {
        printf("Mantenimiento del embrague\n");
    }
    if (G==1) {
        printf("Mantenimiento de pastillas de freno\n");
    }
    if (H==1) {
        printf("Mantenimiento de Filtros de aire, gasolina y aceite\n");
    }
    printf("\nNo procedio el pago de $%.2lf\n",cost);
}

unsigned menu(int id) {
    unsigned value = 0;

    double repaMotor = 8800.50, repaCaja = 5500.50;
    double repaIny = 2800.50, repaAir = 3300.50;
    double repaBate = 3000.00, repaEmbr = 7750.00;
    double repaFren = 3950.00, repaFilt = 8000.00;

    double monto = 0.00;

    int opA = 0,opB = 0,opC = 0,opD = 0,opE = 0,opF = 0,opG = 0,opH = 0, entrega = 0;

    char elegir = 0, salir = 0, proCD[4];
    while (salir != 'x') {
        printf("Que Reparacion/Mantenimiento desea elegir?\n");
        printf("a) Reparacion de motor $%.2lf\n", repaMotor);
        printf("b) Reparacion de caja de cambios $%.2lf\n", repaCaja);
        printf("c) Reparacion de inyectores de combustible $%.2lf\n", repaIny);
        printf("d) Reparacion de aire acondicionado $%.2lf\n", repaAir);
        printf("e) Mantenimiento de bateria $%.2lf\n", repaBate);
        printf("f) Mantenimiento del embrague $%.2lf\n", repaEmbr);
        printf("g) Mantenimiento de pastillas de freno $%.2lf\n", repaFren);
        printf("h) Mantenimiento de Filtros de aire, gasolina y aceite $%.2lf\n", repaFilt);
        printf("i) Proceder o No proceder\n");
        printf("Su eleccion es -> ");
        scanf("%c",&elegir);
        getchar();
        switch (elegir) {
            case 'a':
                if (opA==1) {
                    printf("\nUsted ya eligio esta reparacion\n");
                } else {
                    printf("\nUsted ha elegido \"Reparacion de motor\", Gracias por elegir la reparacion!\n");
                    opA = 1;
                    monto += repaMotor;//monto = monto + repaMotor
                    printf("Precio Acumulado hasta el momento: %.2lf\n\n",monto);
                    entrega += 5;
                }
                break;
            case 'b':
                if (opB==1) {
                    printf("\nUsted ya eligio esta reparacion\n");
                } else {
                    printf("\nUsted ha elegido \"Reparacion de caja de cambios\", Gracias por elegir la reparacion!\n");
                    opB = 1;
                    monto += repaCaja;
                    printf("Precio Acumulado hasta el momento: %.2lf\n\n",monto);
                    entrega += 5;
                }
                break;
            case 'c':
                if (opC==1) {
                    printf("\nUsted ya eligio esta reparacion\n");
                } else {
                    printf("\nUsted ha elegido \"Reparacion de inyectores de combustible\", Gracias por elegir la reparacion!\n");
                    opC = 1;
                    monto += repaIny;
                    printf("Precio Acumulado hasta el momento: %.2lf\n\n",monto);
                    entrega += 5;
                }
                break;
            case 'd':
                if (opD==1) {
                    printf("\nUsted ya eligio esta reparacion\n");
                } else {
                    printf("\nUsted ha elegido \"Reparacion de aire acondicionado\", Gracias por elegir la reparacion!\n");
                    opD = 1;
                    monto += repaAir;
                    printf("Precio Acumulado hasta el momento: %.2lf\n\n",monto);
                    entrega += 5;
                }
                break;
            case 'e':
                if (opE==1) {
                    printf("\nUsted ya eligio este mantenimiento\n");
                } else {
                    printf("\nUsted ha elegido \"Mantenimiento de bateria\", Gracias por elegir el mantenimiento!\n");
                    opE = 1;
                    monto += repaBate;
                    printf("Precio Acumulado hasta el momento: %.2lf\n\n",monto);
                    entrega += 2;
                }
                break;
            case 'f':
                if (opF==1) {
                    printf("\nUsted ya eligio este mantenimiento\n");
                } else {
                    printf("\nUsted ha elegido \"Mantenimiento del embrague\", Gracias por elegir el mantenimiento!\n");
                    opF = 1;
                    monto += repaEmbr;
                    printf("Precio Acumulado hasta el momento: %.2lf\n\n",monto);
                    entrega += 2;
                }
                break;
            case 'g':
                if (opG==1) {
                    printf("\nUsted ya eligio este mantenimiento\n");
                } else {
                    printf("\nUsted ha elegido \"Mantenimiento de pastillas de freno\", Gracias por elegir el mantenimiento!\n");
                    opG = 1;
                    monto += repaFren;
                    printf("Precio Acumulado hasta el momento: %.2lf\n\n",monto);
                    entrega += 2;
                }
                break;
            case 'h':
                if (opH==1) {
                    printf("\nUsted ya eligio este mantenimiento\n");
                } else {
                    printf("\nUsted ha elegido \"Mantenimiento de Filtros de aire, gasolina y aceite\", Gracias por elegir el mantenimiento!\n");
                    opH = 1;
                    monto += repaFilt;
                    printf("Precio Acumulado hasta el momento: %.2lf\n\n",monto);
                    entrega += 2;
                }
                break;
            case 'i':
                if (monto==0.00) {
                    printf("Por favor elija una opcion antes de proceder\n");
                }else {
                    printf("Desea proceder con el trabajo?\n");
                    printf("(SI/NO)  ->  ");
                    fgets(proCD, 3, stdin);
                    if ( (strcmp(proCD,"SI") == 0) || (strcmp(proCD,"si"))==0 ) {
                        recibo(opA,opB,opC,opD,opE,opF,opG,opH,monto,id,entrega);
                        value = 1;
                        salir = 'x';
                    } else if (strcmp(proCD,"NO")==0){
                        resumen(opA,opB,opC,opD,opE,opF,opG,opH,monto);
                        printf("Espero vuelva pronto y haya algo que le interese!\n");
                        value = 0;
                        salir = 'x';
                    } else {
                        printf("\nLa opcion que usted eligio no es valida debe ser \"SI\" o \"NO\"\n\n");
                    }
                }
                break;
            default:
                printf("Opcion Incorrecta\n");
        }
    }
    return value;
}

unsigned ingresar(char *nombre) {
    unsigned E = 0;
    quitarEnter(nombre);
    FILE *ing = fopen("DataBase.txt","r");
    if (ing!=NULL) {
        char fnombre[TOT_CHR];
        unsigned access = 0;
        while (!feof(ing)){
            fscanf(ing,"%s",fnombre);
            inversoString(fnombre);
            if (strcmp(fnombre,nombre)==0) {
                access = 1;
            }
        }
        if (access==1) {
            char fpass[TOT_CHR], pass[TOT_CHR];
            printf("Ingrese su contrasenia: ");
            fgets(pass,TOT_CHR,stdin);
            quitarEnter(pass);
            manejoString(pass);
            FILE *contr = fopen("Lock.bin","rb");
            access = 0;
            if (contr==NULL) {
                printf("Algo se daño!, olvidese de esta cuenta, ingrese con otro nombre\n");
            } else {
                while (!feof(contr)) {
                    fscanf(contr,"%s",fpass);
                    if (strcmp(fpass,pass)==0) {
                        access = 1;
                    }
                }
                fclose(contr);
                if (access==1) {
                    E = 1;
                    int ID;
                    creacionID(&ID,nombre);
                    FILE *prsnl = fopen("Personal.txt","r");
                    if (prsnl==NULL) {
                        printf("Algo se daño!, olvidese de esta cuenta ingrese, con otro nombre\n");
                    } else {
                        int FID;
                        while (!feof(prsnl)) {
                            char algo[TOT_CHR];
                            fscanf(prsnl,"%d",&FID);
                            if (FID!=ID) {
                                fscanf(prsnl, "%s", algo);
                                fscanf(prsnl, "%s", algo);
                                fscanf(prsnl, "%s", algo);
                                fscanf(prsnl, "%s", algo);
                                fscanf(prsnl, "%s", algo);
                            }
                            if (FID==ID) {
                                char fname[TOT_CHR], fdir[TOT_CHR],fmarca[TOT_CHR],fmodel[TOT_CHR],fplaca[TOT_CHR];
                                fscanf(prsnl,"%s",fname);
                                fscanf(prsnl,"%s",fdir);
                                fscanf(prsnl,"%s",fmarca);
                                fscanf(prsnl,"%s",fmodel);
                                fscanf(prsnl,"%s",fplaca);

                                inversoString(fname);
                                inversoString(fdir);
                                inversoString(fmarca);
                                inversoString(fmodel);
                                inversoString(fplaca);

                                printf("\n****Acceso completado con exito!****\n\n");
                                printf("Nombre: %s\n",fname);
                                printf("Direccion: %s\n",fdir);
                                printf("Marca del auto: %s\n",fmarca);
                                printf("Modelo del auto %s\n",fmodel);
                                printf("Placa del auto: %s\n",fplaca);

                                FILE *elec = fopen("Eleccion.txt","r");
                                if (elec==NULL) {
                                    printf("Por favor consulte o envie ticket de mantenimiento, Error: 404\n");
                                } else {
                                    FID = 0;
                                    while (!feof(elec)) {
                                        char auxiliar[50];
                                        fscanf(elec,"%s",/*&FID*/ auxiliar);
                                        FID = atoi(auxiliar);
                                        if (FID==ID) {
                                            int A1,B2,C3,D4,E5,F6,G7,H8;
                                            int delivery;
                                            double fcost;
                                            fscanf(elec,"%d",&A1);
                                            fscanf(elec,"%d",&B2);
                                            fscanf(elec,"%d",&C3);
                                            fscanf(elec,"%d",&D4);
                                            fscanf(elec,"%d",&E5);
                                            fscanf(elec,"%d",&F6);
                                            fscanf(elec,"%d",&G7);
                                            fscanf(elec,"%d",&H8);
                                            fscanf(elec,"%d",&delivery);
                                            fscanf(elec,"%lf",&fcost);
                                            printf("\n-Resumen-\n\nUsted ha elegido:\n\n");
                                            if (A1==1) {
                                                printf("Reparacion de motor\n");
                                            }
                                            if (B2==1) {
                                                printf("Reparacion de caja de cambios\n");
                                            }
                                            if (C3==1) {
                                                printf("Reparacion de inyectores de combustible\n");
                                            }
                                            if (D4==1) {
                                                printf("Reparacion de aire acondicionado\n");
                                            }
                                            if (E5==1) {
                                                printf("Mantenimiento de bateria\n");
                                            }
                                            if (F6==1) {
                                                printf("Mantenimiento del embrague\n");
                                            }
                                            if (G7==1) {
                                                printf("Mantenimiento de pastillas de freno\n");
                                            }
                                            if (H8==1) {
                                                printf("Mantenimiento de Filtros de aire, gasolina y aceite\n");
                                            }
                                            printf("\nTotal a pagar $%.2lf\n",fcost);
                                            printf("Fecha de entrega: Enero %d\n",delivery);
                                            exit(0);
                                        }

                                    }
                                    fclose(elec);
                                }
                            }
                        }
                        fclose(prsnl);
                    }
                }
            }
        }
        fclose(ing);
    }
    return E;
}

int main() {
    char nombre[TOT_CHR], dir[TOT_CHR];
    char marca[TOT_CHR], modelo[TOT_CHR];
    char placa[TOT_CHR];
    printf("---Taller Mecanico---\n");
    printf("Inserte su nombre: ");
    fgets(nombre,TOT_CHR,stdin);//gets(nombre)
    if (ingresar(nombre)==1) {
        return 0;
    }
    printf("Inserte su direccion: ");
    fgets(dir,TOT_CHR,stdin);
    printf("Marca del Auto: ");
    fgets(marca,TOT_CHR,stdin);
    printf("Modelo del Auto: ");
    fgets(modelo,TOT_CHR,stdin);
    printf("Placas del Auto: ");
    fgets(placa,TOT_CHR,stdin);//hola\n

    quitarEnter(dir);
    quitarEnter(marca);
    quitarEnter(modelo);
    quitarEnter(placa);
    manejoString(nombre);
    manejoString(dir);
    manejoString(marca);
    manejoString(modelo);
    manejoString(placa);

    int id;
    creacionID(&id,nombre);

    unsigned A = menu(id);
    if (A==1) {
        FILE *per = fopen("Personal.txt","a+");
        fprintf(per,"%d ",id);
        fprintf(per,"%s %s %s %s ",nombre,dir,marca,modelo);
        fprintf(per,"%s\n",placa);
        fclose(per);
        FILE *d = fopen("DataBase.txt","a+");
        fprintf(d,"%s\n",nombre);
        fclose(d);
    } else {
        printf("Mantengase al tanto de las ofertas que lanzaremos!\n");
    }

    return 0;
}
