#include <stdio.h>
#include <string.h>

struct punto{
        float x,y;
};

void pedirpunto(struct punto *,struct punto*);
void ecurecta(struct punto, struct punto);

void main(){
        struct punto p1,p2;
        pedirpunto(&p1,&p2);
      
        ecurecta(p1,p2);
}

void pedirpunto(struct punto *p1,struct punto *p2){
        float x,y;
        printf("bienvenido. \n por favor ingrese x0\n");
        scanf("%f",&(*p1).x);
        printf("\n por favor ingrese y0\n");
        scanf("%f",&(*p1).y);
        printf("\n por favor ingrese x1\n");
        scanf("%f",&(*p2).x);
        printf("\n por favor ingrese y1\n");
        scanf("%f",&(*p2).y);
}

void ecurecta(struct punto p1, struct punto p2){
        float x,y,m,b;
        p1.x=&x;
        p1.y=&y;
        p2.x=&x;
        p2.y=&y;
        b=p2.y-m*p2.x;
        m=(p2.y-p1.y)/(p2.x-p1.x);
        //printf("\n %f \n",m);
        printf("la ecuación de la recta es %fX+%f", m, b);
}
