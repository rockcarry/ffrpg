#ifndef _FFRPG_MAP_H_
#define _FFRPG_MAP_H_

// ����ͷ�ļ�
#include <windows.h>

// ���Ͷ���
typedef struct {
    char    mapname[64];
    int     maptw; // map width in tile unit
    int     mapth; // map height in tile unit
    int     tilew; // tile width
    int     tileh; // tile height
    char    tilepicn[64];
    int     tilepicw;
    int     tilepich;
    HBITMAP tilebmp;
    BYTE   *data;
} MAP;

// ��������
BOOL map_init  (MAP *map, char *file);
BOOL map_save  (MAP *map, char *file);
void map_free  (MAP *map);
void map_bitblt(HDC hdc, int xdst, int ydst, int wdst, int hdst, MAP *map, int xmap, int ymap);

#endif

