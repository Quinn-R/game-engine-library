#include "../Character.hpp"

void Character::move(std::vector<int> &moves, float dtAsSeconds, int objToMove, std::vector<sf::RectangleShape> &objects) {
    //collide(objToMove, objects);
    //setBumperPosition();

    sf::Vector2f objectPos;

    if(moves[0] == 1/* && objectCollides[0] == 0*/) {
        objectPos.x -= objectSpeed * dtAsSeconds;
    }

    if(moves[1] == 1/* && objectCollides[1] == 0*/) {
        objectPos.x += objectSpeed * dtAsSeconds;
    }

    if(moves[2] == 1/* && objectCollides[2] == 0*/) {
        objectPos.y -= objectSpeed * dtAsSeconds;
    }

    if(moves[3] == 1/* && objectCollides[3] == 0*/) {
        objectPos.y += objectSpeed * dtAsSeconds;
    }
    
    std::cout << "moves: " << moves[0] << moves[1] << moves[2] << moves[3] << std::endl;
    std::cout << "pos: " << getPosition().x <<  getPosition().y << std::endl;
    std::cout << "objPos: " << objectPos.x <<  objectPos.y << std::endl;
    std::cout << "time: " << dtAsSeconds << std::endl;
    
    /*objectShape.*/setPosition(objectPos);
    setBumperPosition();
}

/*
void Object::update(float elapsedTime)
{
	if(isMovingLeft)
    {
        objPos.x -= speed * elapsedTime;
    }
    if(isMovingRight)
    {
        objPos.x += speed * elapsedTime;
    }

    objShape.setPosition(objPos);
}
*/
