#include <SFML\Graphics.hpp>

// Realization Scral Display here:

sf::View view; // �������� SFML ������ ��� (�� �������� �������) ������.

sf::View GetPlayerCordinate(float x, float y)
{
	// ������� ��� ���������� �������� ������:

	view.setCenter(x + 100, y); // ������ �� ������� ��������� ��� ����������.
	return view; // ���������� ���� ������ ���� PLayer ������� ���������� X and Y 
}