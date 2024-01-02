void calcula_hexagono(float l, float *area, float *perimetro){
(*area) = (3*pow(l,2)*sqrt(3))/2;
(*perimetro) = 6*l;
}

int main(){
printf("Insira o lado do hexagono");
float l;
float area = 0;
float perimetro = 0;
scanf("%f", &l);
calcular_hexagono(l,&area,&perimetro);
printf("Area: %.2f\nPerimetro:%.2f", area,perimetro);
return 0;
}