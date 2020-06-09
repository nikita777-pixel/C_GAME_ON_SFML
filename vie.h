#include <SFML\Graphics.hpp>

// Realization Scral Display here:

sf::View view; // Обьявили SFML обьект вид (он является камерой) ОБЬЕКТ.

sf::View GetPlayerCordinate(float x, float y)
{
	// Функция для считывания кординат игрока:

	view.setCenter(x + 100, y); // Следим за игроком передавая его координаты.
	return view; // Возвращаем нашу камеру если PLayer поменял координату X and Y 
}