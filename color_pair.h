#ifndef COLOR_PAIR_H
#define COLOR_PAIR_H

#include <stdio.h>

enum MajorColor { WHITE, RED, BLACK, YELLOW, VIOLET };
enum MinorColor { BLUE, ORANGE, GREEN, BROWN, SLATE };

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

void ColorPairToString(const ColorPair* colorPair, char* buffer);
ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);

#endif // COLOR_PAIR_H
