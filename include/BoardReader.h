#pragma once
//============================ include section ===============================
#include <fstream>
#include <vector>
#include <SFML/Graphics.hpp>
//============================== using section ===============================
using std::ifstream;
/*============================================================================
 * BoardReader
 * The class is loading the Boards file, and return it's information by the
 * needed syntax.
*/
class BoardReader {
public:
	//========================= constractors section =========================

	BoardReader();

	~BoardReader();
	//========================= method section ===============================
	
	std::vector < std::vector<char>> readLevel();
	void saveMap(const std::vector<std::vector<char>>&);
private:
	//===================== privete methods section ==========================

	void calcMapSize();
	void readMapSize();

	//======================== members section ===============================
	sf::Vector2f m_mapSize;
	std::fstream m_boardReader;
};
