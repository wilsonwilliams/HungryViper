// ============================================
// The Viper class file
//
// Copyright 2022 Georgia Tech. All rights reserved.
// The materials provided by the instructor in this course are for
// the use of the students currently enrolled in the course.
// Copyrighted course materials may not be further disseminated.
// This file must NOT be made publicly available anywhere.
//==================================================================


#include "viper.h"
#include "globals.h"

void viper_init (Viper * v)
{
    // TODO: Implement
    //1. Set starting coordinates for your viper head and previous
    
    v->head_x = 5;
    v->head_y = 5;
    v->head_px = v->head_x;
    v->head_py = v->head_y;
    
    v->locations[0].x = v->head_x;
    v->locations[0].y = v->head_y;
    
    //2. Initialize all location for your maximum viper body (loop through the viper)
    
    for (int i = 3; i < VIPER_MAX_LENGTH; ++i) {
        v->locations[i].x = -1;
        v->locations[i].y = -1;
    }

    //3. Set starting length of your viper
    
    v->length = 3;

    //4. Set starting coordinates for the rest of viper body from starting length
    
    for (int i = 1; i < v->length; ++i) {
        v->locations[i].x = v->locations[i - 1].x - 1;
        v->locations[i].y = v->locations[i - 1].y;
    }

    //5. Initialize viper status
    
    v->score = 0;
    
    //6. Initialize viper invincibility
    v->invincible = false;
}
