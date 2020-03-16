#ifndef MAINGAME_H
#define MAINGAME_H

class Graphics;

class MainGame {

public:
	MainGame();
	~MainGame();
	void play();
	
private:
	void draw(Graphics &graphics);
	void update(float elapsedTime);
};

#endif // !MAINGAME_H
