#ifndef GRAPHICENGINE_H
#define GRAPHICENGINE_H

class GraphicEngine {
   public:
      void clearScreen(void);
      void printIntro(void);
      void drawEmptyBoard(int width, int height);
      void drawBoard(int pos, int val);
      void drawYouWon(void);
      void drawYouLost(void);
};

#endif // GRAPHICENGINE_H