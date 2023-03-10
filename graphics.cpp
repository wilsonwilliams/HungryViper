// ============================================
// The Graphics class file
//
// Copyright 2022 Georgia Tech. All rights reserved.
// The materials provided by the instructor in this course are for
// the use of the students currently enrolled in the course.
// Copyrighted course materials may not be further disseminated.
// This file must NOT be made publicly available anywhere.
//==================================================================


#include "graphics.h"
#include "globals.h"

void draw_nothing(int u, int v)
{
    uLCD.filled_rectangle(u, v, u+10, v+10, BLACK);
}

void draw_img(int u, int v, const char* img)
{
    int colors[11*11];
    for (int i = 0; i < 11*11; i++)
    {
        if (img[i] == 'R') colors[i] = RED;
        else if (img[i] == 'Y') colors[i] = 0xFFFF00;   // Yellow
        else if (img[i] == 'G') colors[i] = GREEN;
        else if (img[i] == 'D') colors[i] = 0x964B00;   // "Dirt"
        else if (img[i] == '5') colors[i] = LGREY;      // 50% grey
        else if (img[i] == '3') colors[i] = DGREY;
        else colors[i] = BLACK;
    }
    uLCD.BLIT(u, v, 11, 11, colors);
    wait_us(250); // Recovery time!
}

void draw_wall(int u, int v)
{
    // TODO: Implement
    //May need to design a wall sprite
    //Tile still need to be designed on paper
    
    int colors[121] = {
    0xff020291, 0xff020291, 0xff020291, 0xff020291, 0xff020291, 0xff030352, 0xff020291, 0xff020291, 0xff020291, 0xff020291, 0xff020291, 
    0xff020291, 0xff020291, 0xff020291, 0xff020291, 0xff020291, 0xff030352, 0xff020291, 0xff020291, 0xff020291, 0xff020291, 0xff020291, 
    0xff030352, 0xff030352, 0xff030352, 0xff030352, 0xff030352, 0xff030352, 0xff030352, 0xff030352, 0xff030352, 0xff030352, 0xff030352, 
    0xff020291, 0xff020291, 0xff030352, 0xff020291, 0xff020291, 0xff020291, 0xff020291, 0xff020291, 0xff030352, 0xff020291, 0xff020291, 
    0xff020291, 0xff020291, 0xff030352, 0xff020291, 0xff020291, 0xff020291, 0xff020291, 0xff020291, 0xff030352, 0xff020291, 0xff020291, 
    0xff030352, 0xff030352, 0xff030352, 0xff030352, 0xff030352, 0xff030352, 0xff030352, 0xff030352, 0xff030352, 0xff030352, 0xff030352, 
    0xff020291, 0xff020291, 0xff020291, 0xff020291, 0xff020291, 0xff030352, 0xff020291, 0xff020291, 0xff020291, 0xff020291, 0xff020291, 
    0xff020291, 0xff020291, 0xff020291, 0xff020291, 0xff020291, 0xff030352, 0xff020291, 0xff020291, 0xff020291, 0xff020291, 0xff020291, 
    0xff030352, 0xff030352, 0xff030352, 0xff030352, 0xff030352, 0xff030352, 0xff030352, 0xff030352, 0xff030352, 0xff030352, 0xff030352, 
    0xff020291, 0xff020291, 0xff030352, 0xff020291, 0xff020291, 0xff020291, 0xff020291, 0xff020291, 0xff030352, 0xff020291, 0xff020291, 
    0xff020291, 0xff020291, 0xff030352, 0xff020291, 0xff020291, 0xff020291, 0xff020291, 0xff020291, 0xff030352, 0xff020291, 0xff020291
    };
    
    uLCD.BLIT(u, v, 11, 11, colors);
    wait_us(250); // Recovery time!
}

void draw_chest(int u, int v)
{
    // TODO: Implement
    //May need to design a chest sprite
    //Tile still need to be designed on paper
    
    int colors[121] = {
    0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 
    0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 
    0xff00d7ff, 0xff00d7ff, 0xff00d7ff, 0xff00d7ff, 0xff00d7ff, 0xff00d7ff, 0xff00d7ff, 0xff00d7ff, 0xff00d7ff, 0xff00d7ff, 0xff00d7ff, 
    0xff00d7ff, 0xff00d7ff, 0xff00d7ff, 0xff00d7ff, 0xff00d7ff, 0xff000000, 0xff00d7ff, 0xff00d7ff, 0xff00d7ff, 0xff00d7ff, 0xff00d7ff, 
    0xff00d7ff, 0xff00d7ff, 0xff00d7ff, 0xff00d7ff, 0xff00d7ff, 0xff000000, 0xff00d7ff, 0xff00d7ff, 0xff00d7ff, 0xff00d7ff, 0xff00d7ff, 
    0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff000000, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 
    0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 
    0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 
    0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 
    0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 
    0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d, 0xff0a357d
    };
    
    uLCD.BLIT(u, v, 11, 11, colors);
    wait_us(250); // Recovery time!
}

void draw_viper_body(int u, int v)
{
    // TODO: Implement
    //May need to design a viper body sprite
    //Tile still need to be designed on paper
    
    int colors[121] = {
    0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 
    0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 
    0xff185c35, 0xff185c35, 0xff185c35, 0xff185c35, 0xff185c35, 0xff185c35, 0xff185c35, 0xff185c35, 0xff185c35, 0xff185c35, 0xff185c35, 
    0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 
    0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 
    0xff185c35, 0xff185c35, 0xff185c35, 0xff185c35, 0xff185c35, 0xff185c35, 0xff185c35, 0xff185c35, 0xff185c35, 0xff185c35, 0xff185c35, 
    0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 
    0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 
    0xff185c35, 0xff185c35, 0xff185c35, 0xff185c35, 0xff185c35, 0xff185c35, 0xff185c35, 0xff185c35, 0xff185c35, 0xff185c35, 0xff185c35, 
    0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 
    0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e
    };
    
    uLCD.BLIT(u, v, 11, 11, colors);
    wait_us(250); // Recovery time!
}

void draw_viper_head(int u, int v)
{
    // TODO: Implement
    //May need to design a viper head sprite
    //Tile still need to be designed on paper

    int colors[121] = {
    0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 
    0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 
    0xff33bb6e, 0xff33bb6e, 0xff000000, 0xff000000, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 
    0xff33bb6e, 0xff33bb6e, 0xff000000, 0xff708a3d, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff000000, 0xff000000, 0xff33bb6e, 0xff33bb6e, 
    0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 
    0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 
    0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 
    0xff33bb6e, 0xff000000, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff000000, 0xff33bb6e, 
    0xff33bb6e, 0xff33bb6e, 0xff000000, 0xff000000, 0xff000000, 0xff8282eb, 0xff8282eb, 0xff000000, 0xff000000, 0xff33bb6e, 0xff33bb6e, 
    0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff8282eb, 0xff8282eb, 0xff8282eb, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 
    0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff8282eb, 0xff8282eb, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e
    };
    
    uLCD.BLIT(u, v, 11, 11, colors);
    wait_us(250); // Recovery time!
}

