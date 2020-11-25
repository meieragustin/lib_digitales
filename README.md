# lib_digitales
int cantidad_pasos_tilt(int  grados_tilt) {

  int factor_reduccion = 7;
  float grados_por_pasos = 1.8;

  int total_grados_tilt = grados_tilt * factor_reduccion;

  int total_pasos_tilt = total_grados_tilt / grados_por_pasos;

  return total_pasos_tilt;

}
