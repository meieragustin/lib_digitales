#include "Header.h"

int cantidad_pasos_tilt(int  grados_tilt) {

  int factor_reduccion = 7;
  float grados_por_pasos = 1.8;

  int total_grados_tilt = grados_tilt * factor_reduccion;

  int total_pasos_tilt = total_grados_tilt / grados_por_pasos;

  return total_pasos_tilt;

}

int cantidad_pasos_pan(int grados_pan) {

  int factor_reduccion = 7;
  float grados_por_pasos = 1.8;


  int total_grados_pan = grados_pan * factor_reduccion;

  int total_pasos_pan = total_grados_pan / grados_por_pasos;

  return total_pasos_pan;

}

int cantidad_pasos_long(int dist_long) {

  float diam_polea = 1.4;
  float grados_por_pasos = 1.8;

  float recorrido_por_vuelta = 3.14 * diam_polea;

  float total_vueltas = dist_long / recorrido_por_vuelta;

  int total_pasos_long = total_vueltas * (360 / grados_por_pasos);

  return total_pasos_long;

}
