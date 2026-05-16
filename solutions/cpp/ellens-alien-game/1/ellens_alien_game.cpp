
namespace targets {
// TODO: Insert the code for the alien class here
    class Alien {
        public:
            Alien(int x, int y): x_coordinate(x), y_coordinate(y){
                
            }
            int x_coordinate;
            int y_coordinate;
            int get_health(){
                return health;
            }
            int hit(){
                if (health <= 0) return 0; 
                if (--health <=0){
                    return 0;
                } else {
                    return health;
                }
            }
            bool is_alive(){
                return health>0;
            }
            bool teleport(int x_new, int y_new){
                x_coordinate = x_new;
                y_coordinate = y_new;
                return true;
            }
            bool collision_detection(const Alien& enemy){
                return (enemy.x_coordinate == x_coordinate) && (enemy.y_coordinate == y_coordinate);
            }    
                    
        private:
            int health{3};
    };

}  // namespace targets
