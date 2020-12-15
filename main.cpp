#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <bits/stdc++.h>
#include <string>
#include <sstream>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "menu.h"

/*
*************************************************************28.11.2019 10:30******************************************************************
*/

using namespace sf;
using namespace std;
bool mouseActive = true;
char* programname;



void loadingScreen(CircleShape loadCircle,RenderWindow & win,Sprite & gameBg,Texture & gameBackground){
    gameBg.setColor(Color::Transparent);
    int counter = 0;
    loadCircle.setPosition(25,360);
    while (counter<= 575){
        win.clear(Color::Black);
        if (counter%5==0) loadCircle.move(10,0);
        counter++;
        std::cout << counter << std::endl;

        win.draw(loadCircle);
        win.display();

     }
    gameBg.setColor(Color::White);
    gameBg.setTexture(gameBackground);
}

Text Dialogs(RenderWindow & win, CircleShape & circle, int & ch, ifstream & text, bool & mouse, Text & test, Font font,Text & nameText,Texture & gameBg,int & trueSight, bool & tSR){
    Text dialogsText("",font,14);
    char buff[5500];
    ostringstream stringName;
    text.getline(buff,500,'\n');
    if(buff[0] =='h') {
            tSR = true;
            test.setStyle(Text::Bold);
        stringName << "Ародзеро";
        nameText.setString(stringName.str());
        buff[0]=' ';
        nameText.setColor(Color::White);
        }
    else if(buff[0] =='a') {
            test.setStyle(Text::Bold);
            tSR = true;
            trueSight = 1;
        stringName << "Акихара";
        nameText.setString(stringName.str());
        buff[0]=' ';
        nameText.setColor(Color(238,32,77));
    }
    else if(buff[0] =='d') {
        tSR = true;
        test.setStyle(Text::Italic);
        stringName << "";
        nameText.setString(stringName.str());
        buff[0]=' ';
        nameText.setColor(Color(238,32,77));

    }
    else if(buff[0] =='r') {
        tSR = true;
        test.setStyle(Text::Bold);
        trueSight = 2;
        stringName << "Рури";
        nameText.setString(stringName.str());
        buff[0]=' ';
        nameText.setColor(Color(153,000,102));
    }
    else if(buff[0] =='s') {
        tSR = false;
        trueSight = 0;
        stringName << "";
        nameText.setString(stringName.str());
        buff [0] =' ';
        gameBg.loadFromFile("images/think.jpg");
    }
    else if(buff[0] =='z') {
        tSR = false;
        trueSight = 0;
        stringName << "";
        nameText.setString(stringName.str());
        buff [0] =' ';
        gameBg.loadFromFile("images/kitchen.jpg");
    }
    else if(buff[0] =='x') {
        tSR = false;
        trueSight = 0;
        stringName << "";
        nameText.setString(stringName.str());
        buff [0] =' ';
        gameBg.loadFromFile("images/tea.jpg");
    }
    else if(buff[0] =='t') {
        tSR = false;
        trueSight = 0;
        stringName << "";
        nameText.setString(stringName.str());
        buff [0] =' ';
        gameBg.loadFromFile("images/third.jpg");
    }
    else if(buff[0] =='n') {
        tSR = false;
        trueSight = 0;
        stringName << "";
        nameText.setString(stringName.str());
        buff [0] =' ';
        gameBg.loadFromFile("images/night.jpg");
    }
    else if(buff[0] =='w') {
        tSR = false;
        trueSight = 0;
        stringName << "";
        nameText.setString(stringName.str());
        buff [0] =' ';
        gameBg.loadFromFile("images/work.jpg");
    }
    else if(buff[0] =='m') {
        tSR = false;
        trueSight = 0;
        stringName << "";
        nameText.setString(stringName.str());
        buff [0] =' ';
        gameBg.loadFromFile("images/morning.jpg");
    }
    else if(buff[0] =='c') {
        tSR = false;
        trueSight = 0;
        stringName << "";
        nameText.setString(stringName.str());
        buff [0] =' ';
        gameBg.loadFromFile("images/coffe.jpg");
    }
    else if(buff[0] =='e') {
        tSR = false;
        trueSight = 0;
        stringName << "";
        nameText.setString(stringName.str());
        buff [0] =' ';
        gameBg.loadFromFile("images/evening.png");
    }
    else if(buff[0] =='b') {
        tSR = false;
        trueSight = 0;
        stringName << "";
        nameText.setString(stringName.str());
        buff [0] =' ';
        gameBg.loadFromFile("images/b.jpg");
    }
    else if(buff[0] =='f') {
        tSR = false;
        trueSight = 0;
        stringName << "";
        nameText.setString(stringName.str());
        buff [0] =' ';
        gameBg.loadFromFile("images/f.jpg");
    }
    else if(buff[0] =='i') {
        tSR = false;
        trueSight = 0;
        stringName << "";
        nameText.setString(stringName.str());
        buff [0] =' ';
        gameBg.loadFromFile("images/i.png");
    }
    else if(buff[0] =='g') {
        tSR = false;
        trueSight = 0;
        stringName << "";
        nameText.setString(stringName.str());
        buff [0] =' ';
        gameBg.loadFromFile("images/g.png");
    }
    else if(buff[0] =='k') {
        tSR = false;
        trueSight = 0;
        stringName << "";
        nameText.setString(stringName.str());
        buff [0] =' ';
        gameBg.loadFromFile("images/k.jpg");
    }
    else if(buff[0] =='o') {
        tSR = false;
        trueSight = 0;
        stringName << "";
        nameText.setString(stringName.str());
        buff [0] =' ';
        gameBg.loadFromFile("images/o.png");
    }
    else if(buff[0] =='p') {
        tSR = false;
        trueSight = 0;
        stringName << "";
        nameText.setString(stringName.str());
        buff [0] =' ';
        gameBg.loadFromFile("images/p.png");
    }
    else if(buff[0] =='u') {
        tSR = false;
        trueSight = 0;
        stringName << "";
        nameText.setString(stringName.str());
        buff [0] =' ';
        gameBg.loadFromFile("images/u.png");
    }
    else if(buff[0] =='y') {
        tSR = false;
        trueSight = 0;
        stringName << "";
        nameText.setString(stringName.str());
        buff [0] =' ';
        gameBg.loadFromFile("images/y.png");
    }
    else if(buff[0] =='v') {
        tSR = false;
        trueSight = 0;
        stringName << "";
        nameText.setString(stringName.str());
        buff [0] =' ';
        gameBg.loadFromFile("images/v.png");
    }
    else if(buff[0] =='q') {
        tSR = true;
        test.setStyle(Text::Bold);
        trueSight = 0;
        stringName << "Рури";
        nameText.setString(stringName.str());
        buff[0]=' ';
        nameText.setColor(Color(153,000,102));
    }
    else if(buff[0] =='1') {
        tSR = false;
        trueSight = 0;
        stringName << "";
        nameText.setString(stringName.str());
        buff [0] =' ';
        win.setVisible(false);
        programname="prototype1.exe";
        gameBg.loadFromFile("images/think.jpg");
        system(programname);
        win.setVisible(true);


    }
    else if(buff[0] =='2') {
        tSR= false;
        trueSight = 0;
        stringName << "";
        nameText.setString(stringName.str());
        buff [0] =' ';
        win.setVisible(false);
        programname="prototype2.exe";
        gameBg.loadFromFile("images/morning.jpg");
        system(programname);
        win.setVisible(true);

    }
    else if(buff[0] =='3') {
        tSR= false;
        trueSight = 0;
        stringName << "";
        nameText.setString(stringName.str());
        buff [0] =' ';
        win.setVisible(false);
        programname="prototype3.exe";
        system(programname);
        win.setVisible(true);

    }
    else if(buff[0] =='4') {
        tSR= false;
        trueSight = 0;
        stringName << "";
        nameText.setString(stringName.str());
        buff [0] =' ';
        win.setVisible(false);
        programname="prototype4.exe";
        gameBg.loadFromFile("images/f.jpg");
        system(programname);
        win.setVisible(true);

    }
    cout << buff;
        ostringstream goldString;
        goldString << buff;
        dialogsText.setString(goldString.str());
    dialogsText.setPosition(100,600);
    dialogsText.setColor(Color::White);
	dialogsText.setStyle(Text::Bold);
	test.setString(goldString.str());
	mouse = false;

}

