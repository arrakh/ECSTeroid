//
// Created by Arya Rakha on 7/2/2023.
//

#ifndef ECSTEROID_COLLISIONGROUP_H
#define ECSTEROID_COLLISIONGROUP_H

//0x0001
//0x0002
//0x0004
//0x0008
//0x0010
//0x0020
//0x0040
//0x0080
//0x0100
//0x0200
//0x0400
//0x0800
//0x1000
//0x2000
//0x4000
//0x8000
//0xFFFF

enum CollisionCategory {
    CATEGORY_PLAYER = 0x0001,
    CATEGORY_ENEMY = 0x0002,
};

enum CollisionMask {
    MASK_EVERYTHING = 0xFFFF,
};



#endif //ECSTEROID_COLLISIONGROUP_H
