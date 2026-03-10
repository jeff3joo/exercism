namespace targets {
    class Alien{
        public:
            Alien(int x, int y){
                x_coordinate =x;
                y_coordinate =y;
            }
            int  x_coordinate, y_coordinate;
            int get_health(){
                return health;
            }
            bool hit(){
                if (health>0) health--;
                return true;
            }
            bool is_alive(){
                if (health>0)return true;
                return false;
            }
            bool teleport(int x, int y){
                x_coordinate =x;
                y_coordinate =y;
                return true;
            }
            bool collision_detection(Alien& coll){
                if ((coll.x_coordinate == this->x_coordinate) && (coll.y_coordinate == this->y_coordinate)) return true;
                return false;
            }
        private:
            int health =3;
    };
}  // namespace targets