class Persone {
public:
	float x, y, w, h, dx, dy;
	Image image;
	Texture texture;
	Sprite sprite;
	Persone(Image &image, float X, float Y, float W, float H, String name){
		w = W; h = H;
		texture.loadFromImage(image);
        sprite.setTexture(texture);
		x = X; y = Y;
		sprite.setPosition(x,y);
	}
};

int main(){
    RenderWindow window(VideoMode(1280, 720), "Arodzero");

    window.setFramerateLimit(120);
    window.setMouseCursorGrabbed(true);
    Image icon;
    if (!icon.loadFromFile("images/i.png"))
    {
    return 1;
    }
    window.setIcon(32, 32, icon.getPixelsPtr());
    setlocale(LC_ALL, "RUS");
    ifstream text;
    text.open("dialogs/dialogs_1.txt");
    int trueSight= 0;
    bool tSR = false;
    Font font;
    font.loadFromFile("9420.ttf");
   Text out("",font,14);
    Text name("",font,18);
    out.setPosition(100,600);
    name.setPosition(230,560);
    out.setColor(Color::White);
	out.setStyle(Text::Bold);

    CircleShape loading;
    loading.setRadius(32);
    loading.setFillColor(Color::Cyan);
    Texture gameBackground;
    Texture dialogBox;
    Texture nextButtonTexture;

    dialogBox.loadFromFile("images/dialog.png");
    nextButtonTexture.loadFromFile("images/next.png");
    gameBackground.loadFromFile("images/Igra_Tema.jpg");


    CircleShape nextButton;
    RectangleShape rectangle(Vector2f(120.f, 50.f));

    nextButton.setRadius(32);
    rectangle.setSize(Vector2f(1200.f, 200.f));

    nextButton.setPosition(1205, 600);
    rectangle.setPosition(25,540);

    nextButton.setTexture(&nextButtonTexture);
    rectangle.setTexture(&dialogBox);

	Sprite gameBg(gameBackground);
    gameBg.setPosition(0, 0);




    /*loadingScreen(loading, window, gameBg, gameBackground);
    window.setActive();
    Texture loadingTexture;
    loadingTexture.isSmooth(true);
    loadingTexture.loadFromFile("images/loading.png");
    loading.setTexture(&loadingTexture);

*/
   SoundBuffer shootBuffer;
    shootBuffer.loadFromFile("audio/button.wav");
    Sound shoot(shootBuffer);

   sf::Music music;
    if (!music.openFromFile("audio/arodzero_menu_theme.ogg"))
        return EXIT_FAILURE;

    // Play the music
    music.setLoop(true);
    music.play();

	menu(window);

    Image directorImage;
	directorImage.loadFromFile("images/director-bg.png");
    Image ruriImage;
    ruriImage.loadFromFile("images/KG020005.png");
    Persone director (directorImage, 38, 185, 200.0, 400.0, "director");
    Persone ruri (ruriImage,38,185,200.0,400.0,"ruri");
    while (window.isOpen())
    {
        music.setVolume(10);
        Clock gameClock;
        int time = 0;
        time += gameClock.getElapsedTime().asMilliseconds();
		gameClock.restart();

        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        if (Keyboard::isKeyPressed(Keyboard::Escape))
		{
			menu(window);

		}

		window.clear(Color::White);
		window.draw(gameBg);

        int choice;
        if (IntRect(1205, 600, 64, 64).contains(Mouse::getPosition(window))) {  choice = 1; nextButton.setFillColor(Color::Blue); }
        else {choice=0;nextButton.setFillColor(Color::White);}
        if ((Mouse::isButtonPressed(Mouse::Left)||Keyboard::isKeyPressed(Keyboard::Right)) && choice==1 && mouseActive)
		{
		    shoot.play();
		    nextButton.setFillColor(Color::Cyan);

            Dialogs(window, nextButton, choice, text, mouseActive, out, font,name,gameBackground,trueSight,tSR);
            choice = 0;

		}
		window.draw(nextButton);
        if(trueSight==1)window.draw(director.sprite);
        if(trueSight==2)window.draw(ruri.sprite);


        if(tSR==true)window.draw(rectangle);
		window.draw(name);
		window.draw(out);


		if ( text.eof())
        {

            cout << endl << "SUCCES";
            return EXIT_SUCCESS;
        }



        int t;
        while(!Mouse::isButtonPressed(Mouse::Left)){
        t += time;
        if( t > 10000 ) t = 0; time=0;  nextButton.setFillColor(Color::White);mouseActive = true;

        }

        window.display();

    }
return EXIT_SUCCESS;
}
