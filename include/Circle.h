#ifndef CIRCLE_H
#define CIRCLE_H


class Circle
{
    public:
        class Point{
            public :
                void setPosition(int x , int y){
                    this -> x = x;
                    this -> y = y;
                };
                int getX(){
                    return x;
                };
                int getY(){
                    return y;
                };
            private :
                int x;
                int y;
        };
        Circle(Point &center , int radius);
        Point* getCenter();
        void changePosition(int x , int y);
    protected:
    private:
        Point* center;
        int radius;
};

#endif // CIRCLE_H
