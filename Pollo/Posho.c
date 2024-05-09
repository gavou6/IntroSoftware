#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(600, 600), "SFML works!");
    sf::CircleShape shape(200.f);
    sf::CircleShape shape1(100.f);
    sf::CircleShape triangle1(80, 3);
    sf::CircleShape triangle2(80, 3);
    sf::CircleShape triangle3(100, 3);
    sf::CircleShape triangle4(80, 3);
    sf::CircleShape shape2(30.f);
    shape.setFillColor(sf::Color::Yellow);
    shape1.setFillColor(sf::Color::Yellow);
    shape2.setFillColor(sf::Color::Black);
    triangle1.setFillColor(sf::Color::Red);
    triangle2.setFillColor(sf::Color::Red);
    triangle3.setFillColor(sf::Color::Red);
    triangle4.setFillColor(sf::Color::Red);
    shape1.setPosition(350.f, 10.f);
    triangle1.setPosition(10.f, 350.f);
    triangle2.setPosition(250.f, 350.f);
    triangle3.setPosition(100.f, 100.f);
    triangle4.setPosition(465.f, 90.f);
    shape2.setPosition(450.f, 40.f);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.draw(shape1);
        window.draw(shape2);
        window.draw(triangle1);
        window.draw(triangle2);
        window.draw(triangle3);
        window.draw(triangle4);
        window.display();
    }

    return 0;
}
