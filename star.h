// ============================================
// The header file for Star class file.
//
// Copyright 2022 Georgia Tech. All rights reserved.
// The materials provided by the instructor in this course are for
// the use of the students currently enrolled in the course.
// Copyrighted course materials may not be further disseminated.
// This file must NOT be made publicly available anywhere.
//==================================================================


#ifndef STAR_H
#define STAR_H

// Star Structure
typedef struct {
    int x, y, px, py;
} Star;

// Initialize a star structure
// You want to assign initial values to each of the variables defined above
// in the star structure.
void star_init (Star* star);


#endif STAR_H  // STAR_H