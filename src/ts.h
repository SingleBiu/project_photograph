/*
 * @Author: SingleBiu
 * @Date: 2021-07-26 15:27:24
 * @LastEditors: SingleBiu
 * @LastEditTime: 2024-10-14 21:00:14
 * @Description: file content
 */
#ifndef  __TS_H__
#define  __TS_H__

#include <math.h>
#include<stdlib.h>
#include <linux/input.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define MOVE_EMPTY -1
#define MOVE_UP 1
#define MOVE_DOWN 2
#define MOVE_LEFT 3
#define MOVE_RIGHT 4



// enum ts_type
// {
//     EMPTY = -1,
//     MOVE_UP = 1,
//     MOVE_DOWN,
//     MOVE_LEFT,
//     MOVE_RIGHT
// };

// CAUTION
// 触摸屏分辨率为1024x600

// int get_user_input(void);
void* get_user_input(int _ts_fd);
int touch_init();



#endif



