// ============================================
// The Star class file
//
// Copyright 2022 Georgia Tech. All rights reserved.
// The materials provided by the instructor in this course are for
// the use of the students currently enrolled in the course.
// Copyrighted course materials may not be further disseminated.
// This file must NOT be made publicly available anywhere.
//==================================================================


#include "star.h"
#include "globals.h"

void star_init (Star * s)
{
    // TODO: Implement
    
    s->x = 32;
    s->y = 7;
    s->px = s->x;
    s->py = s->y;
}