void draw_viper_tail(int u, int v)
{
    // TODO: Implement
    //May need to design a viper tail sprite
    //Tile still need to be designed on paper
    
    int colors[121] = {
    0xff185c35, 0xff33bb6e, 0xff33bb6e, 0xff2a8d54, 0xff2a8d54, 0xff185c35, 0xff185c35, 0xff2a8d54, 0xff2a8d54, 0xff185c35, 0xff2a8d54, 
    0xff33bb6e, 0xff33bb6e, 0xff2a8d54, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 
    0xff33bb6e, 0xff185c35, 0xff33bb6e, 0xff33bb6e, 0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 0xff33bb6e, 0xff33bb6e, 0xff185c35, 0xff33bb6e, 
    0xff2a8d54, 0xff33bb6e, 0xff33bb6e, 0xff2a8d54, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff2a8d54, 0xff33bb6e, 0xff33bb6e, 0xff2a8d54, 
    0xff2a8d54, 0xff33bb6e, 0xff185c35, 0xff33bb6e, 0xff33bb6e, 0xff185c35, 0xff33bb6e, 0xff33bb6e, 0xff185c35, 0xff33bb6e, 0xff33bb6e, 
    0xff2a8d54, 0xff33bb6e, 0xff185c35, 0xff33bb6e, 0xff2a8d54, 0xff33bb6e, 0xff2a8d54, 0xff33bb6e, 0xff33bb6e, 0xff2a8d54, 0xff33bb6e, 
    0xff185c35, 0xff33bb6e, 0xff2a8d54, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff185c35, 0xff33bb6e, 0xff2a8d54, 0xff33bb6e, 
    0xff2a8d54, 0xff33bb6e, 0xff33bb6e, 0xff2a8d54, 0xff33bb6e, 0xff33bb6e, 0xff2a8d54, 0xff33bb6e, 0xff33bb6e, 0xff2a8d54, 0xff33bb6e, 
    0xff33bb6e, 0xff2a8d54, 0xff33bb6e, 0xff33bb6e, 0xff2a8d54, 0xff185c35, 0xff33bb6e, 0xff33bb6e, 0xff185c35, 0xff33bb6e, 0xff33bb6e, 
    0xff33bb6e, 0xff33bb6e, 0xff185c35, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff33bb6e, 0xff2a8d54, 0xff33bb6e, 0xff33bb6e, 0xff185c35, 
    0xff2a8d54, 0xff33bb6e, 0xff33bb6e, 0xff2a8d54, 0xff2a8d54, 0xff2a8d54, 0xff185c35, 0xff33bb6e, 0xff33bb6e, 0xff2a8d54, 0xff33bb6e
    };
    
    uLCD.BLIT(u, v, 11, 11, colors);
    wait_us(250); // Recovery time!
}

void draw_coin(int u, int v)
{
    // TODO: Implement
    //Tile still need to be designed on paper
    uLCD.filled_rectangle(u, v, u+10, v+10, BLACK);
    uLCD.filled_circle(u+5, v+5, 4, 0xFFD700);
}

void draw_bomb(int u, int v)
{
    // TODO: Implement
    //Tile still need to be designed on paper
    
    int colors[121] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff0000ff, 0xff0070ff, 0xff0070ff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0xff0070ff, 0xff0000ff, 0xff00ecff, 0xff0000ff, 0xff0000ff, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0xff0070ff, 0xff0070ff, 0xff0070ff, 0xff00ecff, 0xff0070ff, 0xff0000ff, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0xff0000ff, 0xff0000ff, 0xff00ecff, 0xff0070ff, 0xff0000ff, 0xff00ecff, 0xff0070ff, 0xff0070ff, 0x00000000, 0x00000000, 
    0xff0000ff, 0xff0070ff, 0xff00ecff, 0xff0070ff, 0xff0000ff, 0xff0000ff, 0xff00ecff, 0xff00ecff, 0xff0070ff, 0xff0070ff, 0xff00ecff, 
    0xff0070ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff00ecff, 0xff00ecff, 0xff0000ff, 0xff0000ff, 0xff0070ff, 
    0xff00ecff, 0xff00ecff, 0xff0070ff, 0xff0000ff, 0xff00ecff, 0xff00ecff, 0xff00ecff, 0xff0070ff, 0xff0000ff, 0xff00ecff, 0xff0070ff, 
    0x00000000, 0x00000000, 0xff0000ff, 0xff0070ff, 0xff0070ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0070ff, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0xff00ecff, 0xff0070ff, 0xff0000ff, 0xff00ecff, 0xff0070ff, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff00ecff, 0xff0000ff, 0xff0070ff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
    };
    
    uLCD.BLIT(u, v, 11, 11, colors);
    wait_us(250); // Recovery time!
}

void draw_apple(int u, int v)
{
    // TODO: Implement
    //Tile still need to be designed on paper
    
    int colors[121] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff3e657e, 0x00000000, 0xff3e7e50, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff3e657e, 0xff3e7e50, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff0000ff, 0xff3e657e, 0xff0000ff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff0000ff, 0xff0000ff, 0xff0000ff, 0x00000000, 0x00000000, 0x00000000, 0x00000000
    };
    
    uLCD.BLIT(u, v, 11, 11, colors);
    wait_us(250); // Recovery time!
}

void draw_cake(int u, int v)
{
    // TODO: Implement
    //Tile still need to be designed on paper
    
    int colors[121] = {
    0x00000000, 0x00000000, 0x00000000, 0xff2374e4, 0x00000000, 0x00000000, 0x00000000, 0xff2374e4, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0xffffffff, 0x00000000, 0x00000000, 0x00000000, 0xffffffff, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0xffffffff, 0x00000000, 0x00000000, 0x00000000, 0xffffffff, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0xffd583e8, 0xffd583e8, 0xffd583e8, 0xffd583e8, 0xffd583e8, 0xffd583e8, 0xffd583e8, 0xffd583e8, 0xffd583e8, 0x00000000, 
    0x00000000, 0xffffffff, 0xffd583e8, 0xffd583e8, 0xffd583e8, 0xffffffff, 0xffd583e8, 0xffd583e8, 0xffd583e8, 0xffffffff, 0x00000000, 
    0x00000000, 0xff9ab7c8, 0xffffffff, 0xffd583e8, 0xffffffff, 0xff9ab7c8, 0xffffffff, 0xffd583e8, 0xffffffff, 0xff9ab7c8, 0x00000000, 
    0x00000000, 0xff9ab7c8, 0xff9ab7c8, 0xffffffff, 0xff9ab7c8, 0xff9ab7c8, 0xff9ab7c8, 0xffffffff, 0xff9ab7c8, 0xff9ab7c8, 0x00000000, 
    0x00000000, 0xff9ab7c8, 0xff9ab7c8, 0xff9ab7c8, 0xff9ab7c8, 0xff9ab7c8, 0xff9ab7c8, 0xff9ab7c8, 0xff9ab7c8, 0xff9ab7c8, 0x00000000, 
    0x00000000, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0x00000000, 
    0x00000000, 0xff9ab7c8, 0xff9ab7c8, 0xff9ab7c8, 0xff9ab7c8, 0xff9ab7c8, 0xff9ab7c8, 0xff9ab7c8, 0xff9ab7c8, 0xff9ab7c8, 0x00000000, 
    0xff979797, 0xff979797, 0xff979797, 0xff979797, 0xff979797, 0xff979797, 0xff979797, 0xff979797, 0xff979797, 0xff979797, 0xff979797
    };
    
    uLCD.BLIT(u, v, 11, 11, colors);
    wait_us(250); // Recovery time!
}

void draw_ice(int u, int v)
{
    // TODO: Implement
    //Tile still need to be designed on paper
    
    int colors[121] = {
    0xffffe051, 0xffffe360, 0xffffe66f, 0xffffe97e, 0xffffe66f, 0xffffe97e, 0xffffe360, 0xffffef9c, 0xffffe66f, 0xffffe360, 0xffffe97e, 
    0xfffff1ab, 0xffffef9c, 0xffffe66f, 0xffffe360, 0xffffe66f, 0xffffe97e, 0xffffef9c, 0xffffe360, 0xffffe97e, 0xffffe66f, 0xffffe66f, 
    0xfffff1ab, 0xffffe360, 0xffffec8d, 0xffffec8d, 0xffffec8d, 0xffffef9c, 0xfffff1ab, 0xffffe360, 0xffffe051, 0xffffe051, 0xffffe051, 
    0xffffe66f, 0xffffe051, 0xffffe66f, 0xffffec8d, 0xfffff4ba, 0xffffe97e, 0xffffec8d, 0xffffe66f, 0xffffe66f, 0xffffe66f, 0xffffef9c, 
    0xffffe66f, 0xffffe360, 0xffffe360, 0xfffff1ab, 0xffffef9c, 0xffffe97e, 0xfffffef6, 0xfffff9d8, 0xffffe051, 0xffffe051, 0xffffef9c, 
    0xffffe051, 0xffffe360, 0xffffe97e, 0xffffe360, 0xfffff1ab, 0xffffef9c, 0xffffef9c, 0xfffffbe7, 0xffffe360, 0xffffe97e, 0xffffe051, 
    0xffffe97e, 0xffffe360, 0xffffe051, 0xffffef9c, 0xfffff1ab, 0xffffe360, 0xffffe97e, 0xfffffbe7, 0xffffe66f, 0xffffe97e, 0xffffe360, 
    0xffffe97e, 0xffffe360, 0xffffe051, 0xffffe66f, 0xffffe97e, 0xffffef9c, 0xffffef9c, 0xffffef9c, 0xffffe66f, 0xffffef9c, 0xffffe360, 
    0xffffe66f, 0xffffe66f, 0xffffe051, 0xffffe360, 0xffffe97e, 0xffffe051, 0xffffe66f, 0xffffec8d, 0xffffe66f, 0xffffef9c, 0xffffe66f, 
    0xffffe051, 0xffffe97e, 0xffffe360, 0xffffe360, 0xffffec8d, 0xfffff1ab, 0xffffec8d, 0xffffe66f, 0xfffff9d8, 0xffffffff, 0xffffe051, 
    0xffffe051, 0xffffe051, 0xffffe360, 0xffffe66f, 0xffffe051, 0xffffe360, 0xffffe051, 0xffffe97e, 0xffffe051, 0xffffffff, 0xffffe360
    };
    
    uLCD.BLIT(u, v, 11, 11, colors);
    wait_us(250); // Recovery time!
}

void draw_add_time(int u, int v)
{
    // TODO: Implement
    //Tile still need to be designed on paper
    
    int colors[121] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xfff9ff00, 0xfff9ff00, 0xfff9ff00, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xfff9ff00, 0xfff9ff00, 0xfff9ff00, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xfff9ff00, 0xfff9ff00, 0xfff9ff00, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xfff9ff00, 0xfff9ff00, 0xfff9ff00, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0xfff9ff00, 0xfff9ff00, 0xfff9ff00, 0xfff9ff00, 0xfff9ff00, 0xfff9ff00, 0xfff9ff00, 0xfff9ff00, 0xfff9ff00, 0xfff9ff00, 0xfff9ff00, 
    0xfff9ff00, 0xfff9ff00, 0xfff9ff00, 0xfff9ff00, 0xfff9ff00, 0xfff9ff00, 0xfff9ff00, 0xfff9ff00, 0xfff9ff00, 0xfff9ff00, 0xfff9ff00, 
    0xfff9ff00, 0xfff9ff00, 0xfff9ff00, 0xfff9ff00, 0xfff9ff00, 0xfff9ff00, 0xfff9ff00, 0xfff9ff00, 0xfff9ff00, 0xfff9ff00, 0xfff9ff00, 
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xfff9ff00, 0xfff9ff00, 0xfff9ff00, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xfff9ff00, 0xfff9ff00, 0xfff9ff00, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xfff9ff00, 0xfff9ff00, 0xfff9ff00, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xfff9ff00, 0xfff9ff00, 0xfff9ff00, 0x00000000, 0x00000000, 0x00000000, 0x00000000
    };
    
    uLCD.BLIT(u, v, 11, 11, colors);
    wait_us(250); // Recovery time!
}

void draw_sub_time(int u, int v)
{
    // TODO: Implement
    //Tile still need to be designed on paper
    
    int colors[121] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0xfffff900, 0xfffff900, 0xfffff900, 0xfffff900, 0xfffff900, 0xfffff900, 0xfffff900, 0xfffff900, 0xfffff900, 0xfffff900, 0xfffff900, 
    0xfffff900, 0xfffff900, 0xfffff900, 0xfffff900, 0xfffff900, 0xfffff900, 0xfffff900, 0xfffff900, 0xfffff900, 0xfffff900, 0xfffff900, 
    0xfffff900, 0xfffff900, 0xfffff900, 0xfffff900, 0xfffff900, 0xfffff900, 0xfffff900, 0xfffff900, 0xfffff900, 0xfffff900, 0xfffff900, 
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000
    };
    
    uLCD.BLIT(u, v, 11, 11, colors);
    wait_us(250); // Recovery time!
}

void draw_star(int u, int v)
{
    // TODO: Implement
    //Tile still need to be designed on paper
    
    int colors[121] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff00fdff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0x00000000, 0x00000000, 0x00000000, 
    0xff00fdff, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0xff00fdff, 
    0xff00fdff, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0xff00fdff, 
    0x00000000, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0x00000000, 
    0x00000000, 0x00000000, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0x00000000, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0x00000000, 0x00000000, 
    0x00000000, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0x00000000, 0x00000000, 0x00000000, 0xff00fdff, 0xff00fdff, 0xff00fdff, 0x00000000, 
    0x00000000, 0xff00fdff, 0xff00fdff, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff00fdff, 0xff00fdff, 0x00000000
    };
    
    uLCD.BLIT(u, v, 11, 11, colors);
    wait_us(250); // Recovery time!
}

void draw_tnt(int u, int v)
{
    // TODO: Implement
    //Tile still need to be designed on paper
    
    int colors[121] = {
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0xff51ff00, 0xff51ff00, 0xff51ff00, 0xff51ff00, 0xff51ff00, 0xff51ff00, 0xff51ff00, 0xff51ff00, 0xff51ff00, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff51ff00, 0xff51ff00, 0xff51ff00, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff51ff00, 0xff51ff00, 0xff51ff00, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0x00000000, 0x00000000, 0x00000000, 0x00000000, 0xff51ff00, 0xff51ff00, 0xff51ff00, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 
    0xff51ff00, 0xff51ff00, 0xff51ff00, 0xff51ff00, 0xff51ff00, 0xff51ff00, 0xff51ff00, 0xff51ff00, 0xff51ff00, 0xff51ff00, 0xff51ff00, 
    0xff51ff00, 0xff51ff00, 0xff51ff00, 0xff51ff00, 0xff51ff00, 0xff51ff00, 0xff51ff00, 0xff51ff00, 0xff51ff00, 0xff51ff00, 0xff51ff00, 
    0x00000000, 0x00000000, 0x00000000, 0xff51ff00, 0x00000000, 0x00000000, 0x00000000, 0xff51ff00, 0x00000000, 0x00000000, 0x00000000, 
    0xff51ff00, 0x00000000, 0xff51ff00, 0xff51ff00, 0x00000000, 0xff51ff00, 0x00000000, 0xff51ff00, 0xff51ff00, 0x00000000, 0xff51ff00, 
    0xff51ff00, 0x00000000, 0xff51ff00, 0xff51ff00, 0x00000000, 0xff51ff00, 0x00000000, 0xff51ff00, 0xff51ff00, 0x00000000, 0xff51ff00, 
    0xff51ff00, 0xff51ff00, 0xff51ff00, 0xff51ff00, 0xff51ff00, 0xff51ff00, 0xff51ff00, 0xff51ff00, 0xff51ff00, 0xff51ff00, 0xff51ff00
    };
    
    uLCD.BLIT(u, v, 11, 11, colors);
    wait_us(250); // Recovery time!
}
