#ifndef GAME_H_
#define GAME_H_
#define SCALE 30.f
#define DEG 57.29577f

#include <SFML/Graphics.hpp>
#include <Box2D/Box2D.h>
#include <math.h>
using namespace sf;
public class game{
public:
	b2World *World;
	float distance;
	void game::setWall(int x, int y, int w, int h)
	{
		b2PolygonShape gr;
		gr.SetAsBox(w / SCALE, h / SCALE);

		b2BodyDef wbdef;
		wbdef.position.Set(x / SCALE, y / SCALE);

		b2Body *b_ground = World->CreateBody(&wbdef);
		b_ground->CreateFixture(&gr, 1);
	}
	game::game(float a, float c, float gra) :World(new b2World(b2Vec2(0.0f, gra)))
	{			
		RenderWindow window(VideoMode(1200, 800), "Ball Throwing");
		window.setFramerateLimit(60);
		window.setSize(Vector2u(1200.0 * 0.8, 800.0 * 0.8));
		/////////box2d///////////
		setWall(600, 810, 2000, 10);
		setWall(600, -500, 2000, 10);
		setWall(0, 0, 10, 2000);
		setWall(1200, 0, 10, 2000);
		setWall(1040, 350, 5, 5);
		setWall(1165, 350, 5, 5);
		////////make texture & sprite
		Texture t1, t2;
		t1.loadFromFile("images/background.png");
		t2.loadFromFile("images/ball.png");
		t1.setSmooth(true);
		t2.setSmooth(true);
		Sprite sBackground(t1), sBall(t2);
		sBall.setOrigin(32, 32);//set the size of the sprite
		
		//b2PolygonShape shape;
		//shape.SetAsBox(30 / SCALE, 30 / SCALE);
		b2BodyDef bdef;
		bdef.type = b2_dynamicBody;
		/// ball /////////////
		bdef.position.Set(110.0/SCALE,400.0/SCALE);//set position
		b2CircleShape circle;
		circle.m_radius = 32 / SCALE;
		b2Body *b = World->CreateBody(&bdef);
		b2FixtureDef fdef;
		fdef.shape = &circle;
		fdef.restitution = 0.88f;//how bouncy
		fdef.density = 0.21f;//how heavy
		b->SetUserData("ball");// assign to "ball" to keep track & receive input of the ball body
		b->CreateFixture(&fdef);//make fixture of the World's bodies fixture
		/////////////////////////
		b->ApplyLinearImpulseToCenter(b2Vec2(a, c), true);//apply force to body of the ball
		distance = 1000.f;
		while (window.isOpen()) // loop through a new window object
		{
			Event e;
			while (window.pollEvent(e))
			{
				if (e.type == Event::Closed)
					window.close();
			}
			window.clear();
			for (int n = 0; n<2; n++) // 2 - speed
				World->Step(1 / 60.f, 8, 3);
			//////////Draw///////////////
			window.draw(sBackground);
			//loop through all the bodylist
			for (b2Body* it = World->GetBodyList(); it != 0; it = it->GetNext())
			{
				b2Vec2 pos = it->GetPosition();
				float angle = it->GetAngle();
				if (it->GetUserData() == "ball")// call out the ball body to apply its new position and draw it
				{
					float x1 = pos.x*SCALE;
					float y1 = pos.y*SCALE;
					//get the current distance between the ball body and the location in the middle of the goal basket(1100,360)
					float mid = sqrt((x1 - 1100)*(x1 - 1100) + (y1 - 360)*(y1 - 360));
					//and find the shortest distance
					if (distance >= mid )distance = mid;
					sBall.setPosition(x1, y1);
					sBall.setRotation(angle*DEG);
					window.draw(sBall);
				}
			}
			window.display();
		}
	}
};
#endif