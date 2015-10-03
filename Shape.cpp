/* <iostream>

class Shape
{
public:

	float height;
	float width;
	virtual float GetArea()const = 0;
		


};
class Triangle:public Shape
{
public:

	float GetArea()const{
	return ((height * width) / 2);
	}

};
class Cuadrat :public Shape
{
public:

	float GetArea()const{
		return (height * width);
	}
	
};


int main(int argc, char** argv){
	Shape* t = new Triangle();
	Shape* c = new Cuadrat();

	t->height = 4.0f;
	t->width = 8.0f;

	c->height = 5.4f;
	c->width = 6.4f;
	printf_s("%f\n", t->GetArea());
	printf_s("%f", c->GetArea());
	getchar();
}*/