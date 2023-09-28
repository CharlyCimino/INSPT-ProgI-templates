#include "rutaHaciaTuLibreria"

// Definir el/los structs
// Definir prototipos de las funciones

#define CANT_PRODUCTOS 14 // NO MODIFICAR
#define CANT_FACTURAS 7 // NO MODIFICAR

int main () {

    /* NO MODIFICAR LOS DATOS */
    Producto productos[] = {{"RGPFPR","Llave Termica",549.82},
        {"AHIWPJ","Llave De Luz",235.19},
        {"DUGAZE","Alargue 20 Mts",1925.76},
        {"YDDYUF","Cable uni 100m",968.72},
        {"GBSXRH","Tablero 24 Boc.",2736.48},
        {"EGEPQX","Interr. Smart",2033.47},
        {"UEDTDP","Medidor Consumo",2837.59},
        {"JUGYFP","Caño Corrugado",853.98},
        {"VAPFQR","Enchufe Wifi",2104.46},
        {"JUISQK","Zapatilla x6t",1139.89},
        {"NPSWKJ","Panel Led 60x60",2832.10},
        {"QBVSSB","Panel Red. 22cm",818.89},
        {"FICKPW","Lampara Led 5w",780.80},
        {"VTXPBI","Lampara Led 12w",135.00}
    };

    Factura facturas[] = {  {"NZAQXY",'B', {
            {2, "UEDTDP"}, {1, "VTXPBI"}, {3, "NPSWKJ"}
        }
    },
    {
        "QUJQYK",'C', {
            {4, "VTXPBI"}, {2, "JUGYFP"}, {1, "EGEPQX"},
            {2, "VAPFQR"}, {5, "DUGAZE"}
        }
    },
    {
        "ILIWRV",'A', {
            {4, "FICKPW"}, {4, "VTXPBI"}
        }
    },
    {
        "TDWENB",'B', {
            {2, "UEDTDP"}, {5, "JUISQK"}, {2, "VAPFQR"},
            {2, "NPSWKJ"}
        }
    },
    {
        "LANDGH",'B', {
            {8, "VTXPBI"}, {6, "AHIWPJ"}, {10, "EGEPQX"},
            {5, "QBVSSB"}, {12, "DUGAZE"}
        }
    },
    {
        "PEBYBU",'A', {
            {3, "JUISQK"}, {3, "DUGAZE"}, {1, "RGPFPR"},
            {1, "NPSWKJ"}, {3, "AHIWPJ"}, {4, "UEDTDP"}
        }
    },
    {
        "YGAFLC",'C', {
            {2, "VTXPBI"}, {5, "YDDYUF"}, {3, "AHIWPJ"}
        }
    }
};

    /* Desarrollar lo pedido... */
    return 0;
}

// Definir implementaciones de las funciones